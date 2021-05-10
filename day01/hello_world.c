/*参照するライブラリを指定*/
#include <stdio.h>

/*cファイル中での関数定義*/
/*戻り値の型　関数名　(引数(関数に渡さなくてはいけない値))*/
int main(void)
{
	/*printf -標準出力関数-*/
	printf("Hello, World!");

	/*戻り値の返し方*/
	/*return 戻り値;として返す*/
	//宣言時の戻り値の型とあっていないと怒られるので注意。
	//実は必ずしも値を返す必要はない。
	return 0;
}