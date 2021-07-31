/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:21:54 by gjoia-pa          #+#    #+#             */
/*   Updated: 2021/07/29 16:21:55 by gjoia-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alphanumeric(char *c)
{
	if (!((*c >= 'a' && *c <= 'z')
			|| (*c >= 'A' && *c <= 'Z')
			|| (*c >= '0' && *c <= '9')))
		return (0);
	return (1);
}

char	get_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (*c - ('a' - 'A'));
	return (*c);
}

char	get_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		return (*c + ('a' - 'A'));
	return (*c);
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*c;

	c = str;
	flag = 1;
	while (*c != '\0')
	{
		if (!char_is_alphanumeric(c))
			flag = 1;
		else if (flag)
		{
			*c = get_upper(c);
			flag = 0;
		}
		else
			*c = get_lower(c);
		c++;
	}
	return (str);
}
