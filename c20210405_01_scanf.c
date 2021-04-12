#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서 
#include <stdio.h>

int main(void) { //void : 없다, 리턴되는 값이 없다
	//입력함수
	//정수형 입력받기
	//int a;
	// \n은 출력할 때 다음줄로 가기위해서 사용, 여기선 사용 x
	//printf("정수는?");
	//scanf("%d",&a); // & : a의 주소
	//printf("입력한 값 : %d   주소 : %p\n", a, &a);


	//실수형 입력받기
	//float f;
	//double d;
	//printf("float 실수는?");
	//scanf("%f",&f);
	//printf("double 실수는?");
	//scanf("%lf",&d); //포맷문자 double일 경우 %lf
	//printf("입력한 값\n %f %p \n  %f %p\n",f,&f,d,&d);


	//문자형 입력받기
	//char c;
	//printf("문자는?");
	//scanf("%c", &c);
	//printf("입력한 값은 %c\n",c);


	//실습) 두 정수를 입력받아서 합계를 출력
	//방식 1) 나눠서 입력
	//int a, b;
	//printf("first number?");
	//scanf("%d",&a);
	//printf("second number?");
	//scanf("%d",&b);
	//printf("%d + %d = %d\n",a,b,a+b);

	//방식 2) 같이 입력
	//int a, b;
	//printf("두 수는?");
	//scanf("%d %d", &a, &b);
	//printf("합계 : %d\n", a+b);


	//실습) 오늘의 날짜(년, 월, 일)를 입력 받아 출력
	//int year, month, day;
	//printf("년도를 입력해주세요!");
	//scanf("%d",&year);
	//printf("월을 입력해주세요!");
	//scanf("%d", &month);
	//printf("일을 입력해주세요!");
	//scanf("%d", &day);
	//printf("%d년 %d월 %d일\n",year,month,day);


	//int year, month, day;
	//printf("년, 월, 일(yyyy mm dd)은?");
	//scanf("%d %d %d", &year, &month, &day);
	//printf("%d년 %d월 %d일\n", year, month, day);


	//실습) 두 개의 정수를 입력 받아 산술연산을 구해보시오.
	//int a, b;
	//printf("두 수는?");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a+b);
	//printf("%d - %d = %d\n", a, b, a-b);
	//printf("%d * %d = %d\n", a, b, a*b);
	//printf("%d / %d = %0.1f\n", a, b, (double)a/b);


	//실습 나아가기) enter 처리하기 getchar 함수!!
	//int a, b;
	//char sign;
	//printf("first?"); // 10 + 20;
	//scanf("%d", &a);

	// 한문자를 읽어서 반환하는 함수
	//getchar(); // enter를 처리하기 위한 목적

	//printf("sign?"); 
	//scanf("%c", &sign);
	//printf("second?"); 
	//scanf("%d", &b);

	//printf("%d %c %d\n", a, sign, b);


	// 실습) 물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성하시오.
	// (단, 물건값과 지불한 돈은 입력 받는다)
	//int amount, pay; //물건값, 낸돈
	//printf("물건 값은?");
	//scanf("%d",&amount);
	//printf("지불한 값은?");
	//scanf("%d", &pay);
	//pay > amount ?
		//printf("거스름 돈 :%d\n", pay - amount):
		//printf("부족한 돈 :%d\n", amount - pay);

	//pay > amount ? printf("거스름 돈 :%d\n", pay - amount) :
		//amount > pay ? printf("부족한 돈 :%d\n", amount - pay) : printf("정산완료\n");


	// 실습) 국어, 영어, 수학 점수를 입력 받아 합계와 평균을 구하는 프로그램을 완성하시오.
	//int kor, eng, math;
	//printf("국영수 점수는?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//printf("합계 : %d\n", kor + eng + math);
	//printf("평균 : %.2f\n", (double)(kor + eng + math)/3); // 변환 방법 1
	//printf("평균 : %.2f\n", (kor + eng + math) / 3.); //변환 방법 2


	//int kor, eng, math;
	//printf("국영수 점수는?");
	//scanf("%d %d %d", &kor, &eng, &math);
	//int sum = kor + eng + math;
	//printf("합계 : %d\n", sum);
	//printf("평균 : %.2f\n", sum/3.); 


	//rgb 값 만들기 // unsigned int
	//int r, g, b;
	//printf("red?"); scanf("%d",&r);
	//printf("green?"); scanf("%d",&g);
	//printf("blue?"); scanf("%d",&b);
	//unsigned int rgb = r<<16 | g<<8 | b;
	//printf("RGB :%0X\n", rgb);



	return 0;
}