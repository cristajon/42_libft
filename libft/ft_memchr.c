/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:15:53 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/23 13:49:40 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*temp;

	i = 0;
	// if (n == 0 || s == '\0')
	// 	return (0);
	while (i < n)
	{
		temp = ((unsigned const char *)s);
		// if( temp == NULL)
		// 	return (NULL);
		if (temp[i] == (unsigned const char)c)
		{
			return (((char *)&s[i]));
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s =  "012345";
// 	char *s2 = "012345";
// 	int c = 0;
// 	size_t n = 1;
// 	char *a = ft_memchr(s,c,n);
// 	printf("lo que me da        -> %s\n", a);
// 	printf("lo que tiene que dar-> %s\n", memchr(s2, c, n));
// }
