#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    unsigned char *str;
    size_t i;

    if(!s)
        return (NULL);
    if(start > ft_strlen(s))
        return (ft_strdup(""));
    if(len > ft_strlen(s + start))
        len = ft_strlen(s + start);

    str = ft_calloc(len + 1, sizeof(char));
    if(!str)
        return(NULL);
    i = 0;
    while(i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
}

