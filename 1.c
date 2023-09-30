/*计算2的零次方加到2的七次方*/
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

/*计算2的14次方*/
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

/*计算2的N次方*/
//#include<stdio.h>
//int main()
//{
//	int a = 1, i, N;
//	printf("请输入N值：");
//	scanf_s("%d",&N);
//	for (i = 0; i < N; i++)
//	{
//		a = a * 2;
//	}
//	printf("\na=%d,i=%d\n",a,i);
//	printf("\n2的%d次方=%d\n",N,a);
//	return 0;
//}
/*可重复计算2的N次方*/
//#include<stdio.h>
//int main()
//{
//	int a=1,i, N;
//loop:/*跳回重复的地方是在定义的变量之前，否则会出错*/
//	printf("\n请输入N值：");
//	scanf_s("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		a = a * 2;
//	}
//	printf("\na=%d,i=%d\n", a, i);
//	printf("\n2的%d次方=%d\n", N, a);
//	goto loop;
//	return 0;
//}

//复习while循环
/*例1：从1加到10*/ 
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

/*例2：设有变量i = 0，1，2，3，4，要求输出i的5个值，每个数字间隔3个字符位下一行输出：
“We are out of the loop.”*/
#include<stdio.h>
//int main()
//{
//	int i=0;
//	while (i < 5)
//	{
//		printf("%3d",i);//表示以3位的固定宽度输出整型数。(注意：不足3位，在前面补空格;超过3位，按实际位数输出)
//		i++;
//	}
//	printf("\nwe are out of the loop.\n");
//	return 0;
//}	
/* %3d是C语言中格式化输出字符，代表的意思是指的输出3个字符长度的整数。
可以在“% ”和字母之间插进数字表示最大长宽。
例如： % 3d表示输出3位整型数，不够3位右对齐。*/
	/*void main()
	{
		int i = 0;
		while (i < 5)
		{
			printf("  %d", i);//空两格
			i++;
		}
		printf("\n");
		printf("we are out of the loop.\n");
	}*/

/*例3：求sum = 1 + 2 + 3 + …… + 100。*/
#include<stdio.h>
/*While循环*/
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
	int i = 1, sum = 0;     //累加器的初值为0 
	while (i <= 100)  //i为循环控制变量,初值1，终值100 
	{
		sum = sum + i;
		i++;     //i步长值为1 
	}
	printf("i=%d sum = %d\n",i,sum);
}*/

/*for循环*/
//void main()
//{
//	int i, sum = 0;
//	for (i=1;i<=100;i++)
//	{
//		sum = sum + i;
//	}
//	printf("i=%3d\nsum=%4d\n",i,sum);
//}

//求余运算符“%”
/*例：输出1到100的整数，要求每行输出5个*/
//#include<stdio.h>
//int main()
//{/*每行输出5个，意味着在5,10,15,20……等5的倍数的数字后面需要换行输出
// 而这些数的共同特点是能被5整除，余数为0，描述成条件即为：i%5==0*/
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 5 == 0)
//			printf("%3d\n",i);
//		else
//			printf("%3d ",i);
//	}/*当然，每行不一定是输出5个，也可以是6个，7个…，n个，只需要把条件换成i%n==0即可*/
//	return 0;
//}

//求余取整
/*例1：从键盘输入一个3位整数，对其进行拆分，分别输出其个、十、百位。*/
//#include<stdio.h>
//int main()
//{/*整数拆分可以借助整除和求余运算来解决。*/
//	int num, s, t, a;
//	printf("请任意输入一个三位整数：");
//	scanf_s("%d",&num);
//	s=num /100;        /*取出百位*/
//	t = num % 100 / 10;/*取出十位*/
//	a = num % 10;	  /*取出个位*/
//	printf("\n百位s=%d\n十位t=%d\n个位a=%d\n",s,t,a);
//	return 0;
//}

/*例2：间隔输出:
写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。*/
//# include<stdio.h>
//int main()
//{/*C语言中%表示取模算法，实际上就是计算余数。也就是说凡是不能整除的模运算的结果均为非零的整数。*/
//	int a, x[100], i = 0, j;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	while (a > 0)
//	{
//		x[i] = a % 10;
//		a /= 10;
//		i++;    /* "2%10=2":如果被除数比除数小，那么模运算的结果就等于被除数，因为此时商为0，而整个被除数就是余数*/
//	}
//	/*顺序输出*/
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%d ", x[j]);
//	}
//	/*逆序输出*/
//	/*for (j=0;j<i;j++)
//	{
//		printf("%d ",x[j]);
//	}*/
//	printf("\n");
//	return 0;
//}

