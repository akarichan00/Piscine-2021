int ft_str_is_lowercase(char *str)
{
    //return 1 if the string given as a parameter contains only lowercase alphabetical characters
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else // return 0 if it contains any other character
        {
            return 0;
        }
    }
    return 1;
}