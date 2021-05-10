/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	int i = 0;
	char c = 'c';
	char *s = "Hi!";

	/*書式指定子*/
	/*%d : 数字*/
	/*%f : 小数点付き*/
	printf("%d, %f",i);

	/*%c : 1文字*/
	/*%s : 文字列*/
	printf("%c\n", c);
	printf("%s\n",s);

	/*main関数の戻り値*/
	return 0;
}