/*例3：已知今天是星期五，求n天后是星期几？从键盘输入n。*/
/*每个星期是7天，不管从星期几开始，7天后又转回到星期几，是典型的转圈问题。
用%7来解决，0代表星期天，1-6代表星期一到六。*/
//#include<stdio.h>
//void main()
//{
//	int n, result;
//	//printf("请输入天数：");
//	//scanf_s("%d",&n);
//	//result = n % 7;
//	//switch (result)
//	//{
//	//	case 0: printf("\n%d天后是星期五\n",n); break;
//	//	case 1: printf("\n%d天后是星期六\n",n); break;
//	//	case 2: printf("\n%d天后是星期日\n",n); break;
//	//	case 3: printf("\n%d天后是星期一\n",n); break;
//	//	case 4: printf("\n%d天后是星期二\n",n); break;
//	//	case 5: printf("\n%d天后是星期三\n",n); break;
//	//	case 6: printf("\n%d天后是星期四\n",n); break;
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


/*输出n个"Hello world!"，用函数调用实现*/
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
//	printf("请输入n值：");
//	scanf_s("%d",&n);
//	show(n);
//	return 0;
//}

//#include<stdio.h>
//void show(int a);//声明
//int main()//主函数
//{
//	int n;
//	printf("请输入n值：");
//	scanf_s("%d",&n);
//	show(n);//调用
//	return 0;
//}
//void show(int a)//用户函数
//{
//	for (int i=0;i<a;i++)
//	{
//		printf("%4d Hello world!\n",i);
//	}
//}

/*for循环*/
//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i=0;i<8;i++)
//	{
//		printf("%2d\n",i);
//	}/*循环8次*/
//}

/*while循环*/
//#include<stdio.h>
//void main()
//{
//	int k = 5;
//	while (k)
//	{
//		printf("%d\n",k);
//		k--;/*先赋值给k再-1*/
//	}
//}


/*#include<stdio.h>*/ 
/*练习调用函数*/
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

/*用goto语句计算整数1~100的累加值，存放到sum中*/
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

/*测试"<<="*/
//void main()
//{
//	int y=0xcc;
//	y<<=1;//y=y<<1
//	printf("y=%d\n",y);
//}

/*测试“%=”*/
//void main()
//{
//	int count;
//	printf("请输入一个不大于100的数:");
//	scanf_s("%d",&count);
//	count %= 100; //count=count%100;
//	printf("count=%d\n",count);
//}

/*测试"%="、"/="*/
//void main()
//{
//	unsigned int a,b,value=25;
//	a=value/10;  
//	printf(" a=%d\n",a);
//	b=value%=10;  
//	printf(" b=%d\n",b);
//}

/*练习“/”、"%"*/
//void main()
//{
//	int A = 512,a,b,c;
//	a = A / 100;
//	b = A / 10 % 10;
//	c = A / 1%10;
//	printf("百位a=%d\n十位b=%d\n个位c=%d\n", a, b, c);
//}

/*算定时器初值(X=65536-N)*/
//void main()
//{
//	unsigned int value, a, b;
//	printf("请输入value:");
//	scanf_s("%d",&value);
//	a = value / 256;
//	b = value % 256;
//	printf("a=%d\nb=%d\n",a,b);
//}

/*查找字符串*/
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
//		printf("子串不存在\n");
//	else
//		printf("%s\n",ret);
//	return 0;
//}

