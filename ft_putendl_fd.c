#include "libft.h"

void    ft_putendl_fd()
{
    int i;

    i = 0;
    while(str[i++])
        write(fd, &str[i], 1);
    write(fd, "\n", 1);
}
