/*����2����η��ӵ�2���ߴη�*/
//#include<stdio.h>
//int main()
//{
//	int a=1,i,s=1;
//	for (i = 0;i<7;i++ )
//	{
//		a = 2*a;
//		s = s + a;
//	}
//	printf(" a=%d,i=%d,s=%d\n",a,i,s);
//	
//	return 0;
//}

/*����2��14�η�*/
//#include<stdio.h>
//int main()
//{
//	int a=1, i;
//	for (i=0;i<14;i++)
//	{
//		a = a * 2;
//	}
//	printf(" a=%d,i=%d\n",a,i);
//	return 0;
//}

/*����2��N�η�*/
//#include<stdio.h>
//int main()
//{
//	int a = 1, i, N;
//	printf("������Nֵ��");
//	scanf_s("%d",&N);
//	for (i = 0; i < N; i++)
//	{
//		a = a * 2;
//	}
//	printf("\na=%d,i=%d\n",a,i);
//	printf("\n2��%d�η�=%d\n",N,a);
//	return 0;
//}
/*���ظ�����2��N�η�*/
//#include<stdio.h>
//int main()
//{
//	int a=1,i, N;
//loop:/*�����ظ��ĵط����ڶ���ı���֮ǰ����������*/
//	printf("\n������Nֵ��");
//	scanf_s("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		a = a * 2;
//	}
//	printf("\na=%d,i=%d\n", a, i);
//	printf("\n2��%d�η�=%d\n", N, a);
//	goto loop;
//	return 0;
//}

//��ϰwhileѭ��
/*��1����1�ӵ�10*/ 
//#include<stdio.h>
//int main()
//{
//	int a=0,s=0;
//	while (a <10)
//	{
//		a++;
//		s = s + a;
//	}
//	printf("a=%d,s=%d\n",a,s);
//	return 0;
//}

/*��2�����б���i = 0��1��2��3��4��Ҫ�����i��5��ֵ��ÿ�����ּ��3���ַ�λ��һ�������
��We are out of the loop.��*/
#include<stdio.h>
//int main()
//{
//	int i=0;
//	while (i < 5)
//	{
//		printf("%3d",i);//��ʾ��3λ�Ĺ̶���������������(ע�⣺����3λ����ǰ�油�ո�;����3λ����ʵ��λ�����)
//		i++;
//	}
//	printf("\nwe are out of the loop.\n");
//	return 0;
//}	
/* %3d��C�����и�ʽ������ַ����������˼��ָ�����3���ַ����ȵ�������
�����ڡ�% ������ĸ֮�������ֱ�ʾ��󳤿�
���磺 % 3d��ʾ���3λ������������3λ�Ҷ��롣*/
	/*void main()
	{
		int i = 0;
		while (i < 5)
		{
			printf("  %d", i);//������
			i++;
		}
		printf("\n");
		printf("we are out of the loop.\n");
	}*/

/*��3����sum = 1 + 2 + 3 + ���� + 100��*/
#include<stdio.h>
/*Whileѭ��*/
//int main()
//{
//	int i=0, sum=0;
//	while (i<100)
//	{
//		i++;
//		sum = sum + i;
//	}
//	printf("i=%d sum=%d\n",i,sum);
//	return 0;
//}
/*void main()
{
	int i = 1, sum = 0;     //�ۼ����ĳ�ֵΪ0 
	while (i <= 100)  //iΪѭ�����Ʊ���,��ֵ1����ֵ100 
	{
		sum = sum + i;
		i++;     //i����ֵΪ1 
	}
	printf("i=%d sum = %d\n",i,sum);
}*/

/*forѭ��*/
//void main()
//{
//	int i, sum = 0;
//	for (i=1;i<=100;i++)
//	{
//		sum = sum + i;
//	}
//	printf("i=%3d\nsum=%4d\n",i,sum);
//}

//�����������%��
/*�������1��100��������Ҫ��ÿ�����5��*/
//#include<stdio.h>
//int main()
//{/*ÿ�����5������ζ����5,10,15,20������5�ı��������ֺ�����Ҫ�������
// ����Щ���Ĺ�ͬ�ص����ܱ�5����������Ϊ0��������������Ϊ��i%5==0*/
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 5 == 0)
//			printf("%3d\n",i);
//		else
//			printf("%3d ",i);
//	}/*��Ȼ��ÿ�в�һ�������5����Ҳ������6����7������n����ֻ��Ҫ����������i%n==0����*/
//	return 0;
//}

//����ȡ��
/*��1���Ӽ�������һ��3λ������������в�֣��ֱ���������ʮ����λ��*/
//#include<stdio.h>
//int main()
//{/*������ֿ��Խ������������������������*/
//	int num, s, t, a;
//	printf("����������һ����λ������");
//	scanf_s("%d",&num);
//	s=num /100;        /*ȡ����λ*/
//	t = num % 100 / 10;/*ȡ��ʮλ*/
//	a = num % 10;	  /*ȡ����λ*/
//	printf("\n��λs=%d\nʮλt=%d\n��λa=%d\n",s,t,a);
//	return 0;
//}

/*��2��������:
дһ����������һ����λ���֣�Ҫ��������ĸ������ַ�����ÿ�������ּ�ո�������1990��Ӧ���"1 9 9 0"��*/
//# include<stdio.h>
//int main()
//{/*C������%��ʾȡģ�㷨��ʵ���Ͼ��Ǽ���������Ҳ����˵���ǲ���������ģ����Ľ����Ϊ�����������*/
//	int a, x[100], i = 0, j;
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	while (a > 0)
//	{
//		x[i] = a % 10;
//		a /= 10;
//		i++;    /* "2%10=2":����������ȳ���С����ôģ����Ľ���͵��ڱ���������Ϊ��ʱ��Ϊ0����������������������*/
//	}
//	/*˳�����*/
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%d ", x[j]);
//	}
//	/*�������*/
//	/*for (j=0;j<i;j++)
//	{
//		printf("%d ",x[j]);
//	}*/
//	printf("\n");
//	return 0;
//}

/*��3����֪�����������壬��n��������ڼ����Ӽ�������n��*/
/*ÿ��������7�죬���ܴ����ڼ���ʼ��7�����ת�ص����ڼ����ǵ��͵�תȦ���⡣
��%7�������0���������죬1-6��������һ������*/
//#include<stdio.h>
//void main()
//{
//	int n, result;
//	//printf("������������");
//	//scanf_s("%d",&n);
//	//result = n % 7;
//	//switch (result)
//	//{
//	//	case 0: printf("\n%d�����������\n",n); break;
//	//	case 1: printf("\n%d�����������\n",n); break;
//	//	case 2: printf("\n%d�����������\n",n); break;
//	//	case 3: printf("\n%d���������һ\n",n); break;
//	//	case 4: printf("\n%d��������ڶ�\n",n); break;
//	//	case 5: printf("\n%d�����������\n",n); break;
//	//	case 6: printf("\n%d�����������\n",n); break;
//	//}
//	/*2:*/
//	printf("Please input n:");
//	scanf_s("%d",&n);
//	result = (5 + n) % 7;
//	switch (result)
//	{
//		case 0:printf("\nThe day is Sunday! "); break;
//		case 1:printf("\nThe day is Monday! "); break;
//		case 2:printf("\nThe day is Tuesday! "); break;
//		case 3:printf("\nThe day is Wednesday! "); break;
//		case 4:printf("\nThe day is Thursday! "); break;
//		case 5:printf("\nThe day is Friday! "); break;
//		case 6:printf("\nThe day is Saturday! "); break;
//	}
//}


