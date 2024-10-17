/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoray <kkoray@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:19:58 by kkoray            #+#    #+#             */
/*   Updated: 2024/10/17 20:52:41 by kkoray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		*(tmp + i) = 0;
		i++;
	}
	return (tmp);
}
