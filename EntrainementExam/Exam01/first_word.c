
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	while (argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	while (argv[1][i] != '\0' && (argv[1][i] != ' ' && argv[1][i] != '\t'))
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
