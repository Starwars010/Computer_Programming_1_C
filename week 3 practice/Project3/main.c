#pragma warning(disable : 4996)
#include <stdio.h>

//overhead?
//compiler?
//���� ����Ǿ ���޵Ǿ call of value�� p9
//�Լ� bunch���� library���Ϸ� ����� ����. library���� main�Լ��� ������ �ȵ�. 
//�Ǽ��� ������ ����ϴ� ����� �ٸ�. �Ǽ��� ������ 00�� ������ �빮�� p39 float�� f�� ����.
//p49 return�� ������ ���������� �����. �ڽ��� ������ �Լ��������� ����� ������
//�Լ��� �� �� �������� �� ����.�� ���� ������. ���� problem. ���� �ٸ� ���Ϸ� �ű�� ������ ������������ �� �Űܾ��ؼ� �������� �Լ��� ���� ����


int Sum2(int value1, int value2) {
	//int result = value1 + value2;
	//return result;
	//if (value_1 < 0) value_1 = value_1 * -1; �̰� ������ ������ sum ����� �ƴϹǷ� �ٸ� �Լ��� �A��.
	return value1 + value2;
}

int SumAbs(int value_1, int value_2) {
	//if (value_1 < 0) value_1 = value_1 * -1;
	//if (value_2 < 0) value_2 = value_2 * -1;
	return Sum(Abs(value_1), Abs(value_2));
}

int Abs(int value) {
	if (value < 0) value = value * -1;
	return value;
}

void PrintNumber(int number) {
	printf("PrintNumber : %d\n", number);
	//return; �ᵵ �ǰ� �� �ᵵ �ǰ�. void�Լ��� return ���� �� ���� ��
}


int GetYear() {
	return 2023;
}

int GetMonth() {
	return 3;
}

int GetDay() {
	return 17;
}


void PrintLine() {
	printf("---------------\n");
}


int GetCups() {
	int cups = 5; 
	printf("get %d cups\n", cups);
	return cups;
}

int PutWater(int cups) {
	printf("put water in %d cups\n", cups);
	return cups;
}

int Drink(int cups) {
	printf("drink %d cups of water\n", cups);
	return 0;
}


int result; //�������� ����

void Func(int a, int b) {
	result = a + b;

}







int main2() {

	printf("-----> Sum �Լ� ����� ����\n");
	int a = 10;
	int b = 20;
	//int result = Sum(a, b);
	printf("%d + %d : %d\n", a, b, Sum(a,b));


	printf("-----> �Լ� ����� ���� : return type ���� �Ķ���� ����\n");
	PrintNumber(50);


	printf("-----> �Լ� ����� ���� : return type �ְ� �Ķ���� ����\n");
	PrintNumber(Sum(5, 10));


	printf("-----> �Լ� ����� ���� : return type �ְ� �Ķ���� ����\n");
	int year = GetYear();
	int month = GetMonth();
	int day = GetDay();
	printf("%d-%02d-%d\n", year, month, day);


	printf("-----> �Լ� ����� ���� : return type ���� �Ķ���� ����\n");
	PrintLine();


	printf("-----> �� ���ñ� �Լ� ����� ����\n");
	//�� ���ñ� ->
	int cups = 0;
	//1. ���� �����´�
	cups = 5;
	printf("get %d cups\n", cups);
	//2. ���� ������
	printf("Put water in %d cups\n", cups);
	//3. ���Ŵ�
	printf("Drink %d cups of water\n", cups);
	cups = 0;

	cups = GetCups();
	cups = PutWater(cups);
	cups = Drink(cups);


	printf("-----> �Լ� �䱸 ���� ���� �غ���\n");
	int v_1 = 1;
	int v_2 = -2;
	int v_3 = 3;
	int v_4 = -4;
	int v_5 = 5;
	int v_6 = -6;

	if (v_1 < 0) v_1 = v_1 * -1;
	if (v_2 < 0) v_2 = v_2 * -1;
	int r_1 = v_1 + v_2;

	if (v_3 < 0) v_3 = v_3 * -1;
	if (v_4 < 0) v_4 = v_4 * -1;
	int r_2 = v_3 + v_4;

	if (v_5 < 0) v_5 = v_5 * -1;
	if (v_6 < 0) v_6 = v_6 * -1;
	int r_3 = v_5 + v_6;

	int r_4 = SumAbs(v_1, v_2);
	int r_5 = SumAbs(v_3, v_4);
	int r_6 = SumAbs(v_5, v_6);



	printf("-----> ǥ�� ��� �Լ� ��� �غ��� : putchar\n");
	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('0');
	putchar('\n');


	printf("-----> ǥ�� ��� �Լ� ��� �غ��� : puts\n");
	puts("Hello"); //�ڵ����� �ٹٲ��� �־���


	printf("-----> ǥ�� ��� �Լ� ��� �غ��� : printf\n");
	printf("hello\n");


	printf("-----> ���� ���� ��� �غ���\n");
	Func(100, 200);
	printf("%d + %d : %d\n", 100, 200, result);



	return 0;
}