
#include <unistd.h>

int	letter_count(char c)
{
	int	count;

	count = 0;
	if (c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	else
		count = 1;
	return (count);
}

int	main(int argc, char **argv)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 2)
		return (0);

	while (argv[1] != '\0')
	{
		j = 0;
		count = letter_count(argv[1][i]);
		while (j < count)
		{
			write (1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	return (0);
}
