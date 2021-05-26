#include <stdio.h>

void	my_strlen(char s[])
{
	int i;
	i = 0;
	while (s[i] != '\0')
		i++;
	printf("%d\n", i);
}

int main (void)
{
	char s[10] = "Hinata";
	my_strlen(s);
}