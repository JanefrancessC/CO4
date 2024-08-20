/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cokeke <cokeke@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:49 by cokeke            #+#    #+#             */
/*   Updated: 2024/08/20 15:31:51 by cokeke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		res *= 10;
		res += (*str - 48);
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("Hello"));
	printf("%d\n", ft_atoi("-+-1234ab6yr"));
	printf("%d\n", ft_atoi("   23r34-"));
	return (0);
}
*/
