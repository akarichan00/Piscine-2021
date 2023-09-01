char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    // Copy n characters from source to destination
    //The first loop copies characters from src to dest as long as i is less than n
    //and a null terminator '\0' is not encountered in src
    while( i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    //we use a second loop to fill dest with null bytes ('\0') if n characters have not been copied.
    while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return dest;
}