/*���n��"Hello world!"���ú�������ʵ��*/
//#include<stdio.h>
//void show(int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		printf("%4d Hello world!\n",i);
//	}
//}
//int main()
//{
//	int n;
//	printf("������nֵ��");
//	scanf_s("%d",&n);
//	show(n);
//	return 0;
//}

//#include<stdio.h>
//void show(int a);//����
//int main()//������
//{
//	int n;
//	printf("������nֵ��");
//	scanf_s("%d",&n);
//	show(n);//����
//	return 0;
//}
//void show(int a)//�û�����
//{
//	for (int i=0;i<a;i++)
//	{
//		printf("%4d Hello world!\n",i);
//	}
//}

/*forѭ��*/
//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i=0;i<8;i++)
//	{
//		printf("%2d\n",i);
//	}/*ѭ��8��*/
//}

/*whileѭ��*/
//#include<stdio.h>
//void main()
//{
//	int k = 5;
//	while (k)
//	{
//		printf("%d\n",k);
//		k--;/*�ȸ�ֵ��k��-1*/
//	}
//}


/*#include<stdio.h>*/ 
/*��ϰ���ú���*/
//unsigned char L[] = { 'A','B','C','D','E','F'};
//void Line(unsigned char P0)
//{
//	unsigned char j;
//	for (j = 0; j < 8; j++)
//	{
//		P0 = L[j];
//		if (j >= 6)
//		{
//			P0 = 'H';
//		}
//		printf("%2c\n", P0);
//	}
//}
//void main()
//{
//	unsigned char SER=0;
//	Line(SER);
//}

/*��goto����������1~100���ۼ�ֵ����ŵ�sum��*/
//void main()
//{
//	unsigned char i=0;
//	int sum=0;
//sumadd:
//	sum+=i;
//	i++;
//	if (i < 101)
//	{
//		goto sumadd;
//	}
//	printf("sum=%d\n",sum);
//}

/*����"<<="*/
//void main()
//{
//	int y=0xcc;
//	y<<=1;//y=y<<1
//	printf("y=%d\n",y);
//}

/*���ԡ�%=��*/
//void main()
//{
//	int count;
//	printf("������һ��������100����:");
//	scanf_s("%d",&count);
//	count %= 100; //count=count%100;
//	printf("count=%d\n",count);
//}

/*����"%="��"/="*/
//void main()
//{
//	unsigned int a,b,value=25;
//	a=value/10;  
//	printf(" a=%d\n",a);
//	b=value%=10;  
//	printf(" b=%d\n",b);
//}

/*��ϰ��/����"%"*/
//void main()
//{
//	int A = 512,a,b,c;
//	a = A / 100;
//	b = A / 10 % 10;
//	c = A / 1%10;
//	printf("��λa=%d\nʮλb=%d\n��λc=%d\n", a, b, c);
//}

/*�㶨ʱ����ֵ(X=65536-N)*/
//void main()
//{
//	unsigned int value, a, b;
//	printf("������value:");
//	scanf_s("%d",&value);
//	a = value / 256;
//	b = value % 256;
//	printf("a=%d\nb=%d\n",a,b);
//}

/*�����ַ���*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char *str1 = "Borland International", *str2 = "nation",*ptr;
//	ptr = strstr(str1, str2);
//	printf("The substring is: %s\n",ptr);	
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdefgh";
//	const char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("%s\n",ret);
//	return 0;
//}

/*���ַ������Ⱥ���strlen*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int k;
//	static char st[] = "C Language";
//	k = strlen(st);
//	printf("The lenth of the string is %d\n",k);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char *a = "c1";
//	char b[] = "c2";
//	printf("a=%s, b=%s\n",a,b);
//	a = "c6";
//	printf("a=%s\n",a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float c = 2.2245;
//	double a = 1.2345;
//	printf("%lf\n", a);//%lf��ʾ˫���ȸ����ͣ�Ҳ����double�͵ĸ�ʽ��Ĭ�ϱ���6λС��
//	printf("%.2lf\n",a);//����ֵ,����2λС��
//	printf("%f\n",c);//%f��ʾ�����ȸ����ͣ�Ҳ����float�͵ĸ�ʽ
//	printf("%.1f\n", c);
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int a;
//	a = 66;
//	printf("a=%d\n", a);
//
//	char b[5];
//	b[0] = 'A';
//	b[1] = 'B';
//	b[2] = 'C';
//	printf("b[0]=%c\n", b[0]);
//	printf("b[1]=%c\n", b[1]);
//	printf("b[2]=%c\n", b[2]);
//
//	struct { char x; int y; float z; } c;
//	c.x = 'Q';
//	c.y = 66;
//	c.z = 1.23;
//	printf("c.x=%c\n",c.x);
//	printf("c.y=%d\n", c.y);
//	printf("c.z=%f\n", c.z);
//}	
	
//#include<stdio.h>
//void main()
//{
//	int i, j, k,x;
//	printf("����������(1��9֮��)��");
//	scanf_s("%d",&x);
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= x - i; j++)
//			printf(" ");
//		for (k = 1; k <= i; k++)
//			printf("%d ",i);
//		printf("\n");
//	}

	//for (i = 1; i<=8; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//		printf(" ");
	//	for (k = 1; k <=9-i; k++)
	//		printf("%d ",9-i);
	//	printf("\n");
	//}
//}

//#include<stdio.h>
//int main()
//{
//	//int a;
//	//int* p;
//	//printf("%d\n",sizeof(a));
//	//printf("%d\n", sizeof(p));
//	
//	//char a=0x66;
//	//char *p;
//	//p = &a;
//	//printf("%x\n",a);
//	//printf("%p\n", p);
//	//printf("%x\n",*p);
//	//p++;
//	//printf("%p\n", p);
//	//p--;
//	//printf("%p\n", p);
//
//
//	char a[] = { 0x33,0x34,0x35 };
//	printf("a[0]=%x\n", a[0]);
//	printf("a[1]=%x\n", a[1]);
//	printf("a[2]=%x\n", a[2]);
//
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{	
//	while (1)
//	{
//		int a = 0;  // �����ĸ���
//		int num;  // ���������
//		printf("������һ��������");
//		scanf_s("%d", &num);
//		for (int i = 2; i < num; i++) 
//			if (num % i == 0) 
//				a++;  // ����������1,a��Ϊ����
//		if (a == 0) 
//			printf("%d��������\n", num);
//		else 
//			printf("%d����������\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() 
//{
//	int m;  // ��������� 
//	int i;  // ѭ������
//	int k;  // m ��ƽ���� 
//	printf("������һ��������");
//	scanf_s("%d", &m);
//	// ��ƽ������ע��sqrt()�Ĳ���Ϊ double ���ͣ�����Ҫǿ��ת��m������ 
//	k = (int)sqrt((double)m);
//	for (i = 2; i <= k; i++)
//		if (m % i == 0)
//			break;
//	// ����������ѭ������ômΪ����
//	// ע�����һ��ѭ������ִ��i++����ʱ i=k+1��������i>k 
//	if (i > k)
//		printf("%d��������\n", m);
//	else
//		printf("%d����������\n", m);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
// void main()
//{
//	printf("%lf\n",sqrt(6));
//}

//#include <stdio.h>
//#include <windows.h>
//int main(void)
//{
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	printf("��������ר��\n");
//	printf("Ը��ƽ��ϲ�֣��������Ը�����н�̹;����Զ���㣡����\n");
//	return 0;
//}

//#include<stdio.h>
//
//struct Student
//{
//	int num;//ѧ��
//	int age;//����
//	char* name;//����
//};
//
//void main(void)
//{
//	struct Student stu = { 1951,21,"xiaoming" };
//	printf("sizeof(int*)=%d�ֽ�\n", sizeof(int *));
//	printf("sizeof(char*)=%d�ֽ�\n", sizeof(char *));
//	printf("sizeof(long*)=%d�ֽ�\n", sizeof(long *));
//	printf("sizeof(short*)=%d�ֽ�\n", sizeof(short *));
//
//	printf("sizeof(stu)=%d�ֽ�\n", sizeof(stu));
//	printf("sizeof(struct Student)=%d�ֽ�\n", sizeof(struct Student));
//	printf("sizeof(struct Student*)=%d�ֽ�\n", sizeof(struct Student*));
//}
/*32λ���У�ָ�붼ռ4�ֽڣ�������ʲô���͵�ָ��*/

