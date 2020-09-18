#include <stdio.h>
#include <stdlib.h>


int main()
{
	int aaa = 0;
	int bbb = 0;

	printf("aaaのアドレスは%d\n", &aaa);
	printf("bbbのアドレスは%d\n", &bbb);

	int *p;

	p = &aaa;
	printf("aaaのアドレス = %d, pの値 = %d\n", &aaa, p);
	*p = 10;
	printf("*p = %d\n", *p);

	int *p1 = NULL;
	int* p2 = &aaa;

	if (p1 != NULL)
	{
		printf("p1 = %d\n", p1);
	}
	
	if (p2 != NULL)
	{
		printf("p2 = %d\n", p2);
	}

	int a[4];
	a[1] = 1;
	printf("添え字:a[1] = %d\n", a[1]);
	a[1] = 0;
	*(a + 1) = 1;
	printf("ポインタ:a[1] = %d\n", a[1]);


	system("pause");
	return 0;
}

