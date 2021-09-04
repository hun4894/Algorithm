bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    int max;
    bool * result = (bool*)malloc(sizeof(int)*candiesSize);
    
    for(int i=0; i<candiesSize; i++)
    {
        max = candies[i] + extraCandies;
        
        for(int j=0; j<candiesSize; j++)
        {
            if(max < candies[j])
                max = candies[j];
        }
        
        if(max == candies[i] + extraCandies)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }
    
    *returnSize = candiesSize;
    return result;
}