//#include <stdio.h>
//#include <stdlib.h>	//����EXIT_SUCCESSGN EXIT����FAILURE
//
//int main()
//{
//	int a, b;
//	printf("�����������ĺ�\n");
//	printf("������a = ");
//	scanf_s("%d", &a);
//	printf("������b = ");
//	scanf_s("%d", &b);
//	if (a + b > 10)
//	{
//		printf("�ɹ�!\n");
//		return EXIT_SUCCESS;//return 0
//	}
//	else
//	{
//		printf("ʧ��!\n");
//		return EXIT_FAILURE;//return 1
//	}
//	return 0;
//}

//��̬���� 
//#include<stdio.h>
//#include<stdlib.h>	//Ϊmalloc������free�����ṩԭ��
//int main(void) {
//	double* ptd;
//	int max;
//	int number;
//	int i = 0;
//	puts("What is the maximum number of type double entries?");
//	scanf_s("%d", &max);
//	ptd = (double*)malloc(max*sizeof(double));
//	if (ptd == NULL) {
//		puts("Memory allocation failed. Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//	//ptd ����ָ����max��Ԫ�ص�����
//	puts("Enter the values(q to quit):");
//	while (i < max && scanf_s("%lf",&ptd[i]) == 1)
//		i++;
//	printf("Here are your %d entries:\n", number = i);//���ʱ��i=max  �����%d��number��number=i=max 
//	for (i = 0; i <number; i++) 
//	{
//		printf("%7.2f",ptd[i]);
//		if (i % 7 == 6)			//7��һ���С�i��0��ʼ�� i%7=6ʱ���Ѿ������7�� 
//			printf("\n");
//	}
//	if (i % 7 != 0)			//������Ķ�Ӧ��������þͲ����ٻ��У������þ��ٻ�һ�Ρ� 
//		putchar('\n');
//	puts("Done.");
//	free(ptd);
//	return 0;
//}

//#include <stdio.h>
//
//void main()
//
//{
//	printf("hahaha������\n");
//
//	system("pause");
//
//	printf("hahaha������\n");
//
//	system("pause");
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	printf("About to spawn and run a DOS command\n");
//	system("dir");
//	system("color 0C");
//	system("pause");
//	system("cls");
//	return 0;
//}

//#include <stdio.h>
//void function()
//{
//	printf("111111\n");
//	return; ////��ʾ�����ú���,������������
//	printf("222222\n"); 
//}//�����return��ʵ���и��˳��ó�������ã�
//main()
//{
//	function();
//}

//#include<stdio.h>
//int main()
//{
//	char c[10] = { "China" };
//	char s[20] = "I Love You!";
//	printf("%c\n",c[0]);
//	printf("%s\n",c);
//	printf("%s\n",s);
//}

//#include<stdio.h>
//#include<string.h>

//int main()
//{
//	char str1[10] = "I Love";
//	char str2[] = "C";
//	printf("%s\n", str1);
//	strcpy(str1,str2);
//	puts(str1);
//}

//int main()
//{
//	char str1[30] = "I LOVE";
//	char str2[10] = {" C"};
//	strcat(str1,str2);
//	puts(str1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//struct student
//{
//	int num;
//	char name[12];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct student stu;
//	stu.num = 1001;
//	strcpy(stu.name, "Ma Yun");
//	stu.sex = 'F';
//	stu.score = 66.6;
//	struct student* p = &stu;//������ָ��ýṹ�������ָ��
//	printf("%d %s %c %f\n", stu.num, stu.name, stu.sex, stu.score);
//	printf("%d %s %c %f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
//	printf("%d %s %c %f\n", p->num, p->name, p->sex, p->score);
//	return 0;
//}


//#include<stdio.h>
//typedef struct student
//{
//	char *name;
//	int age;
//	int num;
//	char *addr;
//}stu;
//
//int main()
//{
//	stu a;
//	a.name= "zs";
//	a.age = 18;
//	a.num = 1001;
//	a.addr = "sh";
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* s;
//	s = "hello";
//	printf("%p\n", s);
//	printf("%s\n",s);//ͨ���ַ����׵�ַ����ַ���
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	int a = 1;//�ֲ�����
////  static int a = 1;//��̬��������static���εľֲ����������ֲ��������������ڱ�ú���������һ����
//	a++;
//	printf("%d ",a);
//}//�����ֲ�����������������Ҳ���������٣����ǳ����������Ȼ�������ڱ䳤��������������û�з����κθı䣬����ֻ�����Ǹ��ֲ��ķ�Χ��ʹ�á�
//
////�ֲ��������������ھ��������ڵ��Ǹ��ֲ���Χ������˵���ǽ������Χ�����ʹ������������Χ���������١�
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//ÿ�ε��ú���test���ֲ�����a�ʹ��������ý����Ͱ�a���٣�����ÿ�δ�ӡ�Ż���2��
//		i++;
//	}
//	return 0;//�ֲ�������static����ʱ�������ڽ���ú���������һ��������������û�б仯��
//}//��static����ȫ�ֱ����ͺ���ʱ����ֻ���ڸ�Դ�ļ��ڲ�ʹ�ã������ⲿ����������

//#include <stdio.h>
//int main()
//{
//	static int a;
//	printf("a=%d\n",a);//�ֲ�������ֵΪ0
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	printf("++a=%d\n", ++a);
//	printf("a=%d\n", a);
//	//printf("a++=%d\n",a++);
//	//printf("a=%d\n",a);
//}

