/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int my_strlen(char s[])
{
	/*文字数を数えるための変数*/
	int i = 0;

	/*回数がわからない時の繰り返し構文*/
	while (s[i] != '\0')
		i++;

	return (i);
}

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

