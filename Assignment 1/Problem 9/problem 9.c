#include <stdio.h>
int searchInsert(int nums[], int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

int main() {
    int nums1[] = {1, 3, 5, 6};

    int index;

    // Test case 1: target = 5 → Output: 2
    index = searchInsert(nums1, 4, 5);
    printf("Input: nums = [1,3,5,6], target = 5 → Output: %d\n", index);

    // Test case 2: target = 2 → Output: 1
    index = searchInsert(nums1, 4, 2);
    printf("Input: nums = [1,3,5,6], target = 2 → Output: %d\n", index);

    // Test case 3: target = 7 → Output: 4
    index = searchInsert(nums1, 4, 7);
    printf("Input: nums = [1,3,5,6], target = 7 → Output: %d\n", index);

    return 0;
}
/* 
We have a sorted array and a target number.

If the number exists → return its index.  
If not → return the index where it should be inserted.

We use binary search to do this fast in O(log n).

At the end, 'left' points to the correct position for the target.
*/