//#include<stdio.h>
//int main()
//{
//	int nums[] = {1,2,3,4,5,6};
//	printf("The first num is:%d\n", *nums);
//	printf("The second num is:%d\n",*(nums+1));
//	printf("The first num add ten:%d\n",*nums+10);
//}

//#include <stdio.h>
//int main()
//{
//	char arr[5] = "abc";
//	char* p = arr;
//	printf("%s\n",p);//��ӡabc
//	return 0;
//}//ָ���ַ�������Ԫ�ص��ַ�ָ�� char*p=arr

//#include <stdio.h>
//int main()
//{
//	const char* p = "abc";//�ַ���abcΪ�����ַ���
//	printf("%s\n",p);
//	return 0;//��Ϊ��abc���ǳ����ַ��������ܱ��޸ģ�����ָ��p��Ҫʹ��const���Ρ�
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {1,3,5,7,9};
//	int* p[3] = {arr1,arr2,arr3};//ָ�����飬�����������飬�Ǵ��ָ������顣
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			/*printf("%d ",*(p[i]+j));*/
//			//printf("%d ",*(*(p+i)+j));//p[i]����д��*��p+i��
//			printf("%d ",p[i][j]);//p[i]==arri
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int temp[5] = {1,2,3,4,5};
//	int(*p)[5] =&temp;//������һ��ָ����5��int���������ָ��p������temp������׵�ַ����ָ��p
//	for (int i = 0; i < 5; i++)
//	{
//		/*printf("%d\n",*(*p+i));*/
//		printf("%d\n",(*p)[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("short=%d\n\n",sizeof(short));
//	printf("int=%d\n\n",sizeof(int));
//	printf("long=%d\n\n",sizeof(long));
//	printf("float=%d\n\n",sizeof(float));
//	printf("double=%d\n\n",sizeof(double));
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,3,5,7,9};//����һ������
//	int* p;//����һ��ָ��
//	p = arr;//��������׵�ַ��ֵ��ָ�����p
//	printf("p=%d\n\n",*p);
//	printf("a[0]=%d a[1]=%d\n\n",*p,*(p+1));
//	p = &arr[1];//�������еĵڶ���Ԫ�ص�ַ��ֵ��ָ�����p
//	printf("p=%d\n",*p);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int arr[] = {2,4,6,8,11};
//	int *p,i;
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("a[%d]=%d\n",i,*p++);
//	}
//	printf("\n");//�ھ�����һ��forѭ����p�Ѿ�ָ�������ĩβ�������ִ�еڶ���forѭ��ʱ��p����ʼֵ�Ѿ�����&a[0]��
//	p = arr;//������ִ�еڶ���forѭ��ǰҪ���ϸ�ֵ���--p=arr��
//	for (i = 0; i < 5; i++,p++)
//	{
//		printf("%2d\n",*p);
//	}
//}

/*��������Ԫ��*/
#include <stdio.h>
//�±귨
//void main()
//{
//	int a[10], i;
//	printf("������10��������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-2d",a[i]);//�����
//	}
//	printf("\n");
//}

//ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ
//void main()
//{
//	int a[10],i;
//	printf("������10��������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",a+i);//a+i���Ի�Ϊ&a[i]
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-2d", *(a + i));
//	}
//	printf("\n");
//}

//��ָ�����ָ������Ԫ��
//void main()
//{
//	int a[10], * p;
//	printf("������10��������\n");
//	for (p = a; p < (a + 10); p++)
//	{
//		scanf_s("%d",p);
//	}
//	p = a;//��Ҫ��p���¸�ֵ
//	for (p = a; p < (a + 10); p++)
//	{
//		printf("%-2d",*p);
//	}
//	printf("\n");
//}

//void main()
//{
//	int a[10], i, * p = &a;//�˴���*p=&a��ͬ�� int *p; p=a;
//	printf("������10��������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",p++);
//	}
//	p = a;
//	for (i = 0; i < 10; i++,p++)
//	{
//		printf("%-2d",*p);
//		/*p++�ڴ˴����;*/
//	}
//	printf("\n");
//}

/*�������Sn=a+aa+aaa+��+aa��a(n��a)��ֵ�����У�a��һ�����֣�n��ʾa��λ��
���磺a=3��n=4ʱ��Sn=3+33+333+3333��a��n�ɼ������롣*/
//#include <stdio.h>
//void main()
//{
//	int a, n,temp,Sn=0;
//	printf("������һ������a:\n");
//	scanf_s("%d", &a);
//	printf("������a��λ��n:\n");
//	scanf_s("%d", &n);
//	printf("\nSn=");
//	temp = 0;
//	for (int i = 0; i <n; i++)
//	{
//		temp = a + 10 * temp;
//		printf("%d", temp);
//		for (int j = i; j < i + 1; j++)
//		{		
//			if (j == n-1)
//				break;
//			printf("+");
//		}	
//		Sn = Sn + temp;
//	}
//	printf("=%d\n",Sn);
//}

//#include <stdio.h>
//
//void A(int *a, int *b)
//{
//	int temp = 0;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	A(&a, &b);
//
//	printf("a=%d, b=%d\n", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//
//void change(int* a,int* b);
//int c=6,d=4;
//void main()
//{
//	change(&c,&d);
//	printf("c=%d d=%d\n",c,d);
//}
//
//void change(int* a,int *b)
//{
//	*b = *a;
//}

//ͷ�ļ���#include<stdio.h>
//sprintf()�������ڽ���ʽ��������д���ַ���
#include <stdio.h>
//void main()
//{
//	char a[100] = {0};
//	sprintf(a,"����%s�ַ���!","IO1314");
//	printf("%s\n",a);
//}

//void main()
//{
//	int x = 1314520;
//	char a[100];
//	sprintf(a,"%d",x);
//	printf("%s\n", a);//����ת�����ַ���
//}

//#include <stdio.h>
//int main()
//{
//	char str[10];
//	printf("������������֣�\n");
//	scanf_s("%s",str);
//	printf("�������Ϊ��%s\n",str);
//	return 0;
//}

//#include  <stdio.h>
//void  fun(int* px, int* py)
//{
//	/**********found**********/
//	int  k, a = 0, b = 0;
//
//	scanf_s("%d", &k);
//	/**********found**********/
//	while (k)
//	{
//		if (k > 0) a++;
//		if (k < 0) b++;
//		/**********found**********/
//		scanf_s("%d", &k);
//	}
//	*px = a;  *py = b;
//}
//main()
//{
//	int  x, y;
//	fun(&x, &y);
//	printf("x=%d  y=%d\n", x, y);
//	//getchar();
//}

//#include <stdio.h>
//
////sizeof����ṹ���С
//struct aa
//{
//	int a;
//	char c;
//	int b;
//};
//
//struct stu3
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct stu4
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////ԭ�����ӣ�https ://blog.csdn.net/farsight2009/article/details/4251455
//
//void main()
//{
//	printf("aa��СΪ��%d\n", sizeof(struct aa));
//	printf("stu3��СΪ��%d\n", sizeof(struct stu3));
//	printf("stu4��СΪ��%d\n", sizeof(struct stu4));
//}

//#include <stdio.h>

