#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������迭
	//int arr[3][3];
	//arr[0][0] = 1, 
	//arr[0][1] = 2;
	//arr[0][2] = 3,
	//arr[1][0] = 4;
	//arr[1][1] = 5,
	//arr[1][2] = 6;


	//��� 1)
	//int arr[3][3];
	//int a = 0;
	//for (int i=0; i<3; i++) { //��
	//	for (int j=0; j<3; j++) { //��
	//		arr[i][j] = ++a;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//��� 2)
	//int arr[3][3];
	//for (int i = 0; i < 3; i++) { //��
	//	for (int j = 0; j < 3; j++) { //��
	//		arr[i][j] = (3*i)+(j+1);
	//		printf("%d\n", arr[i][j]);
	//	}
	//}
	

	//�������迭 size ���ϱ�
	// arr == arr[0] == arr[0][0]
	//int arr[2][3];
	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//printf("r������ :%d\n", rsize);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("c������ :%d\n", csize);


	//for (int i = 0; i < rsize; i++) { //��
	//	for (int j = 0; j < csize; j++) { //��
	//		arr[i][j] = (3*i)+(j+1);
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//�ǽ�) �� �л��� ����, ����, ���� ������ �Է� �޾� ��ȣ��� �迭�� �����ϰ�
	// �� ��ȣ ������� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int score[2][3];
	for (int i = 0; i < 2; i++) {
		printf("��,��,�� ������?");
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	//printf("------------------------------\n");
	//�հ�, ��� ���
	//int sum = 0;
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		sum += score[i][j];
	//	}
	//	//�հ�, ���
	//	printf("[%d��] �հ� :%d  ��� :%.1f\n",i+1, sum, (double)sum/3);
	//	sum = 0; //sum �ʱ�ȭ
	//}


	printf("------------------------------\n");
	//�߰� ���� ���񺰷� �հ�, ��� ���
	int sum = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			sum += score[i][j];
		}
		//�հ�, ���
		printf("�հ� :%d  ��� :%.1f\n", j + 1, sum, (double)sum / 3);
		sum = 0; //sum �ʱ�ȭ
	}






	return 0;
}