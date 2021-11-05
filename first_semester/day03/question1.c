/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	int i;

	/*30を7で割ったあまり、つまり30 % 7 = 2*/
	/*2回出力されるよ！*/
	while (i < (30 % 7))
	{
		printf("Hi");
		i++;
	}
	/*main関数の戻り値*/
	return 0;
}

