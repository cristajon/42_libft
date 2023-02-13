/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:36:57 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/13 11:00:53 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_countl(char const *s, char c)
{
	int i;
	int l;
	
	i = 0;
	l = 0;
	while(s[i] == c)
		i++;
	while(s[i])
	{
		if(s[i] == c)
			return(l);
		l++;
	}
	return (l);
}

// int	ft_put(char **arr, char const *s, char c, int i)
// {
// 	int	l; 
	
// 	l = 0;
// 	if(s[i] == c)
// 	{
// 		while(s[i] == c)
// 			i++;
// 	}
// 	while(s[i] != c)
// 	{
// 		arr[p][l] = s[i];
// 		i++;
// 		l++;
// 	}
// 	return(i);
//}

void	ft_do(char **arr, char const *s, char c)
{
	int	l;
	int	i;
	int	p;

	i = 0;
	l = 0;
	p = 0;
	while(arr)
	{
		arr[p] = malloc((ft_countl(s ,c)) + 1 * sizeof(char));
		if(s[i] == c)
		{
			while(s[i] == c)
				i++;
		}
		while(s[i] != c)
		{
			arr[p][l] = s[i];
			i++;
			l++;
		}
		p++;
	}
	arr[p] = "\0";
}

int	ft_countw(char const *s,int c)
{
	int	i;
	int	p;
	int	n;

	i = 0;
	p = 0;
	if(!s)
		return (0);
	while(s)
	{
		n = 0;
		while(s[i] == c)
		{
			n = n + 1;
			if(n == 1)
				p++;
		i++;
		}
		i++;
	}
	return (p);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	int p;

	p = 0;
	if (!s)
		return(NULL);
	if(s)
	{
		p = ft_countw(s, c);
		arr = malloc((p + 1) * sizeof(char));
		ft_do(arr,s,c);
	}
	if(p == 0 || !arr)
	{
		while(arr[p])//hacer un while que haga free para cada arr[p] que me haga un free
		{
			free(arr[p]);
			p++;
		}
	}
	arr[p++] = "\0";
	return(arr);
}



