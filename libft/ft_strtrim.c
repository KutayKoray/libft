/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoray <kkoray@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:37:16 by kkoray            #+#    #+#             */
/*   Updated: 2024/10/16 19:03:25 by kkoray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trim(const char c, const char *set);
static char	*new_str(const char *str, size_t start_index, size_t len);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (is_trim(s1[i], set))
		i++;
	while (is_trim(s1[j], set))
		j--;
	return (new_str(s1, i, (j - (i - 2))));
}

static int	is_trim(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*new_str(const char *str, size_t start_index, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (len <= 0 || start_index >= ft_strlen(str))
		return (ft_strdup(""));
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while ((i + 1) != len)
	{
		new_str[i] = str[start_index];
		i++;
		start_index++;
	}
	new_str[i] = 0;
	return (new_str);
}
