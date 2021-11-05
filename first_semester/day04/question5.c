/*参照するライブラリを指定*/
#include <stdio.h>

/*戻り値の型　関数名　(引数の型)*/
int main(void)
{
	/*繰り返し用変数*/
	int i ;

	/*繰り返し処理との組み合わせ!*/
	/*もちろん、iが1からでもおk。*/
	/*その場合は分岐条件が異なるよ！*/
	for (i = 0; i < 10; i++)
	{
		/*0からスタートなのに注意*/
		/*1回目 = iは0*/
		if (0 <= i && i <= 2)
		{
			printf("less than 3");
		}
		/*4~7回目、つまりiが3から6の時！*/
		else if (3 <= i && i <= 6)
		{
			printf("more than 4 and less than 7");
		}
		/*そのほか!*/
		else
		{
			printf("others");
		}
	}

	/*main関数の戻り値*/
	return 0;
}

