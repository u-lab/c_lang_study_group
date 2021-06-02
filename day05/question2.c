/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*任意の一文字を定義！*/
	char ch1 = 'a';

	/*条件の定義!*/
	/*条件の順番は気にしないでおｋ！*/
	/*改行も、入れても入れなくてもいいよ！*/
	if ('0' <= ch1 <= '9')
		printf("number!\n");
	else if ('a' <= ch1 <= 'z')
		printf("small char!\n");
	else if ('A' <= ch1 <= 'Z')
		printf("large char!\n");
	else
		printf("else!\n");

	/*main関数の戻り値*/
	return 0;
}