/*测字符串长度函数strlen*/
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
//	printf("%lf\n", a);//%lf表示双精度浮点型，也就是double型的格式，默认保留6位小数
//	printf("%.2lf\n",a);//限制值,保留2位小数
//	printf("%f\n",c);//%f表示单精度浮点型，也就是float型的格式
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
//	printf("请输入行数(1到9之间)：");
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
//		int a = 0;  // 素数的个数
//		int num;  // 输入的整数
//		printf("请输入一个整数：");
//		scanf_s("%d", &num);
//		for (int i = 2; i < num; i++) 
//			if (num % i == 0) 
//				a++;  // 素数个数加1,a作为桥梁
//		if (a == 0) 
//			printf("%d是素数。\n", num);
//		else 
//			printf("%d不是素数。\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() 
//{
//	int m;  // 输入的整数 
//	int i;  // 循环次数
//	int k;  // m 的平方根 
//	printf("请输入一个整数：");
//	scanf_s("%d", &m);
//	// 求平方根，注意sqrt()的参数为 double 类型，这里要强制转换m的类型 
//	k = (int)sqrt((double)m);
//	for (i = 2; i <= k; i++)
//		if (m % i == 0)
//			break;
//	// 如果完成所有循环，那么m为素数
//	// 注意最后一次循环，会执行i++，此时 i=k+1，所以有i>k 
//	if (i > k)
//		printf("%d是素数。\n", m);
//	else
//		printf("%d不是素数。\n", m);
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
//	printf("妍妍宝贝专属\n");
//	printf("愿你平安喜乐，所求皆如愿，所行皆坦途，永远爱你！！！\n");
//	return 0;
//}

//#include<stdio.h>
//
//struct Student
//{
//	int num;//学号
//	int age;//年龄
//	char* name;//姓名
//};
//
//void main(void)
//{
//	struct Student stu = { 1951,21,"xiaoming" };
//	printf("sizeof(int*)=%d字节\n", sizeof(int *));
//	printf("sizeof(char*)=%d字节\n", sizeof(char *));
//	printf("sizeof(long*)=%d字节\n", sizeof(long *));
//	printf("sizeof(short*)=%d字节\n", sizeof(short *));
//
//	printf("sizeof(stu)=%d字节\n", sizeof(stu));
//	printf("sizeof(struct Student)=%d字节\n", sizeof(struct Student));
//	printf("sizeof(struct Student*)=%d字节\n", sizeof(struct Student*));
//}
/*32位机中，指针都占4字节，不论是什么类型的指针*/

//#include <stdio.h>
//#include <stdlib.h>	//用于EXIT_SUCCESSGN EXIT——FAILURE
//
//int main()
//{
//	int a, b;
//	printf("计算两个数的和\n");
//	printf("请输入a = ");
//	scanf_s("%d", &a);
//	printf("请输入b = ");
//	scanf_s("%d", &b);
//	if (a + b > 10)
//	{
//		printf("成功!\n");
//		return EXIT_SUCCESS;//return 0
//	}
//	else
//	{
//		printf("失败!\n");
//		return EXIT_FAILURE;//return 1
//	}
//	return 0;
//}

//动态数组 
//#include<stdio.h>
//#include<stdlib.h>	//为malloc（）和free函数提供原型
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
//	//ptd 现在指向有max个元素的数组
//	puts("Enter the values(q to quit):");
//	while (i < max && scanf_s("%lf",&ptd[i]) == 1)
//		i++;
//	printf("Here are your %d entries:\n", number = i);//这个时候i=max  输出的%d是number，number=i=max 
//	for (i = 0; i <number; i++) 
//	{
//		printf("%7.2f",ptd[i]);
//		if (i % 7 == 6)			//7个一换行。i从0开始， i%7=6时，已经输出了7个 
//			printf("\n");
//	}
//	if (i % 7 != 0)			//与上面的对应，如果正好就不用再换行，不正好就再换一次。 
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
//	printf("hahaha哈哈哈\n");
//
//	system("pause");
//
//	printf("hahaha哈哈哈\n");
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
//	return; ////表示结束该函数,返回主函数中
//	printf("222222\n"); 
//}//这里的return其实还有个退出该程序的作用！
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
//	struct student* p = &stu;//定义了指向该结构体变量的指针
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
//	printf("%s\n",s);//通过字符串首地址输出字符串
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	int a = 1;//局部变量
////  static int a = 1;//静态变量：被static修饰的局部变量，将局部变量的生命周期变得和整个程序一样长
//	a++;
//	printf("%d ",a);
//}//即：局部变量出了其作用域也将不会销毁，除非程序结束。虽然生命周期变长，但它的作用域没有发生任何改变，还是只能在那个局部的范围内使用。
//
////局部变量的生命周期就是其所在的那个局部范围，简单来说就是进这个范围变量就创建，出这个范围变量就销毁。
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//每次调用函数test，局部变量a就创建，调用结束就把a销毁，所以每次打印才会是2。
//		i++;
//	}
//	return 0;//局部变量被static修饰时生命周期将变得和整个程序一样长，但作用域并没有变化。
//}//而static修饰全局变量和函数时，就只能在改源文件内部使用，将与外部隔绝起来。

