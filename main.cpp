#include <stdio.h>

int Recursive(int n)
{
	if (n <= 1) {
		return 1;
	}

	return n * Recursive(n - 1);
}

int main()
{
	int num = 4;
	int result = 0;

	result = Recursive(num);
	printf("result [%d]", result);

	return 0;
}