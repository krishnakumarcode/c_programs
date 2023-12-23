#include <stdio.h>

int maxSubArray(int nums[], int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int maxSum = nums[0];  
    int currentSum = nums[0];  
	int i;
    for (i = 1; i < numsSize; ++i) {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : (currentSum + nums[i]);

        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int nums[] =  {5,4,-1,7,8};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maxSubArray(nums, numsSize);

    printf("%d\n", result);

    return 0;
}

