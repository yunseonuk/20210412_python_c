#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���ǽ��� ���� �� ������ ����� ������ �� ������ ������ ����
	//int a = 0;
	//if (a > 0) {
	//	printf("���\n");
	//}
	//else {
	//	//��øif��
	//	if (a < 0) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("����� ������ �ƴմϴ�.\n");
	//	}
	//}


	//ǥ���� �����ϰ�
	//������ ������ �ϳ��� �� {} ���� ����
	//int a = 0;
	//if (a > 0)
	//	printf("���\n");
	//else if (a < 0)
	//	printf("����\n");
	//else
	//	printf("����� ������ �ƴմϴ�.\n");


	//�ǽ�) �� ������ �Է¹޾� ū ���� ����Ͻÿ�.
	//(��, �μ��� ���� ���� �ִ�.)
	//int a, b;
	//printf("�� ������?");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (b > a)
	//	printf("%d\n", b);
	//else
	//	printf("�� ���� ����\n");


	//�ǽ�) �л��� ������ �Է� �޾� ������ ����ϴ� ���α׷��� �ۼ��� ���ÿ�.
	//���� : 90�̻� A, 80�̻� B, 70�̻� C, 60�̻� D, 60 �̸� F
	//int score;
	//printf("������?");
	//scanf("%d", &score);
	//if (score > 100 || score < 0)
	//	printf("�߸��� ����\n");
	//else if (score >= 90) // ���� �ڿ��� ;�� ������ �ʴ´� !!
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");


	//�ǽ�) �л��� ��, ��, �� ������ �Է� �޾� ������ ����� ����� ���ÿ�.
	//(��, 60�� �̸��� �� �����̶� ������ ����)
	//int kor, eng, math;
	//printf("��, ��, �� ������?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("����\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("�հ�:%d\n", sum);
	//	printf("���:%.2f\n", avg);
	//}


	//�ǽ�) ����
	//int year;
	//printf("�⵵��?");
	//scanf("%d", &year);
	//if (year%4 == 0 && year%100 != 0 || year%400 == 0)
	//	printf("�����̴�\n");
	//else
	//	printf("������ �ƴϴ�\n");


	//�ǽ�) ����޴��� ���� ������ �����ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷��� �ۼ��Ͽ� ���ô�.
	// ex) 1.¥��� 2.«�� 3.������ 4.����� 5.���� 6.���İ�Ƽ

	int menu;
	printf("1.¥���\n 2.«��\n 3.������\n 4.�����\n 5.����\n 6.���İ�Ƽ\n");
	printf("��ȣ��?");
	scanf("%d", &menu);
	if (menu == 1 || menu == 2) {
		printf("�߽�\n");
	}
	else if (menu == 3 || menu == 4) {
		printf("�ѽ�\n");
	}
	else if (menu == 5 || menu == 6) {
		printf("���\n");
	}
	else {
		printf("�߸��� �޴�\n");
	}

	return 0;
}