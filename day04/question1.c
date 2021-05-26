/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*whileのための変数*/
	int i;

	/*100を7で割ったあまり、つまり100 % 19 = 5*/
	/*5回出力されるよ！*/
	while (i < (100 % 19))
	{
		printf("Hi");
		i++;
	}
	/*main関数の戻り値*/
	return 0;
}

