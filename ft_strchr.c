/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:24:33 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/01/27 15:33:58 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int cont;
	
	i = 0;
	cont= ft_strlen(str);
	if(!str)
		return(NULL);
	while ((i <= cont + 1))
	{
		if(str[i] == (unsigned char) c)
		{
			return(((char *)&str[i]));
		}
		i++;
	}
	return(NULL);
}

// int main()
// {
// 	const char *str = "haaakaaaaa";
// 	int c = 'k';
	
// 	printf("lo que me da        -> %s\n", ft_strchr(str,c));
// 	printf("lo que tiene que dar-> %s\n", strchr(str,c));
// }