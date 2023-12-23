#include <stdio.h>
#include <stdbool.h>

bool canJump(int nums[], int numsSize) {
    int maxReach = 0;
    int i;
    for (i = 0; i < numsSize; ++i) {
        if (i > maxReach) {
            return false;
        }

        maxReach = (maxReach > i + nums[i]) ? maxReach : (i + nums[i]);

        if (maxReach >= numsSize - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int nums[] = {3,2,1,0,4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    bool result = canJump(nums, numsSize);
    if(result==1)
    {
    	printf("True");
	}
	else
	{
		printf("Fales");	
	}

    return 0;
}

