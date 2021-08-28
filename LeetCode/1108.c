char * defangIPaddr(char * address)
{
    char * ans = (char*)malloc(sizeof(char)*22);
    int i = 0;
    int j = 0;
    
    while(address[i] != '\0')
    {
        if(address[i] == '.')
        {
            ans[j] = '[';
            j++;
            ans[j] = '.';
            j++;
            ans[j] = ']';
            i++;
            j++;
        }
        else
        {
            ans[j] = address[i];
            i++;
            j++;
        }
    }
    ans[j] = '\0';
    return ans;
}