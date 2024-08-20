/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cokeke <cokeke@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:21:39 by cokeke            #+#    #+#             */
/*   Updated: 2024/08/20 16:56:55 by cokeke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar("0123456789"[nb % 10]);
}
/*
#include <stdio.h>

int	main(void)
{
	int	numbers[5] = {0, 123, -456, 2147483647, -2147483648};
	int	size;
	int	i;

	i = 0;
	size = sizeof(numbers) / sizeof(int);
	while (i < size)
	{
		//printf("%d, ", numbers[i]);
		ft_putnbr(numbers[i]);
		printf("\n");
		i++;
	}
	return (0);
}
*/