//#include <stdio.h>
//int main()
//{
//	static int a;
//	printf("a=%d\n",a);//局部变量初值为0
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
//	printf("%s\n",p);//打印abc
//	return 0;
//}//指向字符数组首元素的字符指针 char*p=arr

//#include <stdio.h>
//int main()
//{
//	const char* p = "abc";//字符串abc为常量字符串
//	printf("%s\n",p);
//	return 0;//因为“abc”是常量字符串，不能被修改，所以指针p需要使用const修饰。
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {1,3,5,7,9};
//	int* p[3] = {arr1,arr2,arr3};//指针数组，本质上是数组，是存放指针的数组。
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			/*printf("%d ",*(p[i]+j));*/
//			//printf("%d ",*(*(p+i)+j));//p[i]可以写成*（p+i）
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
//	int(*p)[5] =&temp;//定义了一个指向含有5个int类型数组的指针p，并把temp数组的首地址给了指针p
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
//	int arr[] = {1,3,5,7,9};//定义一个数组
//	int* p;//定义一个指针
//	p = arr;//把数组的首地址赋值给指针变量p
//	printf("p=%d\n\n",*p);
//	printf("a[0]=%d a[1]=%d\n\n",*p,*(p+1));
//	p = &arr[1];//把数组中的第二个元素地址赋值给指针变量p
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
//	printf("\n");//在经过第一个for循环后p已经指向数组的末尾，因此在执行第二个for循环时，p的起始值已经不是&a[0]了
//	p = arr;//所以在执行第二个for循环前要加上赋值语句--p=arr。
//	for (i = 0; i < 5; i++,p++)
//	{
//		printf("%2d\n",*p);
//	}
//}

/*引用数组元素*/
#include <stdio.h>
//下标法
//void main()
//{
//	int a[10], i;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-2d",a[i]);//左对齐
//	}
//	printf("\n");
//}

//通过数组名计算数组元素地址，找出元素的值
//void main()
//{
//	int a[10],i;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",a+i);//a+i可以换为&a[i]
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-2d", *(a + i));
//	}
//	printf("\n");
//}

//用指针变量指向数组元素
//void main()
//{
//	int a[10], * p;
//	printf("请输入10个整数：\n");
//	for (p = a; p < (a + 10); p++)
//	{
//		scanf_s("%d",p);
//	}
//	p = a;//需要对p重新赋值
//	for (p = a; p < (a + 10); p++)
//	{
//		printf("%-2d",*p);
//	}
//	printf("\n");
//}

//void main()
//{
//	int a[10], i, * p = &a;//此处的*p=&a等同于 int *p; p=a;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d",p++);
//	}
//	p = a;
//	for (i = 0; i < 10; i++,p++)
//	{
//		printf("%-2d",*p);
//		/*p++在此处亦可;*/
//	}
//	printf("\n");
//}

/*程序输出Sn=a+aa+aaa+…+aa…a(n个a)的值，其中，a是一个数字，n表示a的位数
例如：a=3，n=4时，Sn=3+33+333+3333。a、n由键盘输入。*/
//#include <stdio.h>
//void main()
//{
//	int a, n,temp,Sn=0;
//	printf("请输入一个数字a:\n");
//	scanf_s("%d", &a);
//	printf("请输入a的位数n:\n");
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

//头文件：#include<stdio.h>
//sprintf()函数用于将格式化的数据写入字符串
#include <stdio.h>
//void main()
//{
//	char a[100] = {0};
//	sprintf(a,"这是%s字符串!","IO1314");
//	printf("%s\n",a);
//}

//void main()
//{
//	int x = 1314520;
//	char a[100];
//	sprintf(a,"%d",x);
//	printf("%s\n", a);//数字转换成字符串
//}

