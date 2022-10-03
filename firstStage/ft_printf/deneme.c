#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = -1;
	while (
		str[++i]);
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		write(1, &"0123456789"[nb], 1);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

int	sum(const char *string, ...)
{
	va_list		argList;
	int		len;

	va_start(argList, string);

	for (int i = 0; string[i]; i++)
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == 'c')
			{
				char ch = va_arg(argList, int);
				write(1, &ch, 1);
			}
			else if (string[i + 1] == 's')
			{
				ft_putstr(va_arg(argList, char *));
			}
			else if (string[i + 1] == 'p')
			{
				
			}
			else if (string[i + 1] == 'd' || string[i + 1] == 'i')
			{
				ft_putnbr(va_arg(argList, int));
			}
			else if (string[i + 1] == 'u')
			{
				
			}
			else if (string[i + 1] == 'x')
			{
				
			}
			else if (string[i + 1] == 'X')
			{
				
			}
			else if (string[i + 1] == '%')
			{
				write(1, &"%", 1);
			}
			i++;
		}
		else
		{
			write(1, &string[i], 1);
		}
	}

	return (ft_strlen(string));
}

int	main(void)
{
	sum("merhaba bu numara %d, bu string %s, bu da char %c, hehe\n", 15, "ALOO", 'B');
	return (1);
}