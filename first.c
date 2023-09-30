/*model
#include <stdio.h>
#include <stdlib.h>
int main()
{

	system("pause");
	return 0;
}
*/

//#include <stdio.h>
//void main()
//{
//	printf("Hello World!");
//	getchar();//防止闪屏
//}

//int main()
//{
//	char *sw = "Hello";
//	int aq = 012;
//	printf("%s,X = %d\n",sw, aq+1);
//	printf("%d,%o,%x\n",aq, aq, aq);
//	printf("%#d,%#o,%#x\n",aq, aq, aq);
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "lzf";
//	char str2[] = "lzf";
//	printf("str1 = %p\n",str1);
//	printf("str2 = %p\n",str2);
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* p1 = "lzf";
//	char* p2 = "lzf";
//	printf("p1 = %p\n",p1);
//	printf("p2 = %p\n",p2);
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//char* test();
//int main()
//{
//	char* res = test();
//	printf("res = %s\n",res);
//	getchar();
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
//	getchar();
//	return 0;
//}
////一个函数中通过指针保存了一个字符串,那么这个字符串可以作为函数的返回值,因为外界可以获取
//char* test()
//{
//	char* str = "lzf";
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
//	getchar();
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
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char* s1 = "abcde";
//	char s2[] = { "abcde" };
//	printf("%s %c %s %c\n",s1, *s1, s1+1, s1[1]);
//	printf("%s %c %s %c\n",s2, *s2, s2+1, s2[1]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{  
//    char *a= "bcd" ;  
//    printf("输出字符：%c \n", *a);  /*输出字符，使用"%c"*/
//    printf("输出字符：%c \n", *(a+1) );  /*输出字符，使用"%c"*/
//    printf("输出字符串：%s \n", a); /*输出字符串，使用"%s"；而且a之前不能有星号"*"  */
//    system("pause");  /*为了能看到输出结果*/
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	char a, b, c, d;
//	scanf_s("%c%c",&a,1,&b,1);
//	c = getchar();
//	d = getchar();
//	printf("%c %c %c %c\n", a, b, c, d);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char ch = getchar();//输入字符
//	putchar(ch);
//	system("pause");
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
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//    char *str[] = {"Hello", "C++", "World"}; //char (*str)[] = ...
//    int i;
//    for(i=0; i<3; i++)
//        printf("%s\n", str[i]);
//	system("pause");
//} 
// str[0]字符串"hello"的首地址，str[0]+1：字符串"hello"第二个字符'e'的地址，str[2]=str+2:第三个字符串"world"的首地址
// str[1]字符串"C++"的首地址
// str[2]字符串"world"的首地址

//#include <stdio.h>
//#include <string.h>
//#define  N  10
//typedef  struct  ss
//{
//    char  num[10];
//    int  s;
//} STU;
//
//void fun(  STU  a[], STU  *s  )
//{
//	int i;
//	*s=a[0];//先认为第一个值最小
//	for(i=1;i<N;i++)
//	{
//		if(a[i].s<s->s)
//			*s=a[i];
//	}		
//}
//
//main ( )
//{
//    STU  a[N]= { {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//        {"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71}
//    }, m  ;
//    int   i;
//    printf("***** The original data *****\n");
//    for ( i=0; i< N; i++ )printf("No = %s  Mark = %d\n", a[i].num,a[i].s);
//    fun ( a, &m );
//    printf ("***** THE  RESULT *****\n");
//    printf ("The lowest  :  %s , %d\n",m.num, m.s);
//	system("pause");
//}

