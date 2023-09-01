char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copy characters from src to dest until a null terminator is encountered
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    //When the loop finishes, i holds the index where the null terminator in src was found.
    //You add a null terminator to dest at the same index using dest[i] = '\0'.
    dest[i] = '\0';

    return dest;
}