//#include <stdio.h>
//int main()
//{
//	char str[10];
//	printf("请输入你的名字：\n");
//	scanf_s("%s",str);
//	printf("你的名字为：%s\n",str);
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
////sizeof计算结构体大小
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
////原文链接：https ://blog.csdn.net/farsight2009/article/details/4251455
//
//void main()
//{
//	printf("aa大小为：%d\n", sizeof(struct aa));
//	printf("stu3大小为：%d\n", sizeof(struct stu3));
//	printf("stu4大小为：%d\n", sizeof(struct stu4));
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
//		printf("无法打开文件\n");
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
//		printf("无法打开文件\n");
//		return 1;
//	}
//	int result = fputc('H', file);
//	if (result == EOF)
//	{
//		printf("写入失败\n");
//		return 1;
//	}
//	else
//	{
//		printf("写入成功\n");
//	}
//	fclose(file);
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	FILE* file = fopen("example.txt", "r");  // 打开一个文件供读取
//	char str[100];
//	if (fgets(str, sizeof(str), file) != NULL) 
//	{
//		printf("读取到的字符串：%s", str);
//	}
//	fclose(file);  // 关闭文件
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	FILE* file = fopen("example.txt", "w");
//	if (file == NULL) 
//	{
//		printf("无法打开文件");
//		return 1;
//	}
//	const char* str = "Hello World!";
//	int result = fputs(str, file);
//	if (result == EOF) 
//	{
//		printf("写入失败");
//		return 1;
//	}
//	else
//	{
//		printf("写入成功\n");
//	}
//	fclose(file);
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//	FILE* fp;
//	int num1, num2;
//	// 打开文件
//	fp = fopen("example.txt", "r");
//	if (fp == NULL) 
//	{
//		printf("无法打开文件\n");
//		return 1;
//	}
//	// 从文件中读取两个整数
//	int items_read = fscanf(fp, "%d %d", &num1, &num2);
//	if (items_read != 2) {
//		printf("读取数据失败\n");
//		return 1;
//	}
//	// 输出读取结果
//	printf("num1 = %d ", num1);
//	printf("num2 = %d\n", num2);
//	// 关闭文件
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
//	int w = 012;//表示八进制的10
//	printf("%s X = %d\n", atc, w+1);
//	printf("%d %o %x\n", w, w, w);//不显示数值前缀
//	printf("%#d %#o %#x\n", w, w, w);//显示数值前缀
//	return 0;
//}

//#include <stdio.h>
//int main()
//{/*通过数组变量接收字符串，哪怕字符串中的数据相同，每次定义也会重新分配存储空间*/
//	char str1[] = "lzf";
//	char str2[] = "lzf";
//	printf("str1 = %p\n",str1);
//	printf("str2 = %p\n",str2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{/*通过指针变量接收字符串，只要字符串中的数据相同,就只有第一次定义才分配存储空间*/
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
//	char str2[] = "lzf";//通过数组变量接收字符串，这个字符串存储在栈中
//	char* str3 = "lzf";//通过指针变量接收字符串，这个字符串存储在常量区中
//
//	printf("str1 = %s\n",str1);
//	printf("str2 = %s\n",str2);
//	printf("str3 = %s\n",str3);
//	//存储在栈中的数据可以修改，存储在常量中的数据不能修改
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
////一个函数中通过数组保存了一个字符串,那么这个字符串不能作为函数的返回值,因为外界获取不到
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
////一个函数中通过指针保存了一个字符串,那么这个字符串可以作为函数的返回值,因为外界可以获取
//char* test()
//{
//	char* str = "lzf";//通过指针变量保存的字符串存储在常量区中
//	printf("str = %s\n",str);
//	return str;
//}

