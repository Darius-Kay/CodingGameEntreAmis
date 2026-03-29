#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int count;
	int calc = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		int number;
		scanf("%d", &number);
		if (number%2)
			calc *= number;
		else
			calc += number;
	}
	printf("%d", calc);
	return 0;
}
