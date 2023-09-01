int ft_str_is_alpha(char *str)
{
    int i = 0;

    while(str[i])
    {
        char test = str[i];

        //return 1 if the string given as a parameter contains only alphabetical characters
        if((str[i] >= 'A' || str[i] >= 'a') && (str[i] <= 'Z' || str[i] <= 'z'))
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