#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : for
	//int i; //�ݺ��� ����
	//	//��  ��  �� // 1�� �ʱ� 1���� ���� 2-3-4 ��� �ݺ�, ������ ������ �ɶ�����
	//for (i=0;i<10;i++) {   //for (�ʱ��;���ǽ�;������)
	//	//��
	//	printf("%d\n", i);
	//}


	//¦���� ���
	//int i;
	//for (i=0; i<20; i+=2){
	//	printf("%d\n", i);
	//}


	//�������� ����� ���ÿ�.
	//for (int i=1;i<10;i++) {
	//	printf("2 x %d = %d\n",i,2*i);
	//}


	//�ܼ��� �Է� �޾� �������� ����� ���ÿ�.
	//int dan;
	//printf("�ܼ���?");
	//scanf("%d",&dan);
	//for (int i=1;i<10;i++) {
	//	printf("%d x %d = %d\n",dan,i,dan*i);
	//}


	//����ڰ� 0�� �Է��� ������ �������� ����Ͻÿ�.
	//int dan;
	//while (1) {
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d x %d = %d\n", dan, i, dan * i);
	//}
	//}



	//int dan;
	//do{
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	if(dan!=0)
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d x %d = %d\n", dan, i, dan * i);
	//	}
	//} while (dan != 0);


	//���� for��
	//for (int i = 0; i < 10; i++) {
	//	printf("---------------\n");
	//	for (int j = 0; j < 10; j++) {
	//		printf("%d %d\n", i, j);
	//	}
	//}


	// 2��~9�ܱ��� ����Ͻÿ�
	//for (int i = 2; i < 20; i++) {
	//	printf("----------\n");
	//	printf("[%d��]\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d x %d = %d\n", i, j,i*j);
	//	}
	//}


	//3�� for��
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);


	//�ǽ�) 1���� 100������ ��
	//int sum = 0;
	//for (int i=1;i<101;i++) {
	//	sum += i;
	//}
	//printf("1���� 100������ ���� %d\n",sum);




	//�ǽ�) 1���� �Է� ���� �������� ��
	//int n, sum = 0;
	//printf("������ ����?");
	//scanf("%d",&n);
	//for (int i=1; i<n+1; i++) { //i�� for ��������
	//	sum += i;
	//}
	//printf("1���� %d������ ���� %d\n",n,sum);
	// printf("i�� ���簪 : %d\n", j); //i���� ���Ұ�, for�� �ۿ��� ������ ��!!


	//�ǽ�) �� ������ �Է� �޾Ƽ� ū������ �������� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	//(��, 0�� �Է��ϸ� ���α׷� ����)
	//�ִ� �ݺ�Ƚ���� 10��
	//int a, b;
	//for (int i=0;i<10;i++) {
	//	printf("�� ����?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (a > b)
	//		printf("���밪 :%d\n", a-b);
	//	else 
	//		printf("���밪 :%d\n", b-a);
	//	printf("�����̽��� �Է��ϸ� ����˴ϴ�\n");
	//	int c = getch(); //���ھ��� �Լ�
	//	// printf("%d\n", c);
	//	if (c == 32) break; //�����̽��� �Է��ϸ� ����
	//}


	// �ǽ�) ����� 1
	// for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}


	//�ǽ�) ����� 2
	//��� 1)
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//��� 2)
	//for (int i = 7; i > 0; i--) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// �ǽ�) ����� 3
	//for (int i = 0; i < 7; i++) {
	//	//�������
	//	for (int j = 0; j < 7-i; j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0; j < i ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//�ǽ�) ����� 4
	//for (int i=0; i<7; i++) {
	//	for (int j = 0;j<7-i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0;j<2*i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}

	//�� ���� ���ڸ� �Է� �޾Ƽ� �� �� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	//��� 1)
	//int a, b, sum=0;
	//printf("what are the two numbers?");
	//scanf("%d", &a);
	//scanf("%d", &b);
	//for (int i=0;i<=b;i++) {
	//	sum += i; //sum = sum + i;
	//}
	//printf("%d", sum);
	
	//��� 2)
	//int a, b;
	//for (int i = a; i <= b; i++){

	//}
	
	//��� 3)
	//int a, b, sum=0;
	//printf("start number?");
	//scanf("%d",&a);
	//printf("end number?");
	//scanf("%d",&b);
	//while (a <= b) {
	//	sum += a;
	//	a++;
	//	}
	//printf("%d",sum);

	
	// n!(factorial : ���丮��) ���ϱ�
	// n! = 1 * 2 *...* n
	//int fac;
	//printf("������ �Է��ϼ���.");
	//scanf("%d", &fac);
	//int mul = 1; //���Ѱ� ��������
	//for (int i = 1; i < fac + 1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);


	// �ǽ�) 1���� 10������ �������� �� ���� ��� �� ���� ���� 10�� �Ǵ� �μ��� ���ϴ� ���α׷�
	//for (int i=1; i<10; i++) {
	//	for (int j=i; j<10; j++) {
	//		if (i+j==10) printf("(%d,%d)\n", i,j);
	//	}
	//}





	// ���ɸ޴� ����
	//char a;
	//do {
	//	printf("�޴��� ������.\n");
	//	printf("1.¥��\n2.������\n3.�Һ�\n4.����\n5.�����ʹ�\n6.����ʹ�\n���Ĺ�ȣ:");
	//	scanf("%d", &a);
	//	//printf("%c %d\n", a, a);
	//	getchar(); //����ó��
	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("�߽��ڳ�\n"); break;
	//	case '3':
	//	case '4':
	//		printf("�ѽ��ڳ�\n"); break;
	//	case '5':
	//	case '6':
	//		printf("�Ͻ��ڳ�\n"); break;
	//	case 'q':
	//		printf("���α׷��� ����\n"); break;
	//	default:
	//		printf("�߸��Է��ϼ̽��ϴ�.\n"); break;
	//	}
	//} while (a != 'q');


























	return 0;
}