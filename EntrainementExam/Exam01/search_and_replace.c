#include <unistd.h>

char	*search_and_replace(char *str, char find, char replace)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == find)
		{
			str[i] = replace;
		}
		i++;
	}
	return (str);
}


int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 4)
		return (0);
	search_and_replace(argv[1], *argv[2], *argv[3]);
	while (argv[1][i] != '\0')
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
