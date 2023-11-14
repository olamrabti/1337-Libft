/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:45 by olamrabt          #+#    #+#             */
/*   Updated: 2023/11/01 11:48:07 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_strlen("abc"));
// 	return 0;
// }
