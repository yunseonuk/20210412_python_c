#include <stdio.h>

int main() {
	//������(+,-,*,/,%)
	//������ ���� => ����
	//�Ǽ��� ���� => �Ǽ�
	//int a = 20, b = 3;
	//printf("%d + %d = %d\n",a,b,a+b);
	//printf("%d - %d = %d\n",a,b,a-b);
	//printf("%d * %d = %d\n",a,b,a*b);
	//printf("%d / %d = %.2f\n",a,b,(double)a/b);
	//printf("%d %% %d = %d\n",a,b,a%b);

	//int a = 50, b = 3;
	//printf("�� : %d\n",a/b);
	//printf("������ : %d\n",a%b);
	//printf("�Ǽ��� ������ : %.2f\n",(double)a/b);


	//���׿�����
	//++, --
	//�տ� ���̸� ����, �ڿ� ���̸� ����
	//int a = 10;
	//a++; // a += 1; // a = a + 1;
	//printf("%d\n", a);
	//a--; // a += 1; // a = a + 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); // ����� �ϰ� �����ض�
	//printf("%d\n", a); // ������ ���� ���
	//printf("%d\n", ++a); // �����ϰ� ����ض�


	//�ǽ�) ���׿�����
	//int a = 10;
	//a--;
	//printf("%d\n", --a); 
	//printf("%d\n", a++);
	//printf("%d\n",a--);
	//printf("%d\n", a);

	//int a = 10;
	//int b = --a; // a = a -1; b = a;
	//int c = b++; // c = b; b = b + 1;
	//b = ++a; // a = a+1; b = a;

	//printf("%d %d %d\n", a, b, c); 


	// ���迬����
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // 1, true
	//printf("%d\n", a > b); // 0, false
	//printf("%d\n", a == b); // 0, false
	//printf("%d\n", a != b); // 1, true


	//�������� : &&, ||, !
	//int a = 10, b = 20;
	//printf("%d\n", a>0 && b>0);
	//printf("%d\n", a>0 && b<0);
	//printf("%d\n", a>0 || b<0);
	//printf("%d\n", !(a>0)); // 1(true) �� 0(flase)


	//��Ʈ ������ : &, |, ^, ~
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	//����Ʈ ������ : <<, >>
	//printf("%d\n", 4>>2); // ���������� 2bit �б�
	//printf("%d\n", 4<<1); // �������� 1bit �б�

	//���׿�����
	//int a = 10, b = -1;
	//a > 0 ? printf("���\n") : printf("����\n");
	//b > 0 ? printf("���\n") : printf("����\n");

	//����) �� ���� ū���� ���
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n", b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);


	//�ǽ�) 20, 10, 30�� 3���� ������ �־����� �� ���� ū ���� ���ϴ� ���α׷�.
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;


	//int a = 20, b = 10, c = 30;
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);


	//�ǽ�) � ������ �־� ���� �� ¦/Ȧ���� �Ǻ��Ͽ� ����Ͻÿ�.
	//����) 6�� ¦���Դϴ�. 9�� Ȧ���Դϴ�.

	//int a = 9;
	//a % 2 == 0 ? printf("%d��(��) ¦���Դϴ�.",a) : printf("%d��(��) Ȧ���Դϴ�.",a);

	//������ ������ �̿��ؼ� ���
	//char * p = a % 2 == 0 ? "¦��" : "Ȧ��";
	//printf("%d�� %s\n", a, p);



}