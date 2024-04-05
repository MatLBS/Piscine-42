#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char test1[] = "Mateo";
	char test2[] = "Autre";

	ft_strcpy(test1, test2);

	printf("La copie: %s\n", test1);
}
