#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ� 
#include <stdio.h>

int main(void) { //void : ����, ���ϵǴ� ���� ����
	//�Է��Լ�
	//������ �Է¹ޱ�
	//int a;
	// \n�� ����� �� �����ٷ� �������ؼ� ���, ���⼱ ��� x
	//printf("������?");
	//scanf("%d",&a); // & : a�� �ּ�
	//printf("�Է��� �� : %d   �ּ� : %p\n", a, &a);


	//�Ǽ��� �Է¹ޱ�
	//float f;
	//double d;
	//printf("float �Ǽ���?");
	//scanf("%f",&f);
	//printf("double �Ǽ���?");
	//scanf("%lf",&d); //���˹��� double�� ��� %lf
	//printf("�Է��� ��\n %f %p \n  %f %p\n",f,&f,d,&d);


	//������ �Է¹ޱ�
	//char c;
	//printf("���ڴ�?");
	//scanf("%c", &c);
	//printf("�Է��� ���� %c\n",c);


	//�ǽ�) �� ������ �Է¹޾Ƽ� �հ踦 ���
	//��� 1) ������ �Է�
	//int a, b;
	//printf("first number?");
	//scanf("%d",&a);
	//printf("second number?");
	//scanf("%d",&b);
	//printf("%d + %d = %d\n",a,b,a+b);

	//��� 2) ���� �Է�
	//int a, b;
	//printf("�� ����?");
	//scanf("%d %d", &a, &b);
	//printf("�հ� : %d\n", a+b);


	//�ǽ�) ������ ��¥(��, ��, ��)�� �Է� �޾� ���
	//int year, month, day;
	//printf("�⵵�� �Է����ּ���!");
	//scanf("%d",&year);
	//printf("���� �Է����ּ���!");
	//scanf("%d", &month);
	//printf("���� �Է����ּ���!");
	//scanf("%d", &day);
	//printf("%d�� %d�� %d��\n",year,month,day);


	//int year, month, day;
	//printf("��, ��, ��(yyyy mm dd)��?");
	//scanf("%d %d %d", &year, &month, &day);
	//printf("%d�� %d�� %d��\n", year, month, day);


	//�ǽ�) �� ���� ������ �Է� �޾� ��������� ���غ��ÿ�.
	//int a, b;
	//printf("�� ����?");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a+b);
	//printf("%d - %d = %d\n", a, b, a-b);
	//printf("%d * %d = %d\n", a, b, a*b);
	//printf("%d / %d = %0.1f\n", a, b, (double)a/b);


	//�ǽ� ���ư���) enter ó���ϱ� getchar �Լ�!!
	//int a, b;
	//char sign;
	//printf("first?"); // 10 + 20;
	//scanf("%d", &a);

	// �ѹ��ڸ� �о ��ȯ�ϴ� �Լ�
	//getchar(); // enter�� ó���ϱ� ���� ����

	//printf("sign?"); 
	//scanf("%c", &sign);
	//printf("second?"); 
	//scanf("%d", &b);

	//printf("%d %c %d\n", a, sign, b);


	// �ǽ�) ���� ���� �� �Ž������� ����Ͽ� ����ϴ� ���α׷��� �ϼ��Ͻÿ�.
	// (��, ���ǰ��� ������ ���� �Է� �޴´�)
	//int amount, pay; //���ǰ�, ����
	//printf("���� ����?");
	//scanf("%d",&amount);
	//printf("������ ����?");
	//scanf("%d", &pay);
	//pay > amount ?
		//printf("�Ž��� �� :%d\n", pay - amount):
		//printf("������ �� :%d\n", amount - pay);

	//pay > amount ? printf("�Ž��� �� :%d\n", pay - amount) :
		//amount > pay ? printf("������ �� :%d\n", amount - pay) : printf("����Ϸ�\n");


	// �ǽ�) ����, ����, ���� ������ �Է� �޾� �հ�� ����� ���ϴ� ���α׷��� �ϼ��Ͻÿ�.
	//int kor, eng, math;
	//printf("������ ������?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//printf("�հ� : %d\n", kor + eng + math);
	//printf("��� : %.2f\n", (double)(kor + eng + math)/3); // ��ȯ ��� 1
	//printf("��� : %.2f\n", (kor + eng + math) / 3.); //��ȯ ��� 2


	//int kor, eng, math;
	//printf("������ ������?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//int sum = kor + eng + math;
	//printf("�հ� : %d\n", sum);
	//printf("��� : %.2f\n", sum/3.); 


	//rgb �� ����� // unsigned int
	//int r, g, b;
	//printf("red?"); scanf("%d",&r);
	//printf("green?"); scanf("%d",&g);
	//printf("blue?"); scanf("%d",&b);
	//unsigned int rgb = r<<16 | g<<8 | b;
	//printf("RGB :%0X\n", rgb);



	return 0;
}