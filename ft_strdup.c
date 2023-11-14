/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:32 by olamrabt          #+#    #+#             */
/*   Updated: 2023/10/31 13:52:32 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;

	if (!s[0])
	{
		copy = (char *)malloc(sizeof(char));
		if (!copy)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
	copy = (char *)malloc(ft_strlen((char *)s) + 1 * sizeof(char));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, ft_strlen((char *)s));
	copy[ft_strlen((char *)s)] = '\0';
	return (copy);
}

// #include <stdio.h>

// int main()
// {
//     const char *original = "sadfvbf";
//     char *copy = ft_strdup(original);
//     if (copy)
//     {
//         printf("Original: -%s-\n", original);
//         printf("Copy:     -%s-\n", copy);

//         // free the allocated memory when done with it
//         free(copy);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
