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

	// ((���� �����
	//int res;
	//int num1, num2, num3;
	//// ���� �����))

	//// ((����� �Է¹޴� ����
	//
	//printf("���� ������ �Է��ϸ� x+y*z�� ��� : ");
	//scanf_s("%d %d %d", &num1, &num2, &num3);
	//// ����� �Է¹޴� ����))

	//// ((���� �����ϴ� ���� / �÷��� ����
	//res = num1 + num2 * num3;
	//printf("%d+%d*%d=%d\n", num1, num2, num3, res);
	//// ���� �����ϴ� ���� / �÷��� ����))
	//main�Լ� ���⼭ ����
	//return 0;
	


	//int res1;
	//int a1, a2, a3;

	//printf("���� ������ �Է��ϸ� (x-y)*(y+z)*(z %% x)�� ��� : ");
	//scanf_s("%d %d %d", &a1, &a2, &a3);

	//res1 = (a1 - a2) * (a2 + a3) * (a3 % a1);
	//printf("(%d - %d)*(%d + %d)*(%d %% %d)=%d \n", a1, a2, a2, a3, a3, a1, res1);


	////������ ������ Ÿ�Ե�
	//char charValue = 'A';					//���� �ϳ��� �����ϱ� ���� ������ Ÿ��
	//short shortValue = 10;					//int ���� ���� ���� �����ϱ� ���� ������ Ÿ��
	//int intvalue = 100;						//���� ������ ���� �����ϱ� ���� ������ Ÿ��
	//long longValue = 200;					//int�� Ŀ���� ���� �� �Ⱦ��� ������ Ÿ��
	//long long longlongValue = 1000;			//int���� ū ���� �����ϱ� ���� ������ Ÿ��

	////�Ǽ��� ������ Ÿ�Ե�
	//float floatValue = 10.1;				//���� ������ �Ǽ��� �����ϱ� ���� ������ Ÿ��
	//double doubleValue = 100.1;				//float ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��
	//long double longdoubleValue = 200.1;	//double ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��

	//printf("char �� ũ���? %d byte. \n", sizeof(charValue));
	//printf("short �� ũ���? %d byte. \n", sizeof(shortValue));
	//printf("int �� ũ���? %d byte. \n", sizeof(intvalue));
	//printf("long �� ũ���? %d byte. \n", sizeof(longValue));
	//printf("long long �� ũ���? %d byte. \n", sizeof(longlongValue));

	//printf("float �� ũ���? %d byte. \n", sizeof(floatValue));
	//printf("double �� ũ���? %d byte. \n", sizeof(doubleValue));
	//printf("long double �� ũ���? %d byte. \n", sizeof(longdoubleValue));


//
//float cir(const float PI, int num);//A�� ���漱��
//
//int main()
//{
//
//	float PI = 3.141592f;
//	int num;
//
//	printf("�������� �Է� :");
//	scanf_s("%d", &num);
//	printf("�������� %d�� ���� ���̴� %f �Դϴ�.", num, cir(PI, num)); 
//	/*�Լ��� ������ �����ϰ� �̸��� �ᵵ ������
//	�Ʒ� A �� ������ ����ߵ�*/
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
//	float cir(const float PI, int num);//A�� ���漱��
//	
//	int main()
//	{
//	
//		float PI = 3.141592f;
//		int num;
//	
//		printf("�������� �Է� :");
//		scanf_s("%d", &num);
//		printf("�������� %d�� ���� ���̴� %f �Դϴ�.", num, cir(PI, num)); 
//		/*�Լ��� ������ �����ϰ� �̸��� �ᵵ ������
//		�Ʒ� A �� ������ ����ߵ�*/
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
//	//printf("char�� C.->%d \n", charValue);
//
//	char num;
//
//	scanf_s("%c", &num);
//	char alpha = num;
//	bool isit = abc(alpha);
//	printf("�̰��� Ư�������ΰ�? %d \n", isit);
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
//		printf("���� �빮�� �Դϴ�. \n");
//	}
//
//	else if (isSmallAlphabet)
//	{
//		printf("���� �ҹ��� �Դϴ�. \n");
//
//	}
//
//	else if(isNumber)
//	{
//		printf("�����Դϴ�. \n");
//	}
//
//	else
//	{
//		printf("�� �𸣰ڽ��ϴ�. \n");
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
//		printf("hello world! ���� Ƚ�� : %d \n", loopCount);
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
//	printf("���ڼ���: %d \n", loopend);
//	loopend += 1;
//	//OR ++loopend
//}
//return 0;
//
//}

int main()
{
	int num ;
	printf("�簢���� �������?3~10\n");
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
