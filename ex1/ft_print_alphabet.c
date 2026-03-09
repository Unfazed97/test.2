#include <unistd.h>

void	ft_print_alphabet(char c)
{

	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
	{
		while (c <= 'z' || c <= 'Z')
		{
			write(1, &c, 1);
			c++;
		}
	}
	else
		write (1, "vous n'avez pas enter un de lettre.\n", 37);
}

int	main(int argc, char *argv[])
{
	if (argc >= 3)
		return 0;
	if (argc <= 1)
		return 0;
	if (argc == 2)
	{
		ft_print_alphabet(*argv[1]);
	}
}
