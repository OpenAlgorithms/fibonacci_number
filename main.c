#include <stdio.h>

int f1(int n)
{
	if(n < 2)
		return 1;
	else
		return f1(n - 2) + f1(n - 1);
}

int f2(int n)
{
	if(n < 2)
		return 1;
	else
	{
		int x = 1, y = 1, z;
		while(n > 1)
		{
			z = y;
			y += x;
			x = z;
			n--;
		}
		return y;
	}
}

int main()
{
	for(int i = 0; i < 10; i++)
		printf("%i ", f1(i));
	printf("\n");

	for(int i = 0; i < 10; i++)
		printf("%i ", f2(i));
	printf("\n");

	return 0;
}
