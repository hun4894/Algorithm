int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int i,j,sum;
    int * runningSum = (int*)malloc(sizeof(int)*numsSize);
    
    for(i=0; i<numsSize; i++)
    {
        sum=0;
        for(j=0; j<=i; j++)
        {
            sum += nums[j];
        }
        
        runningSum[i] = sum;
    }
    
    *returnSize = numsSize;
    
    return runningSum;
}