//#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
        write(fd, "-2147483648", 11);

    else if(n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
        ft_putnbr_fd(n, fd);
    }
    else
    {
        if(n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n % 10, fd);
        }
        else
        {
            n += '0';
            write(fd, &n, 1);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(2, "usage: ./program number\n", 25);
        return 1;
    }

    int fd = open("deneme.txt", O_RDWR | O_CREAT, 0644);
    if (fd == -1)
    {
        return 1;
    }
    int param = atoi(argv[1]);

    ft_putnbr_fd(param, fd);

    close(fd);
    return 0;
}
