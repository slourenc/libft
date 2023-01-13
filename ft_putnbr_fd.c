/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slourenc <slourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:59:28 by slourenc          #+#    #+#             */
/*   Updated: 2023/01/08 15:03:22 by slourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_number(int number, int fd)
{
	if (number > 9)
		print_number(number / 10, fd);
	number = (number % 10) + '0';
	write(fd, &number, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (!fd && fd > 0)
		return ;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	print_number(n, fd);
}
