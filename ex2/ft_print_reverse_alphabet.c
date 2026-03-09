#include <unistd.h>

void	ft_print_alphabet(char c)
{
	if (c <= 'z' && c >= 'a')
	{
		while (c >= 'a')
		{
			write (1, &c, 1);
			c--;
		}
		write(1, "\n", 1);
	}
	else if (c <= 'Z' && c >= 'A')
		write(1, "ceci n'est pas une lettre min\n", 30);
	else if (c <= '9' && c >= '0')
		write(1, "ceci est chiffre :( \n", 21);
	else
		write(1, "ce caractère ne fait pas parti de l'alphabet\n", 45);
}
int	main(int argc, char **argv)
{
	if (argc >= 3)
		return 0;
	if (argc <= 1)
		return 0;
	if (argc == 2)
	{
		ft_print_alphabet(*argv[1]);
	}
	return 0;
}
