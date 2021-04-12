#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //주소를 찍을 때는 포맷문자열 : %p;

	//반복문을 이용해서 초기화
	//for (int i=0; i<3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////반복문을 이용해서 출력
	//for (int i=0; i<3; i++) {
	//	printf("%d ",arr[i]);
	//}


	//실습)
	//double arr[3] = {1.1, 2.1, 3.1}; //선언과 동시에 선언
	//반복문을 이용해서 초기화
	//double arr[5];
	//배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈 :%d\n", size);

	//for (int i=0; i<size; i++) {
	//	arr[i] = i+1.1;
	//}

	////반복문을 이용해서 출력
	//for (int i=0; i<size; i++) {
	//	printf("%.1f ",arr[i]);
	//}


	//문자형 배열
	//선언과 초기화 할 경우, 배열 크기 생략 가능
	//작은 따옴표 → 문자 하나, 큰 따옴표 → 문자열
	//char arr[] = {'p','y','t','h','o','n'};
	//int size = sizeof(arr) / sizeof(char);
	////printf("%d", size);
	//for (int i=0; i<size; i++) {
	//	printf("%c", arr[i]);
	//}


	//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임 시
	//int a = 5; 
	//const int a = 5; //상수 : 변경이 불가능
	//LEN은 #define에 정의된 매크로 상수 : 컴파일 되기전에 대체
	//int arr[LEN], sum = 0; //합계를 저장할 변수
	//int size = sizeof(arr) / sizeof(int);

	//입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d번] 정수는? ", i+1);
	//	scanf("%d", &arr[i]);
	//}
	//출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i], &arr[i]);
	//}


	//합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계 :%d", sum);


	//실습) 반 학생의 점수를 입력 받아 번호대로 배열에 저장하고 
	//반 번호 순서대로 출력하는 프로그램을 작성하시오.
	//예시) 1번 점수 : 90
	//1) 합계와 평균 출력
	//2) 원하는 학생번호를 입력하면 해당 학생의 점수를 출력

	//int score[3], sum = 0;
	//int size = sizeof(score) / sizeof(int);
	//for (int i=0; i<size; i++) {
	//	printf("%d번 점수는?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("---------------\n");

	//for (int i = 0; i < size; i++) {
	//	printf("%d번 :%d점\n", i+1, score[i]);
	//	sum += score[i];
	//}
	//printf("---------------\n");
	//printf("합계 :%d\n",sum);
	//printf("평균 :%.2f\n",(double)sum/size);


	//검색 방법 1)
	//printf("---------------\n");
	//int no;
	//char quit; //종료변수
	//do {
	//	printf("검색번호?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no > size) {
	//		printf("잘못된 번호\n");
	//		continue; //계속 진행
	//	}
	//	printf("점수는 %d\n", score[no - 1]);
	//	printf("---------------\n");
	//	printf("종료?(q)");
	//	scanf("%c", &quit);
	//} while (quit != 'q');


	//검색 방법 2)
	//int score[3] = { 20, 50, 30 };
	//printf("---------------\n");
	//int no;
	//char quit; //종료변수
	//while (1) {
	//	printf("검색번호?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no > 3) {
	//		printf("잘못된 번호\n");
	//		continue; //계속 진행
	//	}
	//	printf("점수는 %d\n", score[no-1]);
	//	printf("---------------\n");
	//	printf("종료?(q)");
	//	scanf("%c", &quit);
	//	if (quit== 'q') break;
	//}


	//피보나치의 수열 구하기
	//0 1 1 2 3 5 8 13 ......
	int fibo[20];
	int sum = 0;
	fibo[0] = 0; fibo[1] = 1;
	for (int i=2; i<20; i++) {
		printf("%d", sum);
	}














	return 0;
}