int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
    int arrSize = encodedSize+1;
    *returnSize = arrSize;
    
    int * arr = (int*)malloc(sizeof(int)*(arrSize));
    
    arr[0] = first;
    
    for(int i=1; i<arrSize; i++)
    {
        arr[i] = arr[i-1]^encoded[i-1];
    }
    
    return arr;
}