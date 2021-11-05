/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*確かめるための変数*/
	char s[10] = "You!";

	/*確認の仕方！*/
	printf("s's length = %d", my_strlen(s));

	/*main関数の戻り値*/
	return 0;
}

