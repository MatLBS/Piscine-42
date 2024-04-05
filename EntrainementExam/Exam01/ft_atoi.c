

int	isspace(char *str)
{
	int	i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\t')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	valeur;

	valeur = 0;
	sign = 0;
	i = ft_isspace(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (sign * valeur);
}
