int	ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

int ft_atoi(const char *str)
{	
	int	result;
	int i;

	result = 0;
	i = 0;

	while(str[i] >= 9 || str[i] <= 13 || str[i] == 32)
		i++;
	
	while (str[i] != '\0' && str[i] > '0' && str[i] < '9')
		{
			result = result * 10;
			result = result + (str[i] - 48);
			i++;
		}
	return (result);
	// if (ft_strlen(str) == 1)
	// 	return (str[0] - '0');
	// else if (ft_strlen(str) == 2)
	// 	return (((str[0] - '0') * 10) + (str[1] - '0'));
	// else if (ft_strlen(str) == 3)
	// 	return (((str[0] - '0') * 100) + ((str[1] - '0') * 10) + (str[2] - '0'));
}