//#include <stdio.h>
//void change(int* p);
//int main()
//{
//	int ages[] = { 1,3,5 };
//	printf("ages[1] = %i\n",ages[1]);// 有符号10进制整数 （%i 和%d 没有区别，%i 是老式写法，都是整型格式）
//	change(ages);
//	printf("ages[1] = %i\n",ages[1]);//%i表示有符号十进制整数
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
//	printf("输出第一个字符：%c\n", *a);
//	printf("输出第二个字符：%c\n", *(a+1));
//	printf("输出字符串：%s\n", a);
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
//	char ch = getchar();//输入字符
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
//	printf("%c的ASCII码值为%d\n",a, a);
//	return 0;
//}
//我们知道，字符数组进行初始化时，可以是字符，也可以是ASCII值（ASCII值有二进制，十进制，十六进制等多种形式），
//因为通过ASCII表，字符和ASCII值可以相互转换，以%c的形式输出字符，以%d的形式输出ASCII值。

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[] = { 'a', 'b', 'c', 69, 100, '0', 0, '\0' };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("字符 %c,", arr[i]);
//		printf("ASCII %d", arr[i]);
//		printf("\n");
//	}
//	return 0;
//}
//因为这里的0是 ASCII值0，就是转义字符'\0'，转义字符‘\0’是ASCII控制字符，字符解释是空字符，并不是打印字符。而字符‘0’的ASCII码值是48。
//所以，0和‘\0’以 % c的形式输出时，什么都不打印；以 % d的形式输出时，是0；
//‘0’以 % c的形式输出时是0；以 % d的形式输出时，是48；


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

//数组arr1：char arr1[ ] = "abc"; 因为‘\0’是字符串的结束标志，任何字符串之后都会自动加上'\0'。
//且数组的大小≥ (字符数量+1)。所以可以以%s的形式进行输出

//数组arr2: char arr2[] = { 'a','b','c','\0' }; 也有'\0'，所以可以以 % s的形式进行输出。

//数组arr3 : char arr3[] = { 'a','b','\0','c' }; 有'\0', 所以可以以% s的形式输出，但是因为'\0'在中间，而‘\0’是字符串的结束标志，
// 所以当以 % s的形式进行打印时，只会输出'\0'前面的字符，并不会将字符数组中的元素全部打印。

//数组arr4 : char arr4[] = { 'a','b','c' }; 没有'\0', 以% s的形式进行输出会出现乱码问题，不行。

//数组arr5 : char arr5[3] = "abc"; 因为数组的大小是3，而数组元素有4个，导致最后的'\0'被舍掉了，
//于是数组arr5中也没有'\0'，以 % s的形式进行输出会出现乱码问题，不行。

//‘\0’是字符串的结束标志，任何字符串之后都会自动加上'\0'。

//为了保证让编译器自动添加空字符’\0’，数组的大小必须≥(字符数量 + 1)

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcde";//char 数组里面是一个1 个元素1 个字节
//	int i = 0;
//	i = sizeof(arr) / sizeof(*arr);
//	/*i = sizeof(arr) / sizeof(arr[0]);*/
//	printf("%d %d\n", sizeof(arr), sizeof(*arr));
//	printf("%d\n", i);
//	return 0;
//}
//（注：'\0'在sizeof()中是会被计算的，所以我们求char[]字符串的长度一般可以用strlen(),而不采用sizeof()。
//{sizeof()计算的是变量的大小，而strlen计算的是字符串的长度，并且strlen()是以'\0'作为计算字符长度的结尾}）

//#include <stdio.h>
//int main()
//{
//	char str1[10] = "China";
//	printf("%d\n", strlen(str1));//函数的值为字符串中的实际长度,不包括\0
//
//	printf("%d\n", strlen("China"));//测试字符串长度的函数
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void) 
//{
//	char* a = "bcd";
//	printf("输出字符：%c \n", *a);  /*输出字符，使用"%c"*/
//	printf("输出字符：%c \n", *(a + 1));  /*输出字符，使用"%c"*/
//	printf("输出字符串：%s \n", a); /*输出字符串，使用"%s"；而且a之前不能有星号"*"  */
//	system("pause");  /*为了能看到输出结果*/
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
//	//scanf("%s",s)表示输入一个字符串,遇到空格会结束输入。
//	scanf_s("%s",str,10);//所以当字符串内带有空格时,不能使用此语句。
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
////声明静态局部变量;函数调用结束后，其占用的存储单元不释放
////在下次该函数调用时，该变量保留上一次函数调用结束时的值。
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
//}//函数fun()的功能是将数组K中前5个元素倒序，
// //因此执行函数fun()后数组K中的元素为5,4,3,2,1,6,7,8,9,10。
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
//		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))//如果一个字母的下一个字符为空格或者结束标记，则表示一个单词结束
//			j++;
//	return j;//返回单词个数
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
//void swap(char* x, char* y)//交换一个字符
//{
//	char t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//void main()
//{
//	char s1[] = "abc", s2[] = "123";
//	swap(s1,s2);//s1指向的是数组的首地址,即"abc"的第一个字符的地址。
//	printf("%s, %s\n",s1,s2);//s2指向的是"123"的第一个字符的地址。
//}

