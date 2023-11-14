/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:45:17 by olamrabt          #+#    #+#             */
/*   Updated: 2023/11/11 18:58:27 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(const char *haystack, const char *needle, size_t len)
{
	size_t	temp;

	if (!ft_strlen(needle))
		return ((void *)haystack);
	temp = (size_t)(ft_strchr(haystack, *needle) - haystack);
	if (ft_strlen(needle) == 1 && temp < len)
		return (ft_strchr(haystack, needle[0]));
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	j = 0;
	temp = len;
	if (!haystack && !len)
		return (NULL);
	if (ft_strlen(needle) == 1 || !ft_strlen(needle))
		return (ft_check(haystack, needle, len));
	while (haystack[j] && len)
	{
		i = 0;
		while (needle[i] && haystack[j + i] == needle[i] && len--)
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack + j);
		j++;
		len--;
	}
	if (ft_strlen(haystack + j) > ft_strlen(needle) && j < temp - 1)
		return (ft_strnstr(&haystack[ft_strlen(haystack + j)], needle, j));
	return (NULL);
}
