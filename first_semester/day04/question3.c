/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	int i;

	i = 3;

	/*選択肢1*/
	printf("Output 1\n");
	while (i-- > 0)
		printf("Hi?");

	i = 3;

	/*選択肢2*/
	printf("\nOutput 2\n");
	while (--i > 0)
		printf("Hi!");
}

