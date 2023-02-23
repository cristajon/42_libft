/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:47:43 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/23 12:06:16 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	a;

	if (n == 2147483647)
		write(fd, "2147483647", 10);
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd((n * (-1)), fd);
	}
	else if (n <= 9 && n >= 0)
	{
		n = n + 48;
		write(fd, &n, 1);
		write(fd, "\0", 1);
	}
	else if (n > 9)
	{
		a = n / 10;
		ft_putnbr_fd(a, fd);
		n = n % 10;
		ft_putnbr_fd(n, fd);
	}
}
