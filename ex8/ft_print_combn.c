#include <unistd.h>

void	printing_comb(int *tab, int start, int index, int n)
{
	int	i;
	
	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			write (1, &tab[i], 1);
			i++;
		}
		if (tab[10] != 10 - n + '0')
		{
			write(1, ", ", 1);
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		tab[index] = i + '0';
		printing_comb(tab, i + 1, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n && n < 10)
		printing_comb(tab, 0, 0, n);
}

int	main(void)
{
	ft_print_combn(4);
	return 0;
}
