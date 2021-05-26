#include <stdio.h>

int main(void)
{
	int	a[7];
	int i;

	/*解答1*/
	for (i = 31; i < 38; i++)
		a[i - 31] = i;

	printf("answer = %d\n",a[1] + a[4]);

	i = 31;
	/*解答2*/
	while (i < 38)
	{
		a[i - 31] = i;
		i++;
	}
	printf("answer = %d\n", a[1] + a[4]);
}

