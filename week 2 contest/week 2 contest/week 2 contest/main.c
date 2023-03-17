#pragma warning(disable : 4996)
#include<stdio.h>

int main() {

	int A = 0;
	int B = 0;
	//scanf("%d", &A); //사용자로부터 입력을 대기중임
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