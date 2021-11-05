/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*説明のための変数*/
	int i = 10;

	/*1. if(条件(なんでも良子))*/
	if (i > 10)
	{
		/*1.5.処理の内容*/
		printf("i is more than 10");
	}
	/*2. else*/
	else
	{
		/*2.5処理の内容*/
		printf("i is not more than 10");
	}

	/*main関数の戻り値*/
	return 0;
}

