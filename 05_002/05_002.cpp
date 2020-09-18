#include <stdio.h>
#include <stdlib.h>


int main()
{
	// 文字も内部的には整数で管理されていることを確認する
	char tmp[12] = "Hello World";
	for (int i = 0; i < 12; i++)
	{
		printf("char %c = %d\n", tmp[i], tmp[i]);
	}

	printf("----------------------\n");

	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
		                  'o','p','q','r','s','t','u','v','w','x','y','z' };
	
	for (int i = 0; i <= 25; i++)
	{
		printf("%c", alphabet[i]);
	}

	system("pause");
	return 0;
}

