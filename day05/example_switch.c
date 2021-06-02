/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*任意の一文字を定義！*/
	int d = 2;

	/*1.switch(条件式)*/
	switch(d)
	{
		/*2.{処理内容}*/
		/*3.case文*/
		case 1:
			printf("d = 1\n");
			break;
		case 2:
			printf("d = 2\n");
			break;
		/*4.default文*/
		default:
			printf("d is not one and two!");
	}

	/*main関数の戻り値*/
	return 0;
}