//int main()
//{
//	FILE* filePtr;
//	char ch;
//	/*filePtr = fopen("D:\\Data.txt", "r");*/
//	filePtr = fopen("example.txt", "r");
//	if (filePtr == NULL)
//	{
//		printf("�޷����ļ�\n");
//		return 1;
//	}
//	while ((ch = fgetc(filePtr)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	printf("\n");
//	fclose(filePtr);
//	filePtr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* file = fopen("example.txt", "r");
//	if (file == NULL)
//	{
//		printf("Failed to open file");
//		return 1;
//	}
//	int ch;
//	while ((ch = fgetc(file)) != EOF)
//	{
//		putchar(ch);
//	}
//	printf("\n");
//	fclose(file);
//	return 0;
//}

//int main()
//{
//	FILE* file = fopen("example.txt","w");
//	if (file == NULL)
//	{
//		printf("�޷����ļ�\n");
//		return 1;
//	}
//	int result = fputc('H', file);
//	if (result == EOF)
//	{
//		printf("д��ʧ��\n");
//		return 1;
//	}
//	else
//	{
//		printf("д��ɹ�\n");
//	}
//	fclose(file);
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	FILE* file = fopen("example.txt", "r");  // ��һ���ļ�����ȡ
//	char str[100];
//	if (fgets(str, sizeof(str), file) != NULL) 
//	{
//		printf("��ȡ�����ַ�����%s", str);
//	}
//	fclose(file);  // �ر��ļ�
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	FILE* file = fopen("example.txt", "w");
//	if (file == NULL) 
//	{
//		printf("�޷����ļ�");
//		return 1;
//	}
//	const char* str = "Hello World!";
//	int result = fputs(str, file);
//	if (result == EOF) 
//	{
//		printf("д��ʧ��");
//		return 1;
//	}
//	else
//	{
//		printf("д��ɹ�\n");
//	}
//	fclose(file);
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	FILE* fp;
//	int num1, num2;
//	// ���ļ�
//	fp = fopen("example.txt", "r");
//	if (fp == NULL) 
//	{
//		printf("�޷����ļ�\n");
//		return 1;
//	}
//	// ���ļ��ж�ȡ��������
//	int items_read = fscanf(fp, "%d %d", &num1, &num2);
//	if (items_read != 2) {
//		printf("��ȡ����ʧ��\n");
//		return 1;
//	}
//	// �����ȡ���
//	printf("num1 = %d ", num1);
//	printf("num2 = %d\n", num2);
//	// �ر��ļ�
//	fclose(fp);
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	FILE* file = fopen("output.txt", "w");
//	if (file == NULL) {
//		printf("Failed to open the file.");
//		return 1;
//	}
//
//	fprintf(file, "Hello Yue!");
//
//	fclose(file);
//	file = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* atc = "Hello";
//	int w = 012;//��ʾ�˽��Ƶ�10
//	printf("%s X = %d\n", atc, w+1);
//	printf("%d %o %x\n", w, w, w);//����ʾ��ֵǰ׺
//	printf("%#d %#o %#x\n", w, w, w);//��ʾ��ֵǰ׺
//	return 0;
//}

//#include <stdio.h>
//int main()
//{/*ͨ��������������ַ����������ַ����е�������ͬ��ÿ�ζ���Ҳ�����·���洢�ռ�*/
//	char str1[] = "lzf";
//	char str2[] = "lzf";
//	printf("str1 = %p\n",str1);
//	printf("str2 = %p\n",str2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{/*ͨ��ָ����������ַ�����ֻҪ�ַ����е�������ͬ,��ֻ�е�һ�ζ���ŷ���洢�ռ�*/
//	char* p1 = "lzf";
//	char* p2 = "lzf";
//	printf("p1 = %p\n",p1);
//	printf("p2 = %p\n",p2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = {'l','z','f','\0'};
//	char str2[] = "lzf";//ͨ��������������ַ���������ַ����洢��ջ��
//	char* str3 = "lzf";//ͨ��ָ����������ַ���������ַ����洢�ڳ�������
//
//	printf("str1 = %s\n",str1);
//	printf("str2 = %s\n",str2);
//	printf("str3 = %s\n",str3);
//	//�洢��ջ�е����ݿ����޸ģ��洢�ڳ����е����ݲ����޸�
//	str2[2] = 'X';
//	printf("str2 = %s\n",str2);
//	return 0;
//}

//#include <stdio.h>
//char* test();
//int main()
//{
//	char* res = test();
//	printf("res = %s\n",res);
//	return 0;
//}
////һ��������ͨ�����鱣����һ���ַ���,��ô����ַ���������Ϊ�����ķ���ֵ,��Ϊ����ȡ����
//char* test()
//{
//	char str[] = { 'l','z','f','\0' };
//	printf("str = %s\n",str);
//	return str;
//}

//#include <stdio.h>
//char* test();
//int main()
//{
//	char* res = test();
//	printf("res = %s\n",res);
//	return 0;
//}
////һ��������ͨ��ָ�뱣����һ���ַ���,��ô����ַ���������Ϊ�����ķ���ֵ,��Ϊ�����Ի�ȡ
//char* test()
//{
//	char* str = "lzf";//ͨ��ָ�����������ַ����洢�ڳ�������
//	printf("str = %s\n",str);
//	return str;
//}

//#include <stdio.h>
//void change(int* p);
//int main()
//{
//	int ages[] = { 1,3,5 };
//	printf("ages[1] = %i\n",ages[1]);// �з���10�������� ��%i ��%d û������%i ����ʽд�����������͸�ʽ��
//	change(ages);
//	printf("ages[1] = %i\n",ages[1]);//%i��ʾ�з���ʮ��������
//	return 0;
//}
//
//void change(int* p)
//{
//	p[1] = 666;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d %d %p %p\n",a, *p, &a, p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* s1 = "abcde";
//	char s2[] = { "abcde" };
//	printf("%s %c %s %c\n",s1, *s1, s1+1, s1[1]);
//	printf("%s %c %s %c\n",s2, *s2, s2+1, s2[1]);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char* a = "abcd";
//	printf("�����һ���ַ���%c\n", *a);
//	printf("����ڶ����ַ���%c\n", *(a+1));
//	printf("����ַ�����%s\n", a);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	char a, b, c, d;
//	/*scanf_s("%c%c",&a, sizeof(a), &b, sizeof(b));*/
//	scanf_s("%c%c",&a,1,&b,1);
//	c = getchar();
//	d = getchar();
//	printf("a = %c b = %c c = %c d = %c\n", a, b, c, d);
//}

