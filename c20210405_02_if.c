#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 조건식이 참일 때 수행할 문장과 거짓일 때 수행할 문장을 구별
	//int a = 0;
	//if (a > 0) {
	//	printf("양수\n");
	//}
	//else {
	//	//중첩if문
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//}


	//표현을 간단하게
	//수행할 문장일 하나일 땐 {} 생략 가능
	//int a = 0;
	//if (a > 0)
	//	printf("양수\n");
	//else if (a < 0)
	//	printf("음수\n");
	//else
	//	printf("양수도 음수도 아닙니다.\n");


	//실습) 두 정수를 입력받아 큰 수를 출력하시오.
	//(단, 두수는 같을 수도 있다.)
	//int a, b;
	//printf("두 정수는?");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (b > a)
	//	printf("%d\n", b);
	//else
	//	printf("두 수는 같다\n");


	//실습) 학생의 점수를 입력 받아 학점을 출력하는 프로그램을 작성해 보시오.
	//학점 : 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60 미만 F
	//int score;
	//printf("점수는?");
	//scanf("%d", &score);
	//if (score > 100 || score < 0)
	//	printf("잘못된 점수\n");
	//else if (score >= 90) // 조건 뒤에는 ;를 붙이지 않는다 !!
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");


	//실습) 학생의 국, 영, 수 점수를 입력 받아 총점과 평균을 출력해 보시오.
	//(단, 60점 미만이 한 과목이라도 있으면 과락)
	//int kor, eng, math;
	//printf("국, 영, 수 점수는?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//if (kor < 60 || eng < 60 || math < 60) {
	//	printf("과락\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("합계:%d\n", sum);
	//	printf("평균:%.2f\n", avg);
	//}


	//실습) 윤년
	//int year;
	//printf("년도는?");
	//scanf("%d", &year);
	//if (year%4 == 0 && year%100 != 0 || year%400 == 0)
	//	printf("윤년이다\n");
	//else
	//	printf("윤년이 아니다\n");


	//실습) 보기메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램을 작성하여 봅시다.
	// ex) 1.짜장면 2.짬뽕 3.설렁탕 4.비빕밥 5.피자 6.스파게티

	int menu;
	printf("1.짜장면\n 2.짬뽕\n 3.설렁탕\n 4.비빔밥\n 5.피자\n 6.스파게티\n");
	printf("번호는?");
	scanf("%d", &menu);
	if (menu == 1 || menu == 2) {
		printf("중식\n");
	}
	else if (menu == 3 || menu == 4) {
		printf("한식\n");
	}
	else if (menu == 5 || menu == 6) {
		printf("양식\n");
	}
	else {
		printf("잘못된 메뉴\n");
	}

	return 0;
}