/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	printf("%c = %d\n", ch1, ch1);
	printf("%c = %d\n", ch2, ch2);

	/*main関数の戻り値*/
	return 0;
}

