/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:25 by olamrabt          #+#    #+#             */
/*   Updated: 2023/10/31 14:40:44 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = (char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main()
// {
// 	char arr[5];

// 	// Initialize the entire array to zero using memset
// 	memset(arr, 119, sizeof(arr));

// 	for (int i = 0; i < 5; i++) {
// 		printf("%c ", arr[i]);
// 	}
// 	printf("\n");
// 	// Now all elements of arr are set to 0
// 	ft_memset(arr, 119, sizeof(arr));

// 	// Now all elements of arr are set to 0
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c ", arr[i]);
// 	}

// 	return 0;
// }
