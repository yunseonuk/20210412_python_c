#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : while
	//while (1) {
	//	printf("c!!!");
	//}

	//break �ݺ��� Ż��
	//int cnt = 0;
	//while (1) { //1:true, 0:false
	//	printf("%d c!!!\n",cnt+1);
	//	cnt++; // cnt += 1; // cnt = cnt + 1;
	//	if (cnt > 9) break;
	//}


	//1~10������ ��
	//int i=0, sum=0;
	//while (i<10) {
	//	//printf("%d\n",++i);
	//	sum += ++i; //i=i+1; sum = sum + i;
	//}
	//printf("�հ� :%d\n", sum);


	//���� 2000�� �Ѵ� ������ �� ���� ���Ͻÿ�.
	// 1+2+3+4+........+n
	// 1,3,6,10..... 2000�� �Ѵ� n
	// int n = 0, sum = 0;
	// while (sum < 2000) {
	//	n++;
	//	sum += n; //sum = sum + n;
	//}
	// printf("n: %d  sum: %d", n, sum);


	//�ǽ� 1���� 20���� �� �� 3�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�(while�� �̿�)
	//��� 1)
	//int i=0;
	//while (i < 20) {
	//	i++;
	//	if (i%3==0) printf("%d ",i);
	//}


	//��� 2)
	//int i=3;
	//while (i < 20) {
	//	printf("%d ", i);
	//	i += 3;
	//}


	//��� 3)
	//int i = 0;
	//while (1) {
	//	i+=3;
	//	if (i > 20) break;
	//	printf("%d ",i);
	//}


	// continue : ���
	// 1~10���� ¦���� ���
	//int i = 0;
	//while (i<10){
	//	i++;
	//	if (i % 2 != 0) continue;
	//	printf("%d ", i);
	//}

	return 0;
	
}