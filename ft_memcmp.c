/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:16 by olamrabt          #+#    #+#             */
/*   Updated: 2023/10/31 13:52:16 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n--)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		a++;
		b++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, Universe!";
//     size_t n = 6; // Number of bytes to compare

//     int result = ft_memcmp(str1, str2, n);

//     if (result == 0) {
//         printf("The first %zu bytes of both strings are equal.\n", n);
// //     } else if (result < 0) {
// //         printf("The first %zu bytes of str1
// are lexicographically less than str2.\n", n);
// //     } else {
// //         printf("The first %zu bytes of str1
// are lexicographically greater than str2.\n", n);
// //     }

// //     return 0;
// // }
