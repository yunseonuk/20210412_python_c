#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //�ּҸ� ���� ���� ���˹��ڿ� : %p;

	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i=0; i<3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////�ݺ����� �̿��ؼ� ���
	//for (int i=0; i<3; i++) {
	//	printf("%d ",arr[i]);
	//}


	//�ǽ�)
	//double arr[3] = {1.1, 2.1, 3.1}; //����� ���ÿ� ����
	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//double arr[5];
	//�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("������ :%d\n", size);

	//for (int i=0; i<size; i++) {
	//	arr[i] = i+1.1;
	//}

	////�ݺ����� �̿��ؼ� ���
	//for (int i=0; i<size; i++) {
	//	printf("%.1f ",arr[i]);
	//}


	//������ �迭
	//����� �ʱ�ȭ �� ���, �迭 ũ�� ���� ����
	//���� ����ǥ �� ���� �ϳ�, ū ����ǥ �� ���ڿ�
	//char arr[] = {'p','y','t','h','o','n'};
	//int size = sizeof(arr) / sizeof(char);
	////printf("%d", size);
	//for (int i=0; i<size; i++) {
	//	printf("%c", arr[i]);
	//}


	//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�� ��
	//int a = 5; 
	//const int a = 5; //��� : ������ �Ұ���
	//LEN�� #define�� ���ǵ� ��ũ�� ��� : ������ �Ǳ����� ��ü
	//int arr[LEN], sum = 0; //�հ踦 ������ ����
	//int size = sizeof(arr) / sizeof(int);

	//�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d��] ������? ", i+1);
	//	scanf("%d", &arr[i]);
	//}
	//����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i], &arr[i]);
	//}


	//�հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ� :%d", sum);


	//�ǽ�) �� �л��� ������ �Է� �޾� ��ȣ��� �迭�� �����ϰ� 
	//�� ��ȣ ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	//����) 1�� ���� : 90
	//1) �հ�� ��� ���
	//2) ���ϴ� �л���ȣ�� �Է��ϸ� �ش� �л��� ������ ���

	//int score[3], sum = 0;
	//int size = sizeof(score) / sizeof(int);
	//for (int i=0; i<size; i++) {
	//	printf("%d�� ������?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("---------------\n");

	//for (int i = 0; i < size; i++) {
	//	printf("%d�� :%d��\n", i+1, score[i]);
	//	sum += score[i];
	//}
	//printf("---------------\n");
	//printf("�հ� :%d\n",sum);
	//printf("��� :%.2f\n",(double)sum/size);


	//�˻� ��� 1)
	//printf("---------------\n");
	//int no;
	//char quit; //���ắ��
	//do {
	//	printf("�˻���ȣ?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no > size) {
	//		printf("�߸��� ��ȣ\n");
	//		continue; //��� ����
	//	}
	//	printf("������ %d\n", score[no - 1]);
	//	printf("---------------\n");
	//	printf("����?(q)");
	//	scanf("%c", &quit);
	//} while (quit != 'q');


	//�˻� ��� 2)
	//int score[3] = { 20, 50, 30 };
	//printf("---------------\n");
	//int no;
	//char quit; //���ắ��
	//while (1) {
	//	printf("�˻���ȣ?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no > 3) {
	//		printf("�߸��� ��ȣ\n");
	//		continue; //��� ����
	//	}
	//	printf("������ %d\n", score[no-1]);
	//	printf("---------------\n");
	//	printf("����?(q)");
	//	scanf("%c", &quit);
	//	if (quit== 'q') break;
	//}


	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 5 8 13 ......
	int fibo[20];
	int sum = 0;
	fibo[0] = 0; fibo[1] = 1;
	for (int i=2; i<20; i++) {
		printf("%d", sum);
	}














	return 0;
}