#include <iostream>
using namespace std;

// modified binary search for searching in unsorted array.
int binarySearch(int n, int arr[], int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        // check which half is sorted.
        if (arr[start] <= arr[mid])
        {
            // left half is sorted.
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // ṛight half is sorted.
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int ans = binarySearch(n, arr, target);
    cout << ans;
    return 0;
}