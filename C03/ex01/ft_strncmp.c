/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:02:45 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/30 17:02:46 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && (len < n))
	{
		s1++;
		s2++;
		len++;
	}
	if (len == n)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
