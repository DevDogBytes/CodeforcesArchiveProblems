#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(int argc, char* argv[])
{
	int x;
	scanf("%d", &x);
	if (x >= 4 && (x % 2 == 0))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}