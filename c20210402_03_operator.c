#include <stdio.h>

int main() {
	//연산자(+,-,*,/,%)
	//정수와 정수 => 정수
	//실수와 정수 => 실수
	//int a = 20, b = 3;
	//printf("%d + %d = %d\n",a,b,a+b);
	//printf("%d - %d = %d\n",a,b,a-b);
	//printf("%d * %d = %d\n",a,b,a*b);
	//printf("%d / %d = %.2f\n",a,b,(double)a/b);
	//printf("%d %% %d = %d\n",a,b,a%b);

	//int a = 50, b = 3;
	//printf("몫 : %d\n",a/b);
	//printf("나머지 : %d\n",a%b);
	//printf("실수로 나눈값 : %.2f\n",(double)a/b);


	//단항연산자
	//++, --
	//앞에 붙이면 전위, 뒤에 붙이면 후위
	//int a = 10;
	//a++; // a += 1; // a = a + 1;
	//printf("%d\n", a);
	//a--; // a += 1; // a = a + 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); // 출력을 하고 증가해라
	//printf("%d\n", a); // 증가된 값을 출력
	//printf("%d\n", ++a); // 증가하고 출력해라


	//실습) 단항연산자
	//int a = 10;
	//a--;
	//printf("%d\n", --a); 
	//printf("%d\n", a++);
	//printf("%d\n",a--);
	//printf("%d\n", a);

	//int a = 10;
	//int b = --a; // a = a -1; b = a;
	//int c = b++; // c = b; b = b + 1;
	//b = ++a; // a = a+1; b = a;

	//printf("%d %d %d\n", a, b, c); 


	// 관계연산자
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // 1, true
	//printf("%d\n", a > b); // 0, false
	//printf("%d\n", a == b); // 0, false
	//printf("%d\n", a != b); // 1, true


	//논리연산자 : &&, ||, !
	//int a = 10, b = 20;
	//printf("%d\n", a>0 && b>0);
	//printf("%d\n", a>0 && b<0);
	//printf("%d\n", a>0 || b<0);
	//printf("%d\n", !(a>0)); // 1(true) → 0(flase)


	//비트 연산자 : &, |, ^, ~
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);

	//시프트 연산자 : <<, >>
	//printf("%d\n", 4>>2); // 오른쪽으로 2bit 밀기
	//printf("%d\n", 4<<1); // 왼쪽으로 1bit 밀기

	//삼항연산자
	//int a = 10, b = -1;
	//a > 0 ? printf("양수\n") : printf("음수\n");
	//b > 0 ? printf("양수\n") : printf("음수\n");

	//예제) 두 수중 큰수를 출력
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n", b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);


	//실습) 20, 10, 30의 3개의 정수가 주어졌을 때 가장 큰 값을 구하는 프로그램.
	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;


	//int a = 20, b = 10, c = 30;
	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", max);


	//실습) 어떤 정수가 주어 졌을 때 짝/홀수를 판별하여 출력하시오.
	//예시) 6은 짝수입니다. 9는 홀수입니다.

	//int a = 9;
	//a % 2 == 0 ? printf("%d는(은) 짝수입니다.",a) : printf("%d는(은) 홀수입니다.",a);

	//포인터 변수를 이용해서 출력
	//char * p = a % 2 == 0 ? "짝수" : "홀수";
	//printf("%d는 %s\n", a, p);



}