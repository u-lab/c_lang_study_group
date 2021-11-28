void my_ptr_swapper(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void my_swapper(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}