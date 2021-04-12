#include <stdio.h>

int main() {
	//정수형 변수명 선언
	//int a;
	//초기화
	//a = 20;
	//printf("%d\n",a);

	//실수형 변수명 선언
	//float f; //4byte
	//double d; //8byte
	//초기화
	//f = 3.145641213468472546874;
	//d = 3.145641213468472546874;
	//printf("%.15f\n",f);
	//printf("%.15f\n",d);

	//문자형
	// 선언과 동시에 초기화
	//char c = 'A';
	//printf("문자는 %c %d\n", c, c);

	//데이터형의 바이트수
	//int a = 100;
	//printf("정수형: %dbyte\n",sizeof(a));
	//float f = 3.14;
	//double d = 3.14;
	//printf("float형: %dbyte\n",sizeof(f));
	//printf("double형: %dbyte\n", sizeof(d));
	//char c = 'a';
	//printf("char형: %dbyte\n",sizeof(c));

	//문자열
	//배열의 이름은 주소를 가지고 있다
	//문자열 마지막에 \0(nul문자) 추가 → 문자열의 끝을 나타냄
	//배열의 크기는 문자열의 크기 +1
	//선언과 동시에 초기화 시에는 배열의 크기 생략가능
	//c = "hello"; //상수기 때문에 불가
	//char c[]="hello";
	//printf("문자열:%s  크기:%d\n",c,sizeof(c));
	//printf("5번 : %c\n",c[2]);
	return 0;
}