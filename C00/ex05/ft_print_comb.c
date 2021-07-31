#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' - 1;
	while (x++ <= '7')
	{
		y = x;
		while (y++ <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print(x);
				ft_print(y);
				ft_print(z);
				if (!(x == '7' && y == '8' && z == '9'))
				{
					write(1, ", ", 2);
				}
				z++;
			}
		}
	}
}
