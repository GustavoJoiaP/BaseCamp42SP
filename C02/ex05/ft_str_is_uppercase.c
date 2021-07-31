/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:21:32 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/29 16:21:33 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90) && str[i] != 0)
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag);
}
