int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int count;
    
    int * ans = (int*)malloc(sizeof(int)*numsSize);
    
    for(int i=0; i<numsSize; i++)
    {
        count = 0;
        
        for(int j=0; j<numsSize; j++)
        {
            if(nums[i]>nums[j])
                count++;
        }
        
        ans[i] = count;
    }
    
    *returnSize = numsSize;
    return ans;
}