// Question 2

#include <stdio.h>


int main() {
	printf("\n");
	printf("%18d-%02d\n\n", 2021, 9);
	printf("%5s%5s%5s%5s%5s%5s%5s\n", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");
	printf("%5d%5d%5d%5d%5d%5d%5d\n", 29, 30, 31, 1, 2, 3, 4);
	printf("%5d%5d%5d%5d%5d%5d%5d\n", 5, 6, 7, 8, 9, 10, 11);
	printf("%5d%5d%5d%5d%5d%5d%5d\n", 12, 13, 14, 15, 16, 17, 18);
	printf("%5d%5d%5d%5d%5d%5d%5d\n", 19, 20, 21, 22, 23, 24, 25);
	printf("%5d%5d%5d%5d%5d%5d%5d\n", 26, 27, 28, 29, 30, 1, 2);
	printf("%5d%5d%5d%5d%5d%5d%5d", 3, 4, 5, 6, 7, 8, 9);
	printf("\n");
	return 0;
}


//Question 1

#include <stdio.h>

int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}

int Contrast(int value1, int value2)
{
	int result = value1 - value2;
	return result;
}

int Multiply(int value1, int value2)
{
	int result = value1 * value2;
	return result;
}

int Num(int value1, int value2)
{
	int result = value1 / value2;
	return result;
}

int Remain(int value1, int value2)
{
	int result = value1 % value2;
	return result;
}



int main() {
	int value1 = 0;
	int value2 = 0;
	printf("%d\n", Sum(value1, value2));
	printf("%d\n", Contrast(value1, value2));
	printf("%d\n", Multiply(value1, value2));
	printf("%d\n", Num(value1, value2));
	printf("%d\n", Remain(value1, value2));
	return 0;
}
