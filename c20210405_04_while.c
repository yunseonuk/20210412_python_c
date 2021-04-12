#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : while
	//while (1) {
	//	printf("c!!!");
	//}

	//break 반복문 탈출
	//int cnt = 0;
	//while (1) { //1:true, 0:false
	//	printf("%d c!!!\n",cnt+1);
	//	cnt++; // cnt += 1; // cnt = cnt + 1;
	//	if (cnt > 9) break;
	//}


	//1~10까지의 합
	//int i=0, sum=0;
	//while (i<10) {
	//	//printf("%d\n",++i);
	//	sum += ++i; //i=i+1; sum = sum + i;
	//}
	//printf("합계 :%d\n", sum);


	//합이 2000을 넘는 정수와 그 합을 구하시오.
	// 1+2+3+4+........+n
	// 1,3,6,10..... 2000이 넘는 n
	// int n = 0, sum = 0;
	// while (sum < 2000) {
	//	n++;
	//	sum += n; //sum = sum + n;
	//}
	// printf("n: %d  sum: %d", n, sum);


	//실습 1부터 20까지 수 중 3의 배수만 출력하는 프로그램을 작성하시오(while문 이용)
	//방식 1)
	//int i=0;
	//while (i < 20) {
	//	i++;
	//	if (i%3==0) printf("%d ",i);
	//}


	//방식 2)
	//int i=3;
	//while (i < 20) {
	//	printf("%d ", i);
	//	i += 3;
	//}


	//방식 3)
	//int i = 0;
	//while (1) {
	//	i+=3;
	//	if (i > 20) break;
	//	printf("%d ",i);
	//}


	// continue : 계속
	// 1~10까지 짝수만 출력
	//int i = 0;
	//while (i<10){
	//	i++;
	//	if (i % 2 != 0) continue;
	//	printf("%d ", i);
	//}

	return 0;
	
}