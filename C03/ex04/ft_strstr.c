/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:02:23 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/30 19:51:26 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count_to_find;
	int	flag;

	count_to_find = 0;
	count = 0;
	flag = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		while ((str[flag] == to_find[count_to_find])
			&& (str[flag + 1] == to_find[count_to_find + 1]))
		{
			count_to_find ++;
			flag ++;
			if (to_find[count_to_find + 1] == '\0')
				return (str + count);
		}
		count_to_find = 0;
		count ++;
		flag = count;
	}
	return (0);
}
