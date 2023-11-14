/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olamrabt <olamrabt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:52:28 by olamrabt          #+#    #+#             */
/*   Updated: 2023/11/11 17:42:57 by olamrabt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == (unsigned char)c) 
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

//  int main(void)
// {
// 	char s[] = "teste";
// 	/* 1 */ printf ("result : %s\n", ft_strchr(s, '\0' ));
// 	/* 1 */ printf ("expected : %s\n\n", strchr(s, '\0'  ) );

// 	/* 1 */ printf ("offset (teste, 0): %ld\n", ft_strchr(s, '\0') - s);
// 	/* 1 */ printf ("offset (teste, 0): %ld\n\n", strchr(s, '\0') - s);

// 	/* 1 */ printf ("result : %p\n", ft_strchr(s, 'l') );
// 	/* 1 */ printf ("expected : %p\n\n", strchr(s, 'l'));

// 	/* 1 */ printf ("result : %p\n", ft_strchr(s, 'z') );
// 	/* 1 */ printf ("expected : %p\n\n", strchr(s, 'z') );

// 	/* 1 */ printf ("result : %p\n", ft_strchr(s, 0) );
// 	/* 1 */ printf ("expected : %p\n\n", strchr(s, 0) );

// 	/* 1 */ printf ("result : %p\n", ft_strchr(s,  'a') );
// 	/* 1 */ printf ("expected : %p\n\n", strchr(s, 'a') );

// 	/* 1 */ printf ("offset (teste, e): %ld\n", ft_strchr(s, 'e') - s);
// 	/* 1 */ printf ("offset (teste, e): %ld\n\n", strchr(s, 'e') - s);
// 	return (0);
// }
