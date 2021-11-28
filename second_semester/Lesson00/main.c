#include "my_lib.h"

/*FOR DEBUG*/
#include "my_swap.c"

int main(void)
{
	/* code */
	int a = 1, b = 2;
	my_swapper(a, b);
	printf("MY_SWAPPER\na = %d, b = %d\n\n", a, b);
	my_ptr_swapper(&a, &b);
	printf("MY_PTR_SWAPPER\na = %d, b = %d\n", a, b);
	return 0;
}
