#pragma warning(disable : 4996)
#include <stdio.h>
#include<limits.h>

int main2() {
    
    printf("-----> printf 사용 해보기\n");
    printf("Hello World\n");
    printf("100\n");

    printf("-----> 숫자 형 상수인 정수와 실수 출력 해보기\n");
    printf("value01 : %d, value02 : %d\n", 100, 200); 
    printf("value03 : %f\n", 3.14);

    printf("-----> 문자 형 상수, 문자열 형 상수 출력 해보기\n");
    printf("value04 : %c\n", 'A');
    printf("value05 : %s\n", "Hello C Programming");

    printf("-----> ASCII 코드표를 참고하여 10진수로 문자 출력 해보기\n");
    printf("65(d) : %d\n", 65);
    //printf("65(c) : %c\n", 65);
    /*
    asdf
    */
    printf("A : %c\n", 'A');
    //printf("A : %d\n", 'A');

    printf("-----> 초기화 되지 않은 변수 사용 해보기\n");
    int n = 0;
    char c = 0; //char에서 0은 NULL 임
    //char c = NULL
    printf("n : %d\n", n);


    printf("-----> 변수를 선언하고 각 변수의 자료형에 알맞은 값 넣어 보기\n");
    char ch01 = NULL; 
    char ch02 = 'a';
    unsigned char ch03 = 200;
    short sh01 = 300;
    unsigned short sh02 = 500;
    int i01 = 10000;


    printf("-----> 변수에 자료형 범위를 초과하는 값 넣어 보기\n");
    char ch04 = 5000; //signed char의 범위를 넘어간다
    printf("ch04 : %d\n", ch04); //앞에 꺼가 잘리면서 -120이 출력됨
    //compile error : 배포조차 안 됨
    //runtime error : 운영이슈 긴급


    printf("-----> 8진수, 16진수로 변수에 값 넣어 보기\n");
    int i02 = 012; //8진수에 1,2가 들어간것임. 10진수로는 10인 값
    printf("i02 : %d\n", i02);
    int i03 = 0xAB; //16진수. 십진수로 171
    printf("i03: %d\n", i03);

    printf("-----> 같은 자료형의 변수 A와 변수 B의 값 바꾸기\n");
    int A = 10;
    int B = 30;
    //A = B;
    //B = A;
    int temp;
    temp = B; 
    //temp 초기화가 B로 되었다 int temp = B;
    B = A;
    A = temp;

    printf("-----> 다른 자료형의 변수 A와 변수 B의 값 바꾸기\n");
    int C = 500;
    char D = 100;

    temp = C;
    C = D; //char 이 int로 암시적 형변환 일어남
    D = temp;

    printf("C : %d\n", C);
    printf("D : %d\n", D);

    printf("-----> 암시적(묵시적) 형 변환, 명시적 형 변환\n");
    double d01 = 500.99; 
    int i05 = 55;
    i05 = d01;
    printf("i05 : %d\n", i05);
    i05 = char(d01);
    printf("i05 : %d\n", i05);



    printf("-----> sizeof를 이용하여 변수 사이즈 출력 해보기\n");
    char ch06 = 50;
    int i06 = 100;
    printf("sizeof(ch06) : %d\n", sizeof(ch06));
    printf("sizeof(i06) : %d\n", sizeof(i06));

    printf("-----> char, short 연산 시 형 변환 확인 해보기\n");
    char ch07 = 70;
    short sh03 = 100;
    int result = ch07 + sh03; //1바이트 + 2 바이트 = 결과는??
    printf("sizeof result: %d\n", sizeof(ch07 + sh03)); //결과는 4바이트가 나와버림 왜? CPU연산이 최적화되는 자료형으로 변경한다
    //정수는 int를 써라 불필요한 형변환을 없애자

    printf("-----> 실수 표현 방식의 부정확도 확인 해보기\n");
    float num = 0.0;
    for (int i = 0; i < 100; i++) {
        num = num + 0.1;
    }
    printf("num : %f\n", num);
    //정확히 10 이 아니므로 함부러 예측하지 말자

    printf("-----> 시스템에 정의된(limits.h) char, short, int, float, double 정보 확인 해보기\n");
    CHAR_BIT; 
    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("UCHAR_MAX : %d\n", UCHAR_MAX);
    


    printf("-----> scanf 사용 해보기\n");
   


    return 0;
}