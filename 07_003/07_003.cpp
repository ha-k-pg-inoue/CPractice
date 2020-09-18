#include <stdio.h>
#include <stdlib.h>

void Swap(int*, int*);

int main()
{
	int x = 10;
	int y = 20;
	
	Swap(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d\n", y);




	system("pause");
	return 0;
}

void Swap(int* p1, int* p2)
{
	int z;

	z   = *p1;
	*p1 = *p2;
	*p2 =   z;
}