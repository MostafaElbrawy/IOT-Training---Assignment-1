#include <stdio.h>

// Function to find first and last position of a target using binary search
void searchRange(int nums[], int numsSize, int target, int result[2]) {
    int left = 0, right = numsSize - 1;
    result[0] = -1;

    // Find first occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result[0] = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    left = 0;
    right = numsSize - 1;
    result[1] = -1;

    // Find last occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result[1] = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main() {
    int result[2];

    int nums1[] = {5, 7, 7, 8, 8, 10};
    searchRange(nums1, sizeof(nums1) / sizeof(nums1[0]), 8, result);
    printf("Input: nums = [5,7,7,8,8,10], target = 8 → Output: [%d, %d]\n", result[0], result[1]);

    searchRange(nums1, sizeof(nums1) / sizeof(nums1[0]), 6, result);
    printf("Input: nums = [5,7,7,8,8,10], target = 6 → Output: [%d, %d]\n", result[0], result[1]);

    int nums2[] = {}; // empty array
    searchRange(nums2, 0, 0, result);
    printf("Input: nums = [], target = 0 → Output: [%d, %d]\n", result[0], result[1]);

    return 0;
}


/* 
This is a classic search problem. So, which search algorithm offers O(log n) time complexity?

There are many algorithms that achieve logarithmic performance, but here I chose Binary Search because it’s simple, efficient, and easy to understand.

Binary Search is a powerful algorithm used to find a specific element in a sorted array or list.  
Instead of scanning elements one by one (as in linear search), it repeatedly divides the search range in half, significantly reducing the number of comparisons needed.

This makes it ideal for large datasets where performance matters.
*/
