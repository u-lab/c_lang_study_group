/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d",i + 1);
	}
	/*main関数の戻り値*/
	return 0;
}