//#include <stdio.h>
//int main()
//{
//	char ch = getchar();//�����ַ�
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char ch;
//	while((ch = getchar()) != EOF)
//	{
//		if (ch == 'Y')
//			break;
//		putchar(ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf_s("%c",&a,1);
//	printf("%c��ASCII��ֵΪ%d\n",a, a);
//	return 0;
//}
//����֪�����ַ�������г�ʼ��ʱ���������ַ���Ҳ������ASCIIֵ��ASCIIֵ�ж����ƣ�ʮ���ƣ�ʮ�����Ƶȶ�����ʽ����
//��Ϊͨ��ASCII���ַ���ASCIIֵ�����໥ת������%c����ʽ����ַ�����%d����ʽ���ASCIIֵ��

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[] = { 'a', 'b', 'c', 69, 100, '0', 0, '\0' };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("�ַ� %c,", arr[i]);
//		printf("ASCII %d", arr[i]);
//		printf("\n");
//	}
//	return 0;
//}
//��Ϊ�����0�� ASCIIֵ0������ת���ַ�'\0'��ת���ַ���\0����ASCII�����ַ����ַ������ǿ��ַ��������Ǵ�ӡ�ַ������ַ���0����ASCII��ֵ��48��
//���ԣ�0�͡�\0���� % c����ʽ���ʱ��ʲô������ӡ���� % d����ʽ���ʱ����0��
//��0���� % c����ʽ���ʱ��0���� % d����ʽ���ʱ����48��


//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr3[] = { 'a', 'b', '\0', 'c' };
//	printf("%s\n", arr3);
//	char arr4[] = {'a', 'b', 'c'};
//	char arr5[3] = "abc";
//	printf("%s\n", arr4);
//	printf("%s\n", arr5);
//	return 0;
//}

//����arr1��char arr1[ ] = "abc"; ��Ϊ��\0�����ַ����Ľ�����־���κ��ַ���֮�󶼻��Զ�����'\0'��
//������Ĵ�С�� (�ַ�����+1)�����Կ�����%s����ʽ�������

//����arr2: char arr2[] = { 'a','b','c','\0' }; Ҳ��'\0'�����Կ����� % s����ʽ���������

//����arr3 : char arr3[] = { 'a','b','\0','c' }; ��'\0', ���Կ�����% s����ʽ�����������Ϊ'\0'���м䣬����\0�����ַ����Ľ�����־��
// ���Ե��� % s����ʽ���д�ӡʱ��ֻ�����'\0'ǰ����ַ��������Ὣ�ַ������е�Ԫ��ȫ����ӡ��

//����arr4 : char arr4[] = { 'a','b','c' }; û��'\0', ��% s����ʽ�������������������⣬���С�

//����arr5 : char arr5[3] = "abc"; ��Ϊ����Ĵ�С��3��������Ԫ����4������������'\0'������ˣ�
//��������arr5��Ҳû��'\0'���� % s����ʽ�������������������⣬���С�

//��\0�����ַ����Ľ�����־���κ��ַ���֮�󶼻��Զ�����'\0'��

//Ϊ�˱�֤�ñ������Զ���ӿ��ַ���\0��������Ĵ�С�����(�ַ����� + 1)

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcde";//char ����������һ��1 ��Ԫ��1 ���ֽ�
//	int i = 0;
//	i = sizeof(arr) / sizeof(*arr);
//	/*i = sizeof(arr) / sizeof(arr[0]);*/
//	printf("%d %d\n", sizeof(arr), sizeof(*arr));
//	printf("%d\n", i);
//	return 0;
//}
//��ע��'\0'��sizeof()���ǻᱻ����ģ�����������char[]�ַ����ĳ���һ�������strlen(),��������sizeof()��
//{sizeof()������Ǳ����Ĵ�С����strlen��������ַ����ĳ��ȣ�����strlen()����'\0'��Ϊ�����ַ����ȵĽ�β}��

//#include <stdio.h>
//int main()
//{
//	char str1[10] = "China";
//	printf("%d\n", strlen(str1));//������ֵΪ�ַ����е�ʵ�ʳ���,������\0
//
//	printf("%d\n", strlen("China"));//�����ַ������ȵĺ���
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) 
//{
//	char* a = "bcd";
//	printf("����ַ���%c \n", *a);  /*����ַ���ʹ��"%c"*/
//	printf("����ַ���%c \n", *(a + 1));  /*����ַ���ʹ��"%c"*/
//	printf("����ַ�����%s \n", a); /*����ַ�����ʹ��"%s"������a֮ǰ�������Ǻ�"*"  */
//	system("pause");  /*Ϊ���ܿ���������*/
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[100] = {0};
//
//	printf("Enter a value :");
//	gets(str);
//
//	printf("\nYou entered: ");
//	puts(str);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int fun(int n)
//{
//	int* p;
//	p = (int*)malloc(sizeof(int));
//	if (p)
//	{
//		*p = n;
//	}
//	return *p;
//}
//void main()
//{
//	int a;
//	a = fun(10);
//	printf("%d\n",a+fun(10));
//}

//#include <stdio.h>
//void main()
//{
//	int x = 1, y = 0, a = 0, b = 0;
//	switch (x)
//	{
//		case 1:switch (y) { case 0:a++; break; case 1:b++; break; }
//		case 2:a++; b++; break;
//		case 3:a++; b++;
//	}
//	printf("a =%d,b=%d\n",a,b);
//}

//#include <stdio.h>
//void main()
//{
//	char str[100];
//	//scanf("%s",s)��ʾ����һ���ַ���,�����ո��������롣
//	scanf_s("%s",str,10);//���Ե��ַ����ڴ��пո�ʱ,����ʹ�ô���䡣
//	printf("%s\n",str);
//}

//#include <stdio.h>
//void main()
//{
//	int i, n;
//	for (i = 0; i < 8; i++)
//	{
//		n = rand() % 5;
//		switch (n)
//		{
//			case 1:
//			case 3:printf("%d\n", n); break;
//			case 2:
//			case 4:printf("%d\n", n); continue;
//			case 0:exit(0);
//		}
//		printf("%d\n",n);
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int a=9,b=10;
//	printf("a=%d\n",a);
//	exit(0);
//	printf("b=%d\n",b);
//}

//#include <stdio.h>
//void main()
//{
//	int n;
//	srand((int)time(0));
//	n = rand() % 100;
//	printf("n=%d\n",n);
//}

//#include <stdio.h>
//void main()
//{
//	char s[] = "012xy\08s34f4w2";
//	int i, n = 0;
//	for (i = 0; s[i] != 0; i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9')
//			n++;
//	}
//	printf("%d\n",n);
//}

//#include <stdio.h>
//fun(int x, int y)
//{
//	static int m = 0, i = 2;
////������̬�ֲ�����;�������ý�������ռ�õĴ洢��Ԫ���ͷ�
////���´θú�������ʱ���ñ���������һ�κ������ý���ʱ��ֵ��
//	i += m + 1;//i=i+m+1,i=3 i=9
//	m = i + x + y;//m=5 m=11
//	return m;
//}
//void main()
//{
//	int j = 1, m = 1, k;
//	k = fun(j, m); printf("%d, ",k);//5
//	k = fun(j, m); printf("%d\n",k);//11
//}

//#include <stdio.h>
//typedef struct { int b, p; }A;
//void f(A c)
//{
//	int j;
//	c.b += 1; c.p += 2;
//}
//void main()
//{
//	int i;
//	A a = { 1,2 };
//	f(a);
//	printf("%d,%d\n",a.b,a.p);
//}

//#include <stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//void func(struct date p)
//{
//	p.year = 2000;
//	p.month = 5;
//	p.day = 22;
//}
//int main()
//{
//	struct date d;
//	d.year = 1999;
//	d.month = 4;
//	d.day = 23;
//	printf("Before function call:%d/%02d/%02d\n",d.year,d.month,d.day);
//	func(d);
//	printf("After function call:%d/%02d/%02d\n", d.year, d.month, d.day);
//	return 0;
//}

