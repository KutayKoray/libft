/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoray <kkoray@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:25:49 by kkoray            #+#    #+#             */
/*   Updated: 2024/10/19 21:57:12 by kkoray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*tmp;
	char			cc;

	cc = (char)c;
	tmp = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			tmp = (char *)(s + i);
		i++;
	}
	if (s[i] == cc)
		tmp = (char *)(s + i);
	return (tmp);
}