//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	x = y = 1;
//	z = x++, y++, ++y;//因为赋值运算符的优先级高于逗号运算符的优先级,所以可以将上式
// 表示成(z=x++),(y++),(++y)。然后从左向右先计算表达式z=x++,因为x++先使用后自增,
// 所以z的值为1,x的值为2。再计算逗号表达式第二个表达式y++,此时y的值为2,最后计算
// 第三个表达式++y,y的值为3。
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
//	printf("%d,%d\n",i++,j++);//相当于x=i++,y=j++
//	printf("i=%d,j=%d\n",i,j);
//
//	//printf("%d,%d\n",++i,++j);//相当于x=++i,y=++j
//	//printf("i=%d,j=%d\n",i,j);
//
//	/*printf("%d,%d,%d,%d\n",i,j,i++,j++);*/
//	
//	/*printf("%d,%d,%d,%d\n", i++, j++, i, j);*/
//
//	/*printf("%d,%d,%d,%d\n", i, j, ++i, ++j);*/
//	return 0;
//}

//#include <stdio.h>//使用C语言提供的库函数随机输出10个整数
//#include <stdlib.h>//用到了srand函数和rand函数
//#include <time.h>//用到了time函数
//int main()
//{
//	srand((unsigned)time(NULL));//使用传入空指针初始化种子
//	for (int i = 0; i < 10; i++)//打印10个随机整数
//	{
//		printf("第 %d 个数是 %d\n",i+1,rand());
//	}
//	return 0;
//}

//#include <stdio.h>//使用C语言提供的库函数计算100和2的平方根
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
//	p = &n;//通过指针p为变量n读入数据并输出
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
//{//利用指向一维数组的指针变量访问数组a[3][4]
//	int a[3][4] = { {1,3,5,7},{9,11,13,15},{17,19,21,23} },i,j,(*p)[4];
//	p = a;//p是指向一个包含4个元素的一维数组的指针类型变量
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			printf("%3d",*(*(p+i)+j));
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//定义一个指向指针数据的指针变量
//	int a = 1, * p, ** q, *** r;
//	p = &a; q = &p; r = &q;//int **q表示指针变量q是指向一个整型指针变量	
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
//	char* w[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };//定义char型指针数组
//	int num;
//	printf("Please input any integer from 1 to 7:");
//	scanf_s("%d",&num);//输入对应的编号
//	//利用switch语句,根据输入的编号输出相应的英文名
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
//{//定义char型指针数组,每个元素都是一个字符型指针,并给数组赋初值
//	char* w[5] = { "C Program","Basic","English","Java","Philosophy" };//将5个书名从小到大排序后输出，用指向指针的指针处理。
//	char** p = w, * temp;//定义指向指针的指针变量p
//	int i, j, k;
//	//选择排序法进行排序
//	for (i = 0; i < 4; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 5; j++)
//			if (strcmp(*(p + k), *(p + j)) > 0)k = j;
//		if (k != i)
//		{//w数组元素的互换
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
//	//行列互换
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(*(pointer + i) + j);
//			*(*(pointer + i) + j) = *(*(pointer + j) + i);
//			*(*(pointer + j) + i) = t;
//		}
//}
//int main()//矩阵转置
//{
//	int a[3][3], i, (*p)[3];
//	printf("Please input matrix:\n");
//	for (i = 0; i < 3; i++)
//		scanf_s("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
//	p = a;//a为二级指针，赋给二级指针变量p，则p指向二维数组的0行
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
//	static int x = 1;//静态局部变量x,在静态存储区内分配存储单元。
//	x *= 2;//在程序整个运行期间都不释放，所以再次使用变量x的值是上一次使用后的值
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
//	x -= x + x;//算术运算符+的优先级高于-=,且-=的结合方向为自右向左，
//	//所以表达式x-=x+x可以表示成x=x-(x+x)=10-(10+10)=-10
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