//#include <stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//void func(struct date* p)
//{
//	p->year = 2000;
//	p->month = 5;
//	p->day = 22;
//}
//int main()
//{
//	struct date d;
//	d.year = 1999;
//	d.month = 4;
//	d.day = 23;
//	printf("Before function call:%d/%02d/%02d\n",d.year,d.month,d.day);
//	func(&d);
//	printf("After function call:%d/%02d/%02d\n", d.year, d.month, d.day);
//	return 0;
//}

//#include <stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct date func(struct date p)
//{
//	p.year = 2000;
//	p.month = 5;
//	p.day = 22;
//	return p;
//}
//int main()
//{
//	struct date d;
//	d.year = 1999;
//	d.month = 4;
//	d.day = 23;
//	printf("Before function call:%d/%02d/%02d\n", d.year, d.month, d.day);
//	d=func(d);
//	printf("After function call:%d/%02d/%02d\n", d.year, d.month, d.day);
//	return 0;
//}

//#include <stdio.h>
//#define N 4
//void fun(int a[][N], int b[])
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		b[i] = a[i][i] - a[i][N - 1 - i];
//	}
//}
//void main()
//{
//	int x[N][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} },y[N],i;
//	fun(x,y);
//	for (i = 0; i < N; i++)
//	{
//		printf("%d, ",y[i]);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//void fun(int a[], int n)
//{
//	int i, t;
//	for (i = 0; i < n / 2; i++)
//	{
//		t = a[i];//t=a[0];t=a[1];
//		a[i] = a[n - 1 - i];//a[0]=a[4];a[1]=a[3];
//		a[n - 1 - i] = t;//a[4]=t;a[3]=t;
//	}
//}//����fun()�Ĺ����ǽ�����K��ǰ5��Ԫ�ص���
// //���ִ�к���fun()������K�е�Ԫ��Ϊ5,4,3,2,1,6,7,8,9,10��
//void main()
//{
//	int k[10] = {1,2,3,4,5,6,7,8,9,10},i;
//	fun(k,5);
//	for (i = 2; i < 8; i++)
//	{
//		printf("%d",k[i]);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//#define N 80
//int fun(char* s)
//{
//	int i, j = 0;
//	for (i = 0; s[i] != '\0';i++)
//		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))//���һ����ĸ����һ���ַ�Ϊ�ո���߽�����ǣ����ʾһ�����ʽ���
//			j++;
//	return j;//���ص��ʸ���
//}
//int main()
//{
//	char line[N]; int num = 0;
//	printf("Enter a string:\n");
//	gets(line);
//	num = fun(line);
//	printf("The number of word is:%d\n\n", num);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int y = 9;
//	for (; y > 0; y--)
//		if (y % 3 == 0)
//			printf("%d",--y);
//}

//#include <stdio.h>
//void swap(char* x, char* y)//����һ���ַ�
//{
//	char t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//void main()
//{
//	char s1[] = "abc", s2[] = "123";
//	swap(s1,s2);//s1ָ�����������׵�ַ,��"abc"�ĵ�һ���ַ��ĵ�ַ��
//	printf("%s, %s\n",s1,s2);//s2ָ�����"123"�ĵ�һ���ַ��ĵ�ַ��
//}

//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	x = y = 1;
//	z = x++, y++, ++y;//��Ϊ��ֵ����������ȼ����ڶ�������������ȼ�,���Կ��Խ���ʽ
// ��ʾ��(z=x++),(y++),(++y)��Ȼ����������ȼ�����ʽz=x++,��Ϊx++��ʹ�ú�����,
// ����z��ֵΪ1,x��ֵΪ2���ټ��㶺�ű��ʽ�ڶ������ʽy++,��ʱy��ֵΪ2,������
// ���������ʽ++y,y��ֵΪ3��
//	printf("%d,%d,%d\n",x,y,z);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 2,z,y;
//	z = (x * 2, 3 * x, x * 5);
//	y= (x += 2, 3 * x, x * 5);
//	printf("x=%d z=%d y=%d\n",x,z,y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j, m, n;
//	i = 8; j = 10;
//	m = ++i;//m=9
//	n = j++;//n=10
//	printf("%d,%d,%d,%d\n",i,j,m,n);//9,11,9,10
//
//	//m = i++;//m=8
//	//n = ++j;//n=11
//	//printf("%d,%d,%d,%d\n",i,j,m,n);//9,11,8,11
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	i = 8;
//	j = 10;
//	printf("%d,%d\n",i++,j++);//�൱��x=i++,y=j++
//	printf("i=%d,j=%d\n",i,j);
//
//	//printf("%d,%d\n",++i,++j);//�൱��x=++i,y=++j
//	//printf("i=%d,j=%d\n",i,j);
//
//	/*printf("%d,%d,%d,%d\n",i,j,i++,j++);*/
//	
//	/*printf("%d,%d,%d,%d\n", i++, j++, i, j);*/
//
//	/*printf("%d,%d,%d,%d\n", i, j, ++i, ++j);*/
//	return 0;
//}

//#include <stdio.h>//ʹ��C�����ṩ�Ŀ⺯��������10������
//#include <stdlib.h>//�õ���srand������rand����
//#include <time.h>//�õ���time����
//int main()
//{
//	srand((unsigned)time(NULL));//ʹ�ô����ָ���ʼ������
//	for (int i = 0; i < 10; i++)//��ӡ10���������
//	{
//		printf("�� %d ������ %d\n",i+1,rand());
//	}
//	return 0;
//}

//#include <stdio.h>//ʹ��C�����ṩ�Ŀ⺯������100��2��ƽ����
//#include <math.h>
//int main()
//{
//	printf("\n");
//	printf("\tsqrt(100)=%f\n",sqrt(100));
//	printf("\tsqrt(2)=%f\n",sqrt(2));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1, c2;
//	c1 = 'A' + '8' - '4';//65+56-52=65+4=69='E'
//	c2 = 'A' + '8' - '5';//65+3=68
//	printf("%c,%d\n",c1,c2);
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int x = 1, y = 0;
//	if (!x)y++;
//	else if (x == 0)
//		if (x)y += 2;
//		else y += 3;
//	printf("%d\n", y);//0
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int y = 9;
//	for (; y > 0; y--)
//		if (y % 3 == 0)
//			printf("%d",--y);
//}

//#include <stdio.h>
//void main()
//{
//	int i, j,m=1;
//	for (i = 1; i < 3; i++)
//	{
//		for (j = 3; j > 0; j--)
//		{
//			if (i * j > 3)break;
//			m *= i * j;//1*1*3=3;1*1*2=2;1*1*1=1;
//		}
//	}
//	printf("m=%d\n",m);//6
//}

//#include <stdio.h>
//int fun(int x, int y)
//{
//	if (x != y)return ((x + y) / 2);
//	else return (x);
//}
//void main()
//{
//	int a = 4, b = 5, c = 6;
//	printf("%d\n",fun(2*a,fun(b,c)));
//}