//#include <stdio.h>
//int main()
//{
//	int a1,a2;char b1,b2;
//	scanf("%d%c%d%c",&a1,&b1,&a2,&b2);
//	printf("a1=%d b1=%c a2=%d b2=%c\n",a1,b1,a2,b2);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 10;
//	x -= x + x;//算术运算符+的优先级高于-=,且-=的结合方向为自右向左，
//	//所以表达式x-=x+x可以表示成x=x-(x+x)=10-(10+10)=-10
//	printf("x=%d\n",x);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,c;
//	a=10;b=50;c=30;
//	if(a>b)a=b,b=c;c=a;
//	printf("a=%d b=%d c=%d\n",a,b,c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int c=0,k;
//	for(k=1;k<3;k++)
//		switch(k)
//		{
//			default:c+=k;
//			case 2:c++;break;
//			case 4:c+=2;break;
//		}
//	printf("%d\n",c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int fun(char *s)
//{
//	char *t=s;
//	while(*t++);//while(*t++)不断循环直到*t为'\0'
//	t--;//t-1,这时字符指针t指向字符串的最后一个字符
//	return (t-s);//又因为s指向字符数组的首地址即字符串的首地址
// //所以return(t-s)便是返回字符数组中字符串的长度
//}//计算s所指字符串的长度
//
//int main()
//{
//	char s1[]="ILOVEYOU";
//	int len;
//	len=fun(s1);
//	printf("len=%d\n",len);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float x[5],*p,*q;
//	p=&x[1];q=&x[4];
//	printf("q-p=%d\n",q-p);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x[3][2]={0},i;//定义二维数组x[3][2]并初始化赋值全为0
//	for(i=0;i<3;i++)scanf("%d",x[i]);
// 其中x[0]、x[1]和x[2]分别表示数组x中第一行、第二行和第三行首元素的地址，
// 所以for循环中调用scanf函数输入的3个数据2、4、6分别赋值给了x[0][0],x[1][0],x[2][0]。
//	printf("%3d%3d%3d\n",x[0][0],x[0][1],x[1][0]);//其中x[0][1]仍为初始时的0。
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int j;float y;char name[50];
//	scanf("%2d%3f%s",&j,&y,name);//其中的格式命令可以说明最大域宽。
//	//在百分号(%)与格式码之间的整数用于限制从对应域读入的最大字符数。
//	//格式输入函数,即按用户指定的格式从键盘上把数据输入到指定的变量中。
//	printf("j=%2d\ny=%3f\nname=%s\n",j,y,name);//所以j的值为55,y的值为566.0,字符数组name为7777abc
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *s={"abc"};
//	do
//	{printf("%d",*s%10);++s;}//*s%10相当于(*s)%10每次对字符的ASCII的值取余数
//	while(*s);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int f(int n);
//int main()
//{
//	int a=3,s;
//	s=f(a);s=s+f(a);
//	printf("s=%d\n",s);
//	system("pause");
//	return 0;
//}
//int f(int n)
//{
//	static int a=1;//静态局部变量a,在静态存储区内分配存储单元,在程序整个运行期间都不释放。
//	n+=a++;
//	return n;//4 5
//}

