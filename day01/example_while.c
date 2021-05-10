/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*今回は条件に必要なので変数を定義*/
	int i = 10;

	/*1.while (条件文)*/
	/*条件を満たす間処理を行う*/
	while (i > 0)
	{
		/*3.処理の内容*/
		printf("Hi!");
		i = i - 2;
	}

	/*main関数の戻り値*/
	return 0;
}