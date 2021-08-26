int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int)*numsSize);
    int i;
    *returnSize = numsSize;
    for(i=0; i<numsSize; i++)
    {
        ans[i] = nums[nums[i]];
    }
    
    return ans;
}
