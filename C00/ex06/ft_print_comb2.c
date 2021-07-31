#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	print_number(char num1, char num2, char num3, char num4)
{
	ft_print(num1);
	ft_print(num2);
	ft_print(' ');
	ft_print(num3);
	ft_print(num4);
	if (!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9'))
		write(1, ", ", 2);
}

void	ordenation(char num1, char num2, char num3, char num4)
{
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			num3 = num1;
			num4 = num2 + 1;
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					print_number(num1, num2, num3, num4);
					num4++;
				}
				num3++;
				num4 = '0';
			}
			num2++;
		}
		num1++;
		num2 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = num1;
	ordenation (num1, num2, num3, num4);
}

int main(void)
{
	ft_print_comb2();
}