#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int	ft_strlen(char *s);

void test_atoi(char *str)
{
	int expected;
	int actual;

	printf("teste com valor '%s': ", str);
	expected = atoi(str);
	actual = ft_atoi(str);
	if (expected == actual)
		printf("\033[0;32mOK\033[0m\n");
	else
		printf("\033[0;31mERRO\033[0m\n");
}

int main()
{
	printf("Iniciando bateria de testes\n");
	test_atoi("4");
	test_atoi("42");
	test_atoi("422");
	test_atoi("4228724");
	test_atoi("873648c");
	test_atoi("873648c");
	test_atoi("	 873648");
}
