/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:38:09 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/30 22:28:15 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	ctrl_nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = 147483648;
			write(1, "2", 1);
			ctrl_nbr = nb;
		}
		else
			ctrl_nbr = (nb) * (-1);
	}
	else
		ctrl_nbr = nb;
	if (ctrl_nbr >= 10)
	{
		ft_putnbr(ctrl_nbr / 10);
	}
	ctrl_nbr = ctrl_nbr % 10 + '0';
	ft_putchar(ctrl_nbr);
}
