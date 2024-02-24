#include<stdio.h>
int main() {
	int x, y, result;
	printf("Enter two positive integers: ");
	scanf("%d %d", &x, &y);
	result = (x > y) ? x : y;
	while (1)
    {
		if (result % x == 0 && result % y == 0)
        {
			printf("The LCM obtained from %d and %d is %d.", x, y, result);
			break;
		}
		++result;
	}
	return 0;
}