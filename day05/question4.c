/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int my_is_lower(char c)
{
	/*小文字の時は1を返す*/
	if ('a' <= c && c <= 'z')
		return 1;
	/*それ以外は0を返す！*/
	else
		return 0;
}

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*確かめるための変数*/
	char c = 'i';

	/*確認の仕方！*/
	if (my_is_lower(c) == 1)
		printf("c is lower!\n");
	else
		printf("c is no lower!\n");

	/*main関数の戻り値*/
	return 0;
}

