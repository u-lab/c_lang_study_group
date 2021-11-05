#include <stdio.h>

int main(void)
{
	double ans;
	int i;

	ans = 0;
	i = 0;
	/*i = 1;からにしてwhile(i <= 100)でもいいよ！*/
	while (i < 100)
	{
		ans += (i + 1);
		i++;
	}
	/*答えを違う変数に格納してもいいよ！*/
	ans /= 100;
	printf("average = %f\n", ans);
}

