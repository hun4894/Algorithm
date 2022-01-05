int mostWordsFound(char ** sentences, int sentencesSize)
{
    
    int max = 0;
    int words;
    
    for(int i = 0; i < sentencesSize; i++)
    {
        words = 1;
        
        for(int j = 0; j < strlen(sentences[i]); j++)
        {
            if(sentences[i][j] == ' ')
                words++;
        }
        
        if(max < words)
            max = words;
    }
    
    return max;
}