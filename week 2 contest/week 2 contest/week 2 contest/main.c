#pragma warning(disable : 4996)
#include<stdio.h>

int main() {

	int A = 0;
	int B = 0;
	//scanf("%d", &A); //����ڷκ��� �Է��� �������
	//scanf("%d", &B);

	scanf("%d %d", &A, &B);

	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);
	//printf("input A : %d\n", A);
	//printf("input A : %d\n", B);

	return 0;
}