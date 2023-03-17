#pragma warning(disable : 4996)
#include <stdio.h>

//overhead?
//compiler?
//값이 복사되어서 전달되어서 call of value임 p9
//함수 bunch에는 library파일로 만들면 좋다. library에는 main함수가 있으면 안됨. 
//실수와 정수를 출력하는 방법이 다름. 실수는 가수부 00부 나누기 대문에 p39 float면 f로 받자.
//p49 return을 만나면 지역변수는 사라짐. 자신을 선언한 함수내에서만 사용이 가능함
//함수에 쓸 때 전역변수 안 좋음.안 좋은 습관임. 종속 problem. 만약 다른 파일로 옮기고 싶으면 전역변수까지 다 옮겨야해서 독립적인 함수가 되지 못함


int Sum2(int value1, int value2) {
	//int result = value1 + value2;
	//return result;
	//if (value_1 < 0) value_1 = value_1 * -1; 이걸 넣으면 온전한 sum 기능이 아니므로 다른 함수로 뺸다.
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
	//return; 써도 되고 안 써도 되고. void함수는 return 보통 안 쓰긴 함
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


int result; //전역변수 생성

void Func(int a, int b) {
	result = a + b;

}







int main2() {

	printf("-----> Sum 함수 만들어 보기\n");
	int a = 10;
	int b = 20;
	//int result = Sum(a, b);
	printf("%d + %d : %d\n", a, b, Sum(a,b));


	printf("-----> 함수 만들어 보기 : return type 없고 파라미터 있음\n");
	PrintNumber(50);


	printf("-----> 함수 만들어 보기 : return type 있고 파라미터 있음\n");
	PrintNumber(Sum(5, 10));


	printf("-----> 함수 만들어 보기 : return type 있고 파라미터 없음\n");
	int year = GetYear();
	int month = GetMonth();
	int day = GetDay();
	printf("%d-%02d-%d\n", year, month, day);


	printf("-----> 함수 만들어 보기 : return type 없고 파라미터 없음\n");
	PrintLine();


	printf("-----> 물 마시기 함수 만들어 보기\n");
	//물 마시기 ->
	int cups = 0;
	//1. 컵을 가져온다
	cups = 5;
	printf("get %d cups\n", cups);
	//2. 물을 따른다
	printf("Put water in %d cups\n", cups);
	//3. 마신다
	printf("Drink %d cups of water\n", cups);
	cups = 0;

	cups = GetCups();
	cups = PutWater(cups);
	cups = Drink(cups);


	printf("-----> 함수 요구 사항 변경 해보기\n");
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



	printf("-----> 표준 출력 함수 사용 해보기 : putchar\n");
	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('0');
	putchar('\n');


	printf("-----> 표준 출력 함수 사용 해보기 : puts\n");
	puts("Hello"); //자동으로 줄바꿈을 넣어줌


	printf("-----> 표준 출력 함수 사용 해보기 : printf\n");
	printf("hello\n");


	printf("-----> 전역 변수 사용 해보기\n");
	Func(100, 200);
	printf("%d + %d : %d\n", 100, 200, result);



	return 0;
}