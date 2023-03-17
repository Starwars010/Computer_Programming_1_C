#pragma warning(disable : 4996)
#include <stdio.h>
#include<limits.h>

int main2() {
    
    printf("-----> printf ��� �غ���\n");
    printf("Hello World\n");
    printf("100\n");

    printf("-----> ���� �� ����� ������ �Ǽ� ��� �غ���\n");
    printf("value01 : %d, value02 : %d\n", 100, 200); 
    printf("value03 : %f\n", 3.14);

    printf("-----> ���� �� ���, ���ڿ� �� ��� ��� �غ���\n");
    printf("value04 : %c\n", 'A');
    printf("value05 : %s\n", "Hello C Programming");

    printf("-----> ASCII �ڵ�ǥ�� �����Ͽ� 10������ ���� ��� �غ���\n");
    printf("65(d) : %d\n", 65);
    //printf("65(c) : %c\n", 65);
    /*
    asdf
    */
    printf("A : %c\n", 'A');
    //printf("A : %d\n", 'A');

    printf("-----> �ʱ�ȭ ���� ���� ���� ��� �غ���\n");
    int n = 0;
    char c = 0; //char���� 0�� NULL ��
    //char c = NULL
    printf("n : %d\n", n);


    printf("-----> ������ �����ϰ� �� ������ �ڷ����� �˸��� �� �־� ����\n");
    char ch01 = NULL; 
    char ch02 = 'a';
    unsigned char ch03 = 200;
    short sh01 = 300;
    unsigned short sh02 = 500;
    int i01 = 10000;


    printf("-----> ������ �ڷ��� ������ �ʰ��ϴ� �� �־� ����\n");
    char ch04 = 5000; //signed char�� ������ �Ѿ��
    printf("ch04 : %d\n", ch04); //�տ� ���� �߸��鼭 -120�� ��µ�
    //compile error : �������� �� ��
    //runtime error : ��̽� ���


    printf("-----> 8����, 16������ ������ �� �־� ����\n");
    int i02 = 012; //8������ 1,2�� ������. 10�����δ� 10�� ��
    printf("i02 : %d\n", i02);
    int i03 = 0xAB; //16����. �������� 171
    printf("i03: %d\n", i03);

    printf("-----> ���� �ڷ����� ���� A�� ���� B�� �� �ٲٱ�\n");
    int A = 10;
    int B = 30;
    //A = B;
    //B = A;
    int temp;
    temp = B; 
    //temp �ʱ�ȭ�� B�� �Ǿ��� int temp = B;
    B = A;
    A = temp;

    printf("-----> �ٸ� �ڷ����� ���� A�� ���� B�� �� �ٲٱ�\n");
    int C = 500;
    char D = 100;

    temp = C;
    C = D; //char �� int�� �Ͻ��� ����ȯ �Ͼ
    D = temp;

    printf("C : %d\n", C);
    printf("D : %d\n", D);

    printf("-----> �Ͻ���(������) �� ��ȯ, ����� �� ��ȯ\n");
    double d01 = 500.99; 
    int i05 = 55;
    i05 = d01;
    printf("i05 : %d\n", i05);
    i05 = char(d01);
    printf("i05 : %d\n", i05);



    printf("-----> sizeof�� �̿��Ͽ� ���� ������ ��� �غ���\n");
    char ch06 = 50;
    int i06 = 100;
    printf("sizeof(ch06) : %d\n", sizeof(ch06));
    printf("sizeof(i06) : %d\n", sizeof(i06));

    printf("-----> char, short ���� �� �� ��ȯ Ȯ�� �غ���\n");
    char ch07 = 70;
    short sh03 = 100;
    int result = ch07 + sh03; //1����Ʈ + 2 ����Ʈ = �����??
    printf("sizeof result: %d\n", sizeof(ch07 + sh03)); //����� 4����Ʈ�� ���͹��� ��? CPU������ ����ȭ�Ǵ� �ڷ������� �����Ѵ�
    //������ int�� ��� ���ʿ��� ����ȯ�� ������

    printf("-----> �Ǽ� ǥ�� ����� ����Ȯ�� Ȯ�� �غ���\n");
    float num = 0.0;
    for (int i = 0; i < 100; i++) {
        num = num + 0.1;
    }
    printf("num : %f\n", num);
    //��Ȯ�� 10 �� �ƴϹǷ� �Ժη� �������� ����

    printf("-----> �ý��ۿ� ���ǵ�(limits.h) char, short, int, float, double ���� Ȯ�� �غ���\n");
    CHAR_BIT; 
    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("UCHAR_MAX : %d\n", UCHAR_MAX);
    


    printf("-----> scanf ��� �غ���\n");
   


    return 0;
}