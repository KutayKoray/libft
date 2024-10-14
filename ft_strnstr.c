#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    if (needle[0] == 0)
        return ((char *) haystack);
    while (haystack[i] && i < len)
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == 0)
                return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return (0);
}


int main ()
{
    printf("%s \n", ft_strnstr("merhabaqwerty", "haba", 7));
}