//#include <stdio.h>
//void fun(int a,int b)//函数的形参为普通变量。
//{
//	int t;
//	t=a;a=b;b=t;
//}//在函数调用过程中,形参的值发生改变,不会影响实参的值。
//int main()
//{
//	int c[10]={1,2,3,4,5,6,7,8,9,0},i;
//	for(i=0;i<10;i+=2)fun(c[i],c[i+1]);	
//	for(i=0;i<10;i++)printf("%d, ",c[i]);//数组c中的元素的值并没有变化。
//	printf("\n");//函数调用时,实参的值传送给形参,而不能把形参的值反向地传送给实参。
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//void fun(int *a,int *b)
//{
//	int t;
//	t=*a;*a=*b;*b=t;//交换指针a、b所指向的内容，即交换a、b值
//}
//int main()
//{
//	int c[10]={1,2,3,4,5,6,7,8,9,0},i;
//	for(i=0;i<10;i+=2)fun(&c[i],&c[i+1]);
//	for(i=0;i<10;i++)printf("%d, ",c[i]);//2,1,4,3,6,5,8,7,0,9 
//	printf("\n");
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//struct S{int n;int a[20];};
//void f(struct S *p)//对结构体变量s中第二个成员数组中所有的数据进行从小到大的选择排序。
//{
//	int i,j,t;
//	for(i=0;i<p->n-1;i++)
//		for(j=i+1;j<p->n;j++)
//			if(p->a[i]>p->a[j])
//			{
//				t=p->a[i];p->a[i]=p->a[j];p->a[j]=t;
//			}
//}
//int main()
//{
//	int i;struct S s={10,{2,3,1,6,8,7,5,4,10,9}};
//	f(&s);
//	for(i=0;i<s.n;i++)printf("%d, ",s.a[i]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct{char name[9];char sex;int score[2];}STU;
//STU f(STU a)
//{
//	STU b={"Zhao",'m',85,90};
//	int i;
//	strcpy(a.name,b.name);
//	a.sex=b.sex;
//	for(i=0;i<2;i++)a.score[i]=b.score[i];
//	return a;
//}
//int main()
//{
//	STU c={"Qian",'f',95,92},d;
//	d=f(c);
//	printf("%s, %c, %d, %d ",d.name, d.sex, d.score[0], d.score[1]);
//	printf("%s, %c, %d, %d\n",c.name, c.sex, c.score[0], c.score[1]);
////程序在调用函数f时,传给函数f的参数只是结构变量c在栈中的一个拷贝,
////函数f所做所有操作只是针对这个数据拷贝进行的修改,这些都不会影响变量c的值。
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int a=3,b=5;//全局变量
//
//int main()
//{
//	int maxs(int a,int b);//声明maxs函数
//	int a=8;//定义局部变量a
//	printf("max=%d\n", maxs(a,b));
//	system("pause");
//	return 0;
//}
//int maxs(int a,int b)//定义maxs函数
//{
//	return (a>b?a:b);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int fac(int n);
//	int i;
//	for(i=1;i<=5;i++)
//		printf("%d!=%d\n",i,fac(i));
//	system("pause");
//	return 0;
//}
//int fac(int n)
//{
//	static int f=1;
//	f=f*n;
//	return f;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int maxs(int x,int y)
//{
//	if(x>y)return x;
//	else return y;
//}
//int main()
//{
//	int a,b,c;
//	printf("please input two numbers:\n");
//	scanf("%d%d",&a,&b);
//	c=maxs(a,b);//通过函数名调用max函数
//	printf("max=%d\n",c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int maxs(int x,int y)
//{
//	if(x>y)return x;
//	else return y;
//}
//int main()
//{
//	int a,b,c;
//	int (*p)(int,int);//定义指向函数的指针变量
//	p=maxs;//p指向maxs函数
//	printf("please input two numbers:\n");
//	scanf("%d%d",&a,&b);
//	c=(*p)(a,b);//通过指针变量p调用maxs函数
//	printf("max=%d\n",c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void game(int n)
//{
//	if(n==1)
//		printf("You win and get the awards!\n");
//	else
//		printf("Sorry,you lose the game!\n");
//}
//int main()
//{
//	int r;
//	void (*p)(int);//定义指向函数的指针变量p
////void表示p所指向的函数无返回值,后边括号里的int表示该函数只有一个int型形参。
//	srand((unsigned)time(NULL));//通过time函数来获取随机函数种子
//	r=rand()%2;//产生随机数0或1
//	p=game;//p指向game函数
//	(*p)(r);//通过p调用game函数
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int *seek(int (*pointer)[4],int k)
//{//形参pointer(二级指针变量)是指向包含4个int型元素的一维数组的指针变量。
//	int *pt;
//	pt=*(pointer+k);//pt的值是&score[k][0]
//	return pt;
//}//返回指针的函数
//int main()
//{
//	int score[4][4]={{70,60,80,210},{75,70,85,230},{90,60,70,220},{85,70,90,245}};
//	//定义数组,存放评分
//	int *p,i,n;
//	printf("Please input the class number:");
//	scanf("%d",&n);//输入要找的班级序号
//	printf("The score of No.%d are:\n",n-1);
//	printf("Exer\tRead\tLesson\tTotal\n");
//	p=seek(score,n-1);//调用seek函数,返回score[n][0]地址
//	for(i=0;i<4;i++)
//		printf("%d\t",*(p+i));//输出score[n][0]-score[n][3]的值
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct stud
//{
//	char num[10];
//	char name[20];
//	char sex;
//	struct date birthday;
//	float score;
//};
//int main()
//{
//	struct stud stud1={"200608247","Zhang San",'F',{1988,3,15},94};
//	struct stud stud2=stud1;
//	stud2.score=99;
//	printf("No.:%s\n",stud1.num);
//	printf("name:%s\n",stud1.name);
//	printf("sex:%c\n",stud1.sex);
//	printf("birthday:year:%4d month:%2d day:%2d\n",stud1.birthday.year,stud1.birthday.month,stud1.birthday.day);
//	printf("stud1 score:%5.1f\n",stud1.score);
//	printf("stud2 score:%5.1f\n",stud2.score);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//struct student
//{
//	char num[10];
//	char name[20];
//	char sex;
//	struct date birthday;
//	float score[4];
//};
//int main()
//{
//	struct student stud[N]={{"200608247","Zhang San",'M',1999,3,15,75,90,94},
//	{"200606677","Li Wei",'M',1997,6,24,85,90,82},{"200606688","Wang Qin",'F',1998,2,29,95,70,80}};
//	int i;
//	printf("No.  Name  Sex Birthday score1 score2 score3 total\n");
//	for(i=0;i<N;i++)
//	{
//		stud[i].score[3]=stud[i].score[0]+stud[i].score[1]+stud[i].score[2];
//		printf("%s %s %c  %4d %2d %2d %6.1f%6.1f%6.1f  %6.1f\t\n",
//			stud[i].num,stud[i].name,stud[i].sex,
//			stud[i].birthday.year,stud[i].birthday.month,stud[i].birthday.year,
//			stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].score[3]);
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct student
//{
//	char num[10];
//	char name[20];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct student stud1;
//	struct student *p;
//	p=&stud1;
//	strcpy((*p).num,"200606688");
//	strcpy((*p).name,"Wang Yue");
//	(*p).sex='F';
//	(*p).score=80.25;
//	printf("No.:%s\nname:%s\nsex:%c\nscore:%g\n",
//		(*p).num,(*p).name,(*p).sex,(*p).score);//%g自动选择合适的表示法
//	/*printf("No.:%s\nname:%s\nsex:%c\nscore:%g\n",
//		p->num,p->name,p->sex,p->score);*/
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct student
//{
//	char num[10];
//	char name[20];
//	char sex;
//	float score;
//};
//int main()
//{
//	struct student stud[]={{"200608247","Zhang San",'M',94},
//	{"200606677","Chen Yong",'M',82},{"200606688","Wang Yue",'F',80}};
//	struct student *p;
//	printf("\nNo.            Name    Sex Score\n");
//	for(p=stud;p<stud+3;p++)
//		printf("%s   %s   %c   %g\n",p->num,p->name,p->sex,p->score);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct student//全局结构体类型
//{
//	char num[10];
//	char name[20];
//	float score;
//};
//void printstruct(struct student st)
//{
//	printf("%s    %s      %g\n",st.num,st.name,st.score);
//}
//int main()
//{
//	int i;
//	struct student stud[]={{"200608247","Zhang San",94},{"200606677","Chen Yong",82},{"200606688","Wang Yue",80}};
//	printf("\nNo.             name      score\n");
//	for(i=0;i<3;i++)
//		printstruct(stud[i]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct student//全局结构体类型
//{
//	char num[10];
//	char name[20];
//	float score;
//};
//void printstruct(struct student st)
//{
//	printf("%s    %s      %g\n",st.num,st.name,st.score);
//}
//struct student InitialStruct(char *num,char *name,float score)//给结构体变量各个成员赋值
//{
//	struct student stud;
//	strcpy(stud.num,num);
//	strcpy(stud.name,name);
//	stud.score=score;
//	return stud;
//}
//int main()
//{
//	struct student student1;
//	student1=InitialStruct("200608247","Zhang San",94);//结构体初始化
//	printf("\nNo.            Name        Score\n");
//	printstruct(student1);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//struct student
//{
//	char num[10];
//	char name[20];
//	float score[3];
//	float aver;
//};
//void prt(struct student *p,int n)
//{
//	int i;
//	for(i=0;i<n;i++)
//	{
//		printf("%s %s%6.1f%6.1f%6.1f%6.1f\n",(p+i)->num,(p+i)->name,(p+i)->score[0],(p+i)->score[1],(p+i)->score[2],(p+i)->aver);
//	}
//}
//void average(struct student *p)
//{
//	p->aver=(p->score[0]+p->score[1]+p->score[2])/3;
//}
//int main()
//{
//	struct student stud[N]={{"200608247","Zhang San",75,90,94},{"200606677","Chen Yong",85,90,82},{"200606688","Wang Yue",95,70,80}};
//	struct student *pstud;
//	int j;
//	for(j=0;j<N;j++)
//	{
//		pstud=&stud[j];
//		average(pstud);
//	}
//	printf("\nNo.         Name    score1 score2 score3 average\n");
//	prt(stud,N);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	float a=12345.678;
//	printf("%6.1f\n",a);	
//	printf("12345\n");
//	printf("%6.1f\n",12.53);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define S(x) 4*(x)*x+1
//void main()
//{
//	int k=5,j=2;
//	printf("%d\n",S(k+j));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void main()
//{
//	char p[20]={'a','b','c','d'},q[]="abc",r[]="abcde";
//	strcat(p,r);printf("%s\n",p);
//	strcpy(p+strlen(q),q);printf("%s\n",p);  
//	printf("%d\n",strlen(p));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int i=5;
//	do
//	{
//		if(i%3==1)
//			if(i%5==2)
//			{
//				printf("*%d",i);break;
//			}
//		i++;
//	}while(i!=0);
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N 4
//void fun(int a[][N],int b[])
//{
//	int i;
//	for(i=0;i<N;i++)
//	{
//		b[i]=a[i][i];
//	}
//}//函数fun的功能是将二维数组中的a[0][0]、a[1][1]、a[2][2]和a[3][3]依次赋值给一维数组b。
//void main()
//{
//	int x[][N]={{1,2,3},{4},{5,6,7,8},{9,10}},y[N],i;
//	fun(x,y);
//	for(i=0;i<N;i++)printf("%d,",y[i]);
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fun(char *s)
//{
//	while(*s)
//	{
//		if(*s%2)printf("%c",*s);
//		s++;
//	}
//}
//void main()
//{
//	char a[]="BYTE";
//	fun(a);
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int fun()
//{
//	static int x=1;
//	x+=1;
//	printf("x=%d ",x);
//	return x;
//}
//void main()
//{
//	int i,s=1;
//	for(i=1;i<=5;i++)
//	{
//		s+=fun();
//		printf("s%d=%d\n",i,s);
//	}
//	printf("%d\n",s);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fun2(char a,char b)
//{
//	printf("%c %c\n",a,b);
//}
//char a='A',b='B';
//void fun1() 
//{
//	printf("%c %c\n",a,b);
//	a='C';b='D';
//	printf("%c %c\n",a,b);
//}
//void main()
//{
//	printf("%c %c\n",a,b);
//	fun1();
//	printf("%c %c\n",a,b);
//	fun2('E','F');
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *pf;
//	char *s1="China",*s2="Beijing";
//	pf=fopen("d:\\Data.txt","wb+");
//	fwrite(s2,7,1,pf);//将s2字符串写入
//	rewind(pf);//文件位置指针回到文件开头
//	fwrite(s1,5,1,pf);//写入s1字符串 将前面字符串s2的字符覆盖
//	fclose(pf);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=2,b=3,c=4;
//	a*=16+(b++)-(++c);//a=a*(16+b-(c+1));b=b+1;
//	printf("a=%d b=%d c=%d\n",a,b,c);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define  N  5
////函数功能是:求出数组周边元素的平均值并作为函数值返回给主函数中的s
//double fun ( int w[][N] )
//{
//	int i,j,k=0;
//	double s=0.0;
//	for(i=0;i<N;i++)
//		for(j=0;j<N;j++)
//		if(i==0||i==N-1||j==0||j==N-1)//只要下标中有一个为0或N-1，则它一定是周边元素
//		{
//			s+=w[i][j];//将周边元素求和
//			k++;
//		}
//	return s/k;//求周边元素的平均值
//}
//
//main ( )
//{  int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
//   int i, j; 
//   double s ;
//   printf("***** The array *****\n");
//   for ( i =0;  i<N; i++ )
//   {  for ( j =0; j<N; j++ )
//     {  printf( "%4d", a[i][j] ); }
//        printf("\n");
//   }
//   s = fun ( a );
//   printf ("***** THE  RESULT *****\n");
//   printf( "The sum is :  %lf\n",s );
//   system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int x=10;
//	printf("%d\n",x-=x+x);//x-=x+x等价于x=x-(x+x)
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int sum,pad,pAd;
//	sum=pad=5;pAd=sum++,pAd++,++pAd;
//	printf("pAd=%d\n",pAd);
//	printf("pad=%d\n",pad);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int k=5,n=0;
//	do
//	{
//		switch(k)
//		{
//			case 1:case 3:n+=1;k--;break;
//			default:n=0;k--;
//			case 2:case 4:n+=2;k--;break;
//		}
//		printf("n=%d k=%d\n",n,k);
//	}
//	while(k>0&&n<5);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int a=0;
//	scanf_s("%d",&a);
//	switch(a)
//	{
//		case 1:case 4:printf("I LOVE\n");/*当k=1或4时，执行此句，这是两种case合并成一行了。除非遇到 break,才能提前结束switch语句*/
//		case 2:case 5:printf("you!\n");break;/*当k=2或5时，执行此句。*/
//		case 3:case 6:printf("How are\n");break;/*当k=3或6时，执行此句。*/
//		case 11:printf("I LOVE YOU!\n");break;
//		default:printf("bye");/*当k不等于11234561时，执行此句，默认兜底情况。*/
//	}/*除非遇到 break,才能提前结束switch语句*/
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void f(int *q)//数组首元素值变成6
//{
//	int i=0;
//	for(;i<5;i++)(*q)++;//将数组首元素（*q）自增5次
//}
//void main()
//{
//	int a[5]={1,2,3,4,5},i;
//	f(a);//将数组名作为数组首地址进行传递
//	for(i=0;i<5;i++)printf("%d ",a[i]);
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int fun(int (*s)[4],int n,int k)
//{
//	int m,i;
//	m=s[0][k];//k是列下标
//	for(i=1;i<n;i++)
//		if(s[i][k]>m)
//			m=s[i][k];
//	return m;
//}//求二维数组第0列中最大的那个元素
//void main()
//{
//	int a[4][4]={{1,2,3,4},
//	{11,12,13,14},{21,22,23,24},{31,32,33,34}};
//	printf("%d\n",fun(a,4,0));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fun(char **p)//char **p表示指针变量p是指向一个整型指针变量,指向指针变量的指针,二级指针
//{
//	++p;//++p操作使形参p往后移动一个字符指针的位置
//	printf("%s\n",*p);//*p是Afternoon的首地址
//}
//void main()
//{//指针数组，存放每个字符串的首地址
//	char *a[]={"Morning","Afternoon","Evening","Night"};
//	fun(a);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//void fun(char *p)
//{
//	int i=0;
//	while(p[i])
//	{
//		if(p[i]==' '&&islower(p[i-1]))
//			p[i-1]=p[i-1]-'a'+'A';//将p[i-1]中的字符转换为大写
//		i++;
//	}
//}//fun函数的功能是遍历字符数组中的所有字符,
////如果某一个字符是空格并且前一个字符是小写字母的话,就把前一个字符转换为大写。
////int islower(char ch)检查ch是否为小写字母:是1;否0
//void main()
//{
//	char s1[100]="ab cd EFG!";
//	fun(s1);//调用fun函数后,实参数组名s1传给形参指针p,p也指向数组s1。
//	printf("%s\n",s1);
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	FILE *fp;
//	int k,n,a[6]={1,2,3,4,5,6};
//	fp=fopen("d:\\test.dat","w");
//	fprintf(fp,"%d%d%d\n",a[0],a[1],a[2]);
//	fprintf(fp,"%d%d%d\n",a[3],a[4],a[5]);
//	fclose(fp);
//	fp=fopen("d:\\test.dat","r");
//	fscanf(fp,"%d%d",&k,&n);
//	printf("%d %d\n",k,n);
//	fclose(fp);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fun(int array[3][3])
//{
//	int i,j,t;
//	for(i=0;i<3;i++)
//		for(j=i;j<3;j++)
//		{
//			t=array[i][j];
//			array[i][j]=array[j][i];
//			array[j][i]=t;			
//		}
//}
////行列转置
//void main()
//{
//   int i,j;
//   int array[3][3]={{100,200,300},
//                   {400,500,600},
//                   {700,800,900}};
//
//   for (i=0;i<3;i++)
//   {   for (j=0;j<3;j++)
//       printf("%7d",array[i][j]);
//       printf("\n");
//   }
//   fun(array);
//   printf("Converted array:\n");
//   for (i=0;i<3;i++)
//   {   for (j=0;j<3;j++)
//       printf("%7d",array[i][j]);
//       printf("\n");
//   }
//   system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	int i;
//	for(i=1;i<=40;i++)
//	{
//		if(i++%5==0)
//			if(++i%8==0)
//				printf("%d",i);
//	}
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char a[20]="ABCD\0EFG\0",b[]="IJK";
//	strcat(a,b);
//	printf("%s\n",a);
//	system("pause");
//	return 0;
//}