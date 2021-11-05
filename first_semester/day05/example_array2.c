/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*配列の要素数を決めた。*/
	/*この要素数を後から変更することはできない。*/
	char s[6];
	int d[3];
	// s = "Hello!";
	// d = {1,2,3};
	s[0] = 'H';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	s[4] = 'o';
	s[5] = '!';
	s[6] = '\0'; /*自分でnull文字を代入する必要がある！*/
	/*値の確認*/
	printf("%s\n", s);

	/*dの値は連続してるのでこんな風に入れることもできる！*/
	for (int i=1; i < 4; i++)
	{
		d[i - 1] = i;
		printf("d[%d] = %d\n", i - 1, d[i - 1]);
	}
	/*main関数の戻り値*/
	return 0;
}
