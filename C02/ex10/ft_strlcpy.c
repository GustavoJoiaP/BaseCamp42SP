unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int		len;
	char				*d;
	char				*s;

	d = dest;
	s = src;
	len = 0;
	while (*s != '\0')
	{
		if (len < n - 1)
		{
			*d = *s;
			d++;
		}
		s++;
		len++;
	}
	*d = '\0';
	return (len);
}
