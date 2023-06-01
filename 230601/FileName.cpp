#include <iostream>


//int main()
	/*int num1 = 10, num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);*/

	// ((변수 선언부
	//int res;
	//int num1, num2, num3;
	//// 변수 선언부))

	//// ((사용자 입력받는 로직
	//
	//printf("정수 세개를 입력하면 x+y*z로 계산 : ");
	//scanf_s("%d %d %d", &num1, &num2, &num3);
	//// 사용자 입력받는 로직))

	//// ((실제 연산하는 로직 / 플러스 연산
	//res = num1 + num2 * num3;
	//printf("%d+%d*%d=%d\n", num1, num2, num3, res);
	//// 실제 연산하는 로직 / 플러스 연산))
	//main함수 여기서 종료
	//return 0;
	


	//int res1;
	//int a1, a2, a3;

	//printf("정수 세개를 입력하면 (x-y)*(y+z)*(z %% x)로 계산 : ");
	//scanf_s("%d %d %d", &a1, &a2, &a3);

	//res1 = (a1 - a2) * (a2 + a3) * (a3 % a1);
	//printf("(%d - %d)*(%d + %d)*(%d %% %d)=%d \n", a1, a2, a2, a3, a3, a1, res1);


	////정수형 데이터 타입들
	//char charValue = 'A';					//문자 하나를 저장하기 위한 데이터 타입
	//short shortValue = 10;					//int 보다 작은 수를 저장하기 위한 데이터 타입
	//int intvalue = 100;						//가장 만만한 수를 저장하기 위한 데이터 타입
	//long longValue = 200;					//int가 커져서 이제 잘 안쓰는 데이터 타입
	//long long longlongValue = 1000;			//int보다 큰 수를 저장하기 위한 데이터 타입

	////실수형 데이터 타입들
	//float floatValue = 10.1;				//가장 만만한 실수를 저장하기 위한 데이터 타입
	//double doubleValue = 100.1;				//float 보다 큰 실수를 저장하기 위한 데이터 타입
	//long double longdoubleValue = 200.1;	//double 보다 큰 실수를 저장하기 위한 데이터 타입

	//printf("char 의 크기는? %d byte. \n", sizeof(charValue));
	//printf("short 의 크기는? %d byte. \n", sizeof(shortValue));
	//printf("int 의 크기는? %d byte. \n", sizeof(intvalue));
	//printf("long 의 크기는? %d byte. \n", sizeof(longValue));
	//printf("long long 의 크기는? %d byte. \n", sizeof(longlongValue));

	//printf("float 의 크기는? %d byte. \n", sizeof(floatValue));
	//printf("double 의 크기는? %d byte. \n", sizeof(doubleValue));
	//printf("long double 의 크기는? %d byte. \n", sizeof(longdoubleValue));


//
//float cir(const float PI, int num);//A의 전방선언
//
//int main()
//{
//
//	float PI = 3.141592f;
//	int num;
//
//	printf("반지름을 입력 :");
//	scanf_s("%d", &num);
//	printf("반지름이 %d인 원의 넓이는 %f 입니다.", num, cir(PI, num)); 
//	/*함수의 종류를 제외하고 이름만 써도 되지만
//	아래 A 와 순서도 맞춰야됨*/
//
//}
//
//float cir(const float PI, int num)//A
//{
//	
//
//	return num * num * PI;
//
//
//}


//
//
//		
//	float cir(const float PI, int num);//A의 전방선언
//	
//	int main()
//	{
//	
//		float PI = 3.141592f;
//		int num;
//	
//		printf("반지름을 입력 :");
//		scanf_s("%d", &num);
//		printf("반지름이 %d인 원의 넓이는 %f 입니다.", num, cir(PI, num)); 
//		/*함수의 종류를 제외하고 이름만 써도 되지만
//		아래 A 와 순서도 맞춰야됨*/
//	
//	}
//	
//	float cir(const float PI, int num)//A
//	{
//		
//	
//		return num * num * PI;
//}

//int abc(char alpha);
//
//int main()
//{
//	//char charValue = 'B';
//
//	//printf("char은 C.->%d \n", charValue);
//
//	char num;
//
//	scanf_s("%c", &num);
//	char alpha = num;
//	bool isit = abc(alpha);
//	printf("이것은 특수문자인가? %d \n", isit);
//
//
//}
//	
//int abc(char alpha)
//{
//	int ans = !((48 <= alpha && alpha <= 57)||(65 <= alpha && alpha <= 90)||(97 <= alpha && alpha <= 122));
//
//	return ans;
//}


//int main()
//{
//	bool insame = ('A' == 65);
//
//	char someAlphabet = 'D';
//	bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
//	bool isSmallAlphabet = ('a' <= isSmallAlphabet && isSmallAlphabet <= 'z');
//	bool isNumber = ('0' <= isNumber && isNumber <= '9');
//
//	if (isBigAlphabet)
//	{
//		printf("영문 대문자 입니다. \n");
//	}
//
//	else if (isSmallAlphabet)
//	{
//		printf("영문 소문자 입니다. \n");
//
//	}
//
//	else if(isNumber)
//	{
//		printf("숫자입니다. \n");
//	}
//
//	else
//	{
//		printf("잘 모르겠습니다. \n");
//
//	}
//	return 0;
//}


//
//int main()
//{
//	int loopCount = 388;
//	while (1 <= loopCount)
//	{
//		printf("hello world! 루프 횟수 : %d \n", loopCount);
//		loopCount -= 1;
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int loopend = 1;
//while (10>= loopend)
//{
//	printf("숫자세기: %d \n", loopend);
//	loopend += 1;
//	//OR ++loopend
//}
//return 0;
//
//}

int main()
{
	int num ;
	printf("사각형의 사이즈는?3~10\n");
	scanf_s("%d", &num);
	int count(3 <= num && num <= 10);

	int aa = 1;
	int loop = 1;
	if (count)
	{
		while (aa <= num)
		{
			while (loop <= num)
			{
				printf("* ");
				loop += 1;

			}
			printf("\n");
			aa += 1;
			loop = 1;
		}
	}

	return 0;
}
