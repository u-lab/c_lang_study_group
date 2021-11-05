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
	char s[] = "AbcDw";
	int i = 0;

	printf("%s\n",s);
	/*確認の仕方！*/
	while (s[i] != '\0')
	{
		if (my_is_lower(s[i]) == 1)
			s[i] = s[i] - ('a' - 'A');
		i++;
	}
	printf("%s\n",s);
	/*main関数の戻り値*/
	return 0;
}

