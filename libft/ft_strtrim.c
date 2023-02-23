/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:41:58 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/23 14:17:42 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(char const *s1, char *s2, size_t i, size_t p)
{
	size_t	a;

	if (i == 0)
		a = 0;
	if (p == 0)
	{
		printf("∞");
		s2[a] = s1[i];
		a++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	p;
	size_t	a;
	size_t	n;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
	{
		free(s2);
		return (0);
	}
	a = 0;
	i = 0;
	while (i <= ft_strlen(s1) + 1)
	{
		n = 0;
		p = 0;
		while (n <= ft_strlen(set))
		{
			if (s1[i] == set[n])
				p = 1;
			n++;
		}
		ft_write(s1, s2, i, p);
		i++;
	}
	s2[a] = '\0';
	return (s2);
}
// // bo me funciona no se por que 
// int main()
// {
// 	const char *s1 = "   xxxtripouille   xxx";
// 	const char *s2 = " x";
// 	printf("lo que me da		->%s<-\n", ft_strtrim(s1,s2));
// 	return 0;
// }