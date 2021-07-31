int	ft_putchar(char c);
void	condicional(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i + 1 == y && j + 1 == x))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j + 1 == x) || (i + 1 == y && j == 0))
	{
		ft_putchar('C');
	}
	else if ((i == 0 || i + 1 == y) || (j == 0 || j + 1 == x))
	{
		ft_putchar('B');
	}
	else
	{
		 ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x == 0 && y == 0)
		return ;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			condicional(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
