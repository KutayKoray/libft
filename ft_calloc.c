void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    int i;

    tmp = malloc(size * count);
    if(!tmp)
        return (NULL);
    i = 0;
    while (i < size * count)
    {
        *(tmp + i) = 0;
        i++;
    }
    return (tmp);
}

