/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*配列の要素数を決めていない*/
	/*代入した値によって配列の大きさが定義される*/
	char s[] = "Hello!";
	int d[] = {1,2,3};
	int i;

	/*s[6] = "Hello!"*/
	printf("%s\n",s);

	/*null文字まで表示させてみる。*/
	for (i = 0; i <= 6; i++)
		printf("s[%d] = %c\n",i, s[i]);

	/*d[3] = {1, 2, 3}*/
	/*null文字の概念はないけれどそこまでいかせてみる。*/
	for (i = 0; i <= 3; i++)
		printf("d[%d] = %d\n", d[0], d[1], d[2]);
	/*main関数の戻り値*/
	return 0;
}

