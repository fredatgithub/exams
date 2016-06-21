#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
