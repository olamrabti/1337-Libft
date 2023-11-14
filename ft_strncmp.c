/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:48 by olamrabt          #+#    #+#             */
/*   Updated: 2023/10/31 13:52:48 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     const char *str1 = "Hello, world!";
//     const char *str2 = "Hello, there!";
//     size_t n = 3;

//     int result_custom = ft_strncmp(str1, str2, n);
//     int result_standard = strncmp(str1, str2, n);

//     printf("Custom strncmp: %d\n", result_custom);
//     printf("Standard strncmp: %d\n", result_standard);

//     return 0;
// }
