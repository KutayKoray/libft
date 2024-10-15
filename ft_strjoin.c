#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    unsigned char *str;
    size_t i;
    size_t j;

    str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if(!str)
        return (NULL);
    i = 0;
    j = 0;
    while(s1[i])
        str[j++] = s1[i++];
    i = 0;
    while(s2[i])
        str[j++] = s2[i++];
    str[j] = 0;
    return (str);
}

