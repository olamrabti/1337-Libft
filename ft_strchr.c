/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:28 by olamrabt          #+#    #+#             */
/*   Updated: 2023/11/19 16:51:44 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == (char)c) 
			return ((char *)str);
		str++;
	}
	return (NULL);
}
