int ft_str_is_uppercase(char *str)
{
    //return 1 if the string given as a parameter contains only uppercase alphabetical characters
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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