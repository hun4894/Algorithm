int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int * ans = (int*)malloc(sizeof(int)*numsSize);
    
    for(int i=0; i<n; i++)
    {
        ans[i*2] = nums[i];
        ans[i*2+1] = nums[i+n];
    }
    
    *returnSize = numsSize;
    return ans;
}