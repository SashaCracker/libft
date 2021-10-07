/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:17:38 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/27 12:17:40 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_razryad(int n)
{
	int	d;

	d = 1;
	if ((n >= -2147483647) && (n < 0))
		n = n * (-1);
	while ((n / 10) != 0)
	{
		d++;
		n = n / 10;
	}
	return (d);
}

static int	ft_ten_power(int n)
{
	int	power;

	power = 1;
	n = n - 1;
	while (n > 0)
	{
		power = power * 10 ;
		n--;
	}
	if (power == 1)
		power = 10;
	return (power);
}

static int	ft_otric_num(int n, int fd)
{
	if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	k;
	int		razr;

	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		n = 147483648;
	}
	razr = ft_razryad(n);
	n = ft_otric_num(n, fd);
	while (razr > 0)
	{
		if (razr == 1)
			k = n + 48;
		else
		{
			k = (n / ft_ten_power(razr)) + 48;
			n = n % ft_ten_power(razr);
		}
		write(fd, &k, 1);
		razr--;
	}
}
