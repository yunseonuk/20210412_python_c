#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//int a = 2;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자\n");
	//}


	//월의 마지막 날 출력
	//int mon;
	//printf("월은?");
	//scanf("%d", &mon);
	//switch (mon) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31일\n"); break;
	//case 2:
	//	printf("28일\n"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30일\n"); break;
	//default:
	//	printf("잘못된 월입니다.");
	//}


	//실습) 보기메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램을 작성하여 봅시다.
	// ex) 1.짜장면 2.짬뽕 3.설렁탕 4.비빕밥 5.피자 6.스파게티
	int menu;
	printf("1.짜장면 2.짬뽕 3.설렁탕 4.비빕밥 5.피자 6.스파게티 7.탕수육\n");
	printf("메뉴는?");
	scanf("%d", &menu);

	switch (menu) {
	case 1:
	case 2:
	case 7:
		printf("중식\n"); break;
	case 3:
	case 4:
		printf("한식\n"); break;
	case 5:
	case 6:
		printf("양식\n"); break;
	default:
		printf("잘못된 메뉴입니다.");
	}



	return 0;
}
