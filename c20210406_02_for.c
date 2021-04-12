#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : for
	//int i; //반복할 변수
	//	//①  ②  ④ // 1은 초기 1번만 실행 2-3-4 계속 반복, 조건이 거짓이 될때까지
	//for (i=0;i<10;i++) {   //for (초기식;조건식;증감식)
	//	//③
	//	printf("%d\n", i);
	//}


	//짝수만 출력
	//int i;
	//for (i=0; i<20; i+=2){
	//	printf("%d\n", i);
	//}


	//구구단을 출력해 보시오.
	//for (int i=1;i<10;i++) {
	//	printf("2 x %d = %d\n",i,2*i);
	//}


	//단수를 입력 받아 구구단을 출력해 보시오.
	//int dan;
	//printf("단수는?");
	//scanf("%d",&dan);
	//for (int i=1;i<10;i++) {
	//	printf("%d x %d = %d\n",dan,i,dan*i);
	//}


	//사용자가 0을 입력할 때까지 구구단을 출력하시오.
	//int dan;
	//while (1) {
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d x %d = %d\n", dan, i, dan * i);
	//}
	//}



	//int dan;
	//do{
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if(dan!=0)
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d x %d = %d\n", dan, i, dan * i);
	//	}
	//} while (dan != 0);


	//이중 for문
	//for (int i = 0; i < 10; i++) {
	//	printf("---------------\n");
	//	for (int j = 0; j < 10; j++) {
	//		printf("%d %d\n", i, j);
	//	}
	//}


	// 2단~9단까지 출력하시오
	//for (int i = 2; i < 20; i++) {
	//	printf("----------\n");
	//	printf("[%d단]\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d x %d = %d\n", i, j,i*j);
	//	}
	//}


	//3중 for문
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);


	//실습) 1부터 100까지의 합
	//int sum = 0;
	//for (int i=1;i<101;i++) {
	//	sum += i;
	//}
	//printf("1부터 100까지의 합은 %d\n",sum);




	//실습) 1부터 입력 받은 수까지의 합
	//int n, sum = 0;
	//printf("마지막 수는?");
	//scanf("%d",&n);
	//for (int i=1; i<n+1; i++) { //i는 for 지역변수
	//	sum += i;
	//}
	//printf("1부터 %d까지의 합은 %d\n",n,sum);
	// printf("i의 현재값 : %d\n", j); //i변수 사용불가, for문 밖에서 선언할 것!!


	//실습) 두 정수를 입력 받아서 큰수에서 작은수를 뺀 값을 구하는 프로그램을 작성하시오.
	//(단, 0을 입력하면 프로그램 종료)
	//최대 반복횟수는 10번
	//int a, b;
	//for (int i=0;i<10;i++) {
	//	printf("두 수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (a > b)
	//		printf("절대값 :%d\n", a-b);
	//	else 
	//		printf("절대값 :%d\n", b-a);
	//	printf("스페이스를 입력하면 종료됩니다\n");
	//	int c = getch(); //에코없는 함수
	//	// printf("%d\n", c);
	//	if (c == 32) break; //스페이스를 입력하면 종료
	//}


	// 실습) 별찍기 1
	// for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}


	//실습) 별찍기 2
	//방식 1)
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//방식 2)
	//for (int i = 7; i > 0; i--) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// 실습) 별찍기 3
	//for (int i = 0; i < 7; i++) {
	//	//공백출력
	//	for (int j = 0; j < 7-i; j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0; j < i ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//실습) 별찍기 4
	//for (int i=0; i<7; i++) {
	//	for (int j = 0;j<7-i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0;j<2*i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}

	//두 개의 숫자를 입력 받아서 두 수 사이의 정수의 합을 계산하는 프로그램을 작성하시오.
	//방식 1)
	//int a, b, sum=0;
	//printf("what are the two numbers?");
	//scanf("%d", &a);
	//scanf("%d", &b);
	//for (int i=0;i<=b;i++) {
	//	sum += i; //sum = sum + i;
	//}
	//printf("%d", sum);
	
	//방식 2)
	//int a, b;
	//for (int i = a; i <= b; i++){

	//}
	
	//방식 3)
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

	
	// n!(factorial : 팩토리얼) 구하기
	// n! = 1 * 2 *...* n
	//int fac;
	//printf("정수를 입력하세요.");
	//scanf("%d", &fac);
	//int mul = 1; //곱한값 누적변수
	//for (int i = 1; i < fac + 1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);


	// 실습) 1부터 10까지의 정수에서 두 수를 골라 두 수의 합이 10이 되는 두수를 구하는 프로그램
	//for (int i=1; i<10; i++) {
	//	for (int j=i; j<10; j++) {
	//		if (i+j==10) printf("(%d,%d)\n", i,j);
	//	}
	//}





	// 점심메뉴 고르기
	//char a;
	//do {
	//	printf("메뉴를 고르세요.\n");
	//	printf("1.짜장\n2.탕수육\n3.뚝불\n4.제육\n5.연어초밥\n6.모듬초밥\n음식번호:");
	//	scanf("%d", &a);
	//	//printf("%c %d\n", a, a);
	//	getchar(); //엔터처리
	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("중식코너\n"); break;
	//	case '3':
	//	case '4':
	//		printf("한식코너\n"); break;
	//	case '5':
	//	case '6':
	//		printf("일식코너\n"); break;
	//	case 'q':
	//		printf("프로그램을 종료\n"); break;
	//	default:
	//		printf("잘못입력하셨습니다.\n"); break;
	//	}
	//} while (a != 'q');


























	return 0;
}