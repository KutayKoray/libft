/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoray <kkoray@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:16:14 by kkoray            #+#    #+#             */
/*   Updated: 2024/10/19 12:10:43 by kkoray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	find_len(long nbr);

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		nbr_len;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	nbr_len = find_len(nbr);
	str = (char *)malloc(sizeof(char) * nbr_len + 1);
	if (!str)
		return (NULL);
	str[nbr_len] = '\0';
	if (nbr < 0)
		nbr *= -1;
	while (nbr)
	{
		str[nbr_len - 1] = ((nbr % 10) + '0');
		nbr /= 10;
		nbr_len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

static int	find_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
