int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int * ans = (int*)malloc(sizeof(int)*numsSize*2);
    
    int i;
    *returnSize = numsSize*2;
    
    for(i=0; i<numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i+numsSize] = nums[i];
    }
    
    return ans;
}