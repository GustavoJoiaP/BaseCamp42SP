/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 14:56:24 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/23 15:11:19 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;
	int	aux1;

	aux = *a / *b;
	aux1 = *a % *b;
	*a = aux;
	*b = aux1;
}
