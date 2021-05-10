/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	int i = 0;

	/*後置演算子*/
	printf("increment after\n");
	while (i++ < 5)
		printf("Hi!");

	/*変数の初期化。これをしないとiは5のまま*/
	i = 0;

	/*前置演算子*/
	printf("\nincrement before\n");
	while (++i < 5)
		printf("Hi!");


	/*main関数の戻り値*/
	return 0;
}

