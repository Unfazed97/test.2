#include <unistd.h>

void	ft_print_number(char n)
{
	if (!(n >= '1' && n <= '9'))
		write(1, "veuille ne mettre qu'un chiffre en argument\n", 44);
	else
	{
		while (n <= '9')
		{
			write (1, &n, 1);
			n++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return 0;
	if (argc >= 3)
		return 0; 
	if (argc == 2)
	{
		ft_print_number(*argv[1]);
	}
}
