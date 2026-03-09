#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n <= 9 && n >= 0)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	ft_putnbr(-4543);
	write (1, "\n", 1);
	ft_putnbr(3);
	write (1, "\n", 1);
	ft_putnbr(4543);
}		
