/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*第一段階、値を求める*/
	int i = 200 / 37;

	/*解答例2*/
	if (i >= 5)
	{
		/*処理の内容*/
		printf("more than 5");
	}
	else if (i < 5)
	{
		/*処理の内容*/
		printf("less than 5");
	}

	/*main関数の戻り値*/
	return 0;
}

