#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//다차원배열
	//int arr[3][3];
	//arr[0][0] = 1, 
	//arr[0][1] = 2;
	//arr[0][2] = 3,
	//arr[1][0] = 4;
	//arr[1][1] = 5,
	//arr[1][2] = 6;


	//방법 1)
	//int arr[3][3];
	//int a = 0;
	//for (int i=0; i<3; i++) { //행
	//	for (int j=0; j<3; j++) { //열
	//		arr[i][j] = ++a;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//방법 2)
	//int arr[3][3];
	//for (int i = 0; i < 3; i++) { //행
	//	for (int j = 0; j < 3; j++) { //열
	//		arr[i][j] = (3*i)+(j+1);
	//		printf("%d\n", arr[i][j]);
	//	}
	//}
	

	//다차원배열 size 구하기
	// arr == arr[0] == arr[0][0]
	//int arr[2][3];
	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//printf("r사이즈 :%d\n", rsize);
	//int csize = sizeof(arr[0])/sizeof(int);
	//printf("c사이즈 :%d\n", csize);


	//for (int i = 0; i < rsize; i++) { //행
	//	for (int j = 0; j < csize; j++) { //열
	//		arr[i][j] = (3*i)+(j+1);
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//실습) 반 학생의 국어, 영어, 수학 점수를 입력 받아 번호대로 배열을 저장하고
	// 반 번호 순서대로 총점과 평균을 출력하는 프로그램을 작성하시오.
	int score[2][3];
	for (int i = 0; i < 2; i++) {
		printf("국,영,수 점수는?");
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	//printf("------------------------------\n");
	//합계, 평균 출력
	//int sum = 0;
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		sum += score[i][j];
	//	}
	//	//합계, 평균
	//	printf("[%d번] 합계 :%d  평균 :%.1f\n",i+1, sum, (double)sum/3);
	//	sum = 0; //sum 초기화
	//}


	printf("------------------------------\n");
	//추가 응용 과목별로 합계, 평균 출력
	int sum = 0;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			sum += score[i][j];
		}
		//합계, 평균
		printf("합계 :%d  평균 :%.1f\n", j + 1, sum, (double)sum / 3);
		sum = 0; //sum 초기화
	}






	return 0;
}