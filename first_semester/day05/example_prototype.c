/*参照するライブラリを指定*/
#include <stdio.h>

/*1.今回はmain関数で呼び出すので、その前で定義！*/
/*戻り値の型　関数名　(引数の型)*/
void print_hello(void)
{
	/*処理内容を書く*/
	printf("Hello!\n");
}

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*2.呼び出す！*/
	print_hello();

	/*main関数の戻り値*/
	return 0;
}