//#include <stdio.h>
//void main()
//{
//	int n, * p = NULL;
//	p = &n;//ͨ��ָ��pΪ����n�������ݲ����
//	printf("Input n: "); scanf_s("%d",p);
//	printf("Output n: "); printf("%d\n",*p);
//}

//#include <stdio.h>
//void main()
//{
//	unsigned char a = 2, b = 4, c = 5, d;
//	d = a | b; d &= c;
//	printf("%d\n",d);
//}

//#include <stdio.h>
//int main()
//{//����ָ��һά�����ָ�������������a[3][4]
//	int a[3][4] = { {1,3,5,7},{9,11,13,15},{17,19,21,23} },i,j,(*p)[4];
//	p = a;//p��ָ��һ������4��Ԫ�ص�һά�����ָ�����ͱ���
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			printf("%3d",*(*(p+i)+j));
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//����һ��ָ��ָ�����ݵ�ָ�����
//	int a = 1, * p, ** q, *** r;
//	p = &a; q = &p; r = &q;//int **q��ʾָ�����q��ָ��һ������ָ�����	
//	printf("%d%d%d%d\n",a,*p,**q,***r);
//	a = 2; printf("%d%d%d%d\n", a, *p, **q, ***r);
//	*p = 3; printf("%d%d%d%d\n", a, *p, **q, ***r);
//	**q = 4; printf("%d%d%d%d\n", a, *p, **q, ***r);
//	***r = 5; printf("%d%d%d%d\n", a, *p, **q, ***r);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* w[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };//����char��ָ������
//	int num;
//	printf("Please input any integer from 1 to 7:");
//	scanf_s("%d",&num);//�����Ӧ�ı��
//	//����switch���,��������ı�������Ӧ��Ӣ����
//	switch (num)
//	{
//		case 1:printf("%s\n", w[0]); break;
//		case 2:printf("%s\n", w[1]); break;
//		case 3:printf("%s\n", w[2]); break;
//		case 4:printf("%s\n", w[3]); break;
//		case 5:printf("%s\n", w[4]); break;
//		case 6:printf("%s\n", w[5]); break;
//		case 7:printf("%s\n", w[6]); break;
//		default:printf("The number is error!\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//����char��ָ������,ÿ��Ԫ�ض���һ���ַ���ָ��,�������鸳��ֵ
//	char* w[5] = { "C Program","Basic","English","Java","Philosophy" };//��5��������С����������������ָ��ָ���ָ�봦��
//	char** p = w, * temp;//����ָ��ָ���ָ�����p
//	int i, j, k;
//	//ѡ�����򷨽�������
//	for (i = 0; i < 4; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 5; j++)
//			if (strcmp(*(p + k), *(p + j)) > 0)k = j;
//		if (k != i)
//		{//w����Ԫ�صĻ���
//			temp = *(p + k);
//			*(p + k) = *(p + i);
//			*(p + i) = temp;
//		}
//	}
//	for (i = 0; i < 5; i++)
//		printf("%s\n",*(p+i));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int k;
//	static char st1[15], st2[] = "C Language";
//	printf("Please input a string:\n");
//	gets(st1);
//	k = strcmp(st1, st2);
//	if (k == 0)printf("st1=st2\n");
//	if (k > 0)printf("st1>st2\n");
//	if (k < 0)printf("st1<st2\n");
//	return 0;
//}

//#include <stdio.h>
//void move(int(*pointer)[3])
//{
//	int i, j, t;
//	//���л���
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(*(pointer + i) + j);
//			*(*(pointer + i) + j) = *(*(pointer + j) + i);
//			*(*(pointer + j) + i) = t;
//		}
//}
//int main()//����ת��
//{
//	int a[3][3], i, (*p)[3];
//	printf("Please input matrix:\n");
//	for (i = 0; i < 3; i++)
//		scanf_s("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
//	p = a;//aΪ����ָ�룬��������ָ�����p����pָ���ά�����0��
//	move(p);
//	printf("After the matrix transpose:\n");
//	for (i = 0; i < 3; i++)
//		printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int a, b;
//}data[2] = {10,100,20,200};
//void main()
//{
//	struct S p = data[1];
//	printf("%d\n",++(p.a));
//}

//#include <stdio.h>
//int fun()
//{
//	static int x = 1;//��̬�ֲ�����x,�ھ�̬�洢���ڷ���洢��Ԫ��
//	x *= 2;//�ڳ������������ڼ䶼���ͷţ������ٴ�ʹ�ñ���x��ֵ����һ��ʹ�ú��ֵ
//	return x;//2 4 8
//}
//void main()
//{
//	int i, s = 1;
//	for (i = 1; i <= 3; i++)s *= fun();
//	printf("%d\n",s);
//}


//#include <stdio.h>
//void main()
//{
//	int b[3][3] = {0,1,2,0,1,2,0,1,2},i,j,t=1;
//	for (i = 0; i < 3; i++)
//		for (j = i; j <= i; j++)t += b[i][b[j][i]];
//	printf("%d\n",t);//4
//}

//#include <stdio.h>
//void main()
//{
//	int a[] = { 2,3,5,4 }, i;
//	for(i=0;i<4;i++)
//		switch (i % 2)
//		{
//			case 0:switch (a[i] % 2)
//			{
//				case 0:a[i]++; break;
//				case 1:a[i]--;
//			}break;
//			case 1:a[i] = 0;
//		}
//	for (i = 0; i < 4; i++)printf("%d ",a[i]);//3 0 4 0
//	printf("\n");
//}

//#include <stdlib.h>
//#include <stdio.h>
//#define   N   10
//double fun(double  x[], double* y)
//{
//	int  i, j;    double  av;
//	/**********found**********/
//	av = 0.0;
//	/**********found**********/
//	for (i = 0; i < N; i++)
//		av = av + x[i] / 10;
//	for (i = j = 0; i < N; i++)
//		/**********found**********/
//		if (x[i] > av)  y[j++] = x[i];
//	y[j] = -1;
//	return  av;
//}
//void main()
//{
//	int  i;    double  x[N], y[N];
//	for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
//	printf("\n");
//	printf("\nThe average is: %f\n", fun(x, y));
//	for (i = 0; y[i] >= 0; i++)  printf("%5.1f ", y[i]);
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int x = 10;
//	x -= x + x;//���������+�����ȼ�����-=,��-=�Ľ�Ϸ���Ϊ��������
//	//���Ա��ʽx-=x+x���Ա�ʾ��x=x-(x+x)=10-(10+10)=-10
//	printf("x=%d\n",x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a1, a2; char b1, b2;
//	scanf("%d%c%d%c", &a1, &b1, &a2, &b2);
//	printf("a1=%d b1=%c a2=%d b2=%c\n", a1, b1, a2, b2);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int a = 3, b = 5;
//int main()
//{
//	int maxs(int a, int b);
//	int a = 8;
//	printf("max=%d\n", max(a, b));
//	return 0;
//}
//int maxs(int a, int b)
//{
//	return (a > b ? a : b);
//}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fac(int n);
	int i;
	for (i = 1; i <= 5; i++)
		printf("%d!=%d\n", i, fac(i));
	return 0;
}
int fac(int n)
{
	static int f = 1;
	f = f * n;
	return f;
}