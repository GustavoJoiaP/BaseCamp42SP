/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:02:30 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/30 17:03:53 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	int				count;

	len = 0;
	count = 0;
	while (dest[count] != '\0')
	{
		count ++;
	}
	while ((*src != '\0') && (len < nb))
	{
		dest[count] = *src;
		count++;
		src++;
		len++;
	}
	dest[count] = '\0';
	return (dest);
}
