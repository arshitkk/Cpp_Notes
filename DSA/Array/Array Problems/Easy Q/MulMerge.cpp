#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <thread>

std::vector<int> merge(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;

    while (!left.empty() && !right.empty())
    {
        if (left[0] < right[0])
        {
            result.push_back(left[0]);
            left.erase(left.begin());
        }
        else
        {
            result.push_back(right[0]);
            right.erase(right.begin());
        }
    }

    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    return result;
}

std::vector<int> merge_sort(std::vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());

    left = merge_sort(left);
    right = merge_sort(right);

    return merge(left, right);
}

std::vector<int> threaded_merge_sort(std::vector<int> arr, int num_threads)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    if (num_threads <= 1 || arr.size() < 1000)
    {
        return merge_sort(arr);
    }

    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());

    std::vector<int> left_result;
    std::vector<int> right_result;

    std::thread left_thread([&left_result, &left, num_threads]()
                            { left_result = threaded_merge_sort(left, num_threads / 2); });

    std::thread right_thread([&right_result, &right, num_threads]()
                             { right_result = threaded_merge_sort(right, num_threads / 2); });

    left_thread.join();
    right_thread.join();

    return merge(left_result, right_result);
}

int main()
{
    int num_elements = 10000;
    std::vector<int> arr;

    // Initialize the array with random values
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(1, num_elements);

    for (int i = 0; i < num_elements; i++)
    {
        arr.push_back(distribution(generator));
    }

    // Measure time for merge sort
    auto start_time = std::chrono::high_resolution_clock::now();
    std::vector<int> sorted_arr = merge_sort(arr);
    auto end_time = std::chrono::high_resolution_clock::now();
    double merge_sort_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count() / 1000.0;

    // Measure time for multithreaded merge sort
    start_time = std::chrono::high_resolution_clock::now();
    std::vector<int> sorted_arr_mt = threaded_merge_sort(arr, 4);
    end_time = std::chrono::high_resolution_clock::now();
    double multithreaded_merge_sort_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count() / 1000.0;

    // Check if the arrays are sorted correctly
    if (sorted_arr == sorted_arr_mt)
    {
        std::cout << "Merge Sort Time: " << merge_sort_time << " seconds\n";
        std::cout << "Multithreaded Merge Sort Time: " << multithreaded_merge_sort_time << " seconds\n";
    }
    else
    {
        std::cerr << "Sorting results do not match.\n";
    }

    return 0;
}
