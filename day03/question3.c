#include <stdio.h>

int main(void)
{
	int i;

	i = 0;

	/*選択肢1*/
	printf("Output 1\n");
	while (i++ < 5)
		printf("Hi?");

	i = 0;

	/*選択肢2*/
	printf("Output 2\n");
	while (++i < 5)
		printf("Hi!");
}

