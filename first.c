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
//	getchar();//��ֹ����
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
//	getchar();
//	return 0;
//}
////һ��������ͨ��ָ�뱣����һ���ַ���,��ô����ַ���������Ϊ�����ķ���ֵ,��Ϊ�����Ի�ȡ
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
//	printf("ages[1] = %i\n",ages[1]);// �з���10�������� ��%i ��%d û������%i ����ʽд�����������͸�ʽ��
//	change(ages);
//	printf("ages[1] = %i\n",ages[1]);//%i��ʾ�з���ʮ��������
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
//    printf("����ַ���%c \n", *a);  /*����ַ���ʹ��"%c"*/
//    printf("����ַ���%c \n", *(a+1) );  /*����ַ���ʹ��"%c"*/
//    printf("����ַ�����%s \n", a); /*����ַ�����ʹ��"%s"������a֮ǰ�������Ǻ�"*"  */
//    system("pause");  /*Ϊ���ܿ���������*/
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
//	char ch = getchar();//�����ַ�
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
// str[0]�ַ���"hello"���׵�ַ��str[0]+1���ַ���"hello"�ڶ����ַ�'e'�ĵ�ַ��str[2]=str+2:�������ַ���"world"���׵�ַ
// str[1]�ַ���"C++"���׵�ַ
// str[2]�ַ���"world"���׵�ַ

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
//	*s=a[0];//����Ϊ��һ��ֵ��С
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
//	x -= x + x;//���������+�����ȼ�����-=,��-=�Ľ�Ϸ���Ϊ��������
//	//���Ա��ʽx-=x+x���Ա�ʾ��x=x-(x+x)=10-(10+10)=-10
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
//	while(*t++);//while(*t++)����ѭ��ֱ��*tΪ'\0'
//	t--;//t-1,��ʱ�ַ�ָ��tָ���ַ��������һ���ַ�
//	return (t-s);//����Ϊsָ���ַ�������׵�ַ���ַ������׵�ַ
// //����return(t-s)���Ƿ����ַ��������ַ����ĳ���
//}//����s��ָ�ַ����ĳ���
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
//	int x[3][2]={0},i;//�����ά����x[3][2]����ʼ����ֵȫΪ0
//	for(i=0;i<3;i++)scanf("%d",x[i]);
// ����x[0]��x[1]��x[2]�ֱ��ʾ����x�е�һ�С��ڶ��к͵�������Ԫ�صĵ�ַ��
// ����forѭ���е���scanf���������3������2��4��6�ֱ�ֵ����x[0][0],x[1][0],x[2][0]��
//	printf("%3d%3d%3d\n",x[0][0],x[0][1],x[1][0]);//����x[0][1]��Ϊ��ʼʱ��0��
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int j;float y;char name[50];
//	scanf("%2d%3f%s",&j,&y,name);//���еĸ�ʽ�������˵��������
//	//�ڰٷֺ�(%)���ʽ��֮��������������ƴӶ�Ӧ����������ַ�����
//	//��ʽ���뺯��,�����û�ָ���ĸ�ʽ�Ӽ����ϰ��������뵽ָ���ı����С�
//	printf("j=%2d\ny=%3f\nname=%s\n",j,y,name);//����j��ֵΪ55,y��ֵΪ566.0,�ַ�����nameΪ7777abc
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *s={"abc"};
//	do
//	{printf("%d",*s%10);++s;}//*s%10�൱��(*s)%10ÿ�ζ��ַ���ASCII��ֵȡ����
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
//	static int a=1;//��̬�ֲ�����a,�ھ�̬�洢���ڷ���洢��Ԫ,�ڳ������������ڼ䶼���ͷš�
//	n+=a++;
//	return n;//4 5
//}

//#include <stdio.h>
//void fun(int a,int b)//�������β�Ϊ��ͨ������
//{
//	int t;
//	t=a;a=b;b=t;
//}//�ں������ù�����,�βε�ֵ�����ı�,����Ӱ��ʵ�ε�ֵ��
//int main()
//{
//	int c[10]={1,2,3,4,5,6,7,8,9,0},i;
//	for(i=0;i<10;i+=2)fun(c[i],c[i+1]);	
//	for(i=0;i<10;i++)printf("%d, ",c[i]);//����c�е�Ԫ�ص�ֵ��û�б仯��
//	printf("\n");//��������ʱ,ʵ�ε�ֵ���͸��β�,�����ܰ��βε�ֵ����ش��͸�ʵ�Ρ�
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//void fun(int *a,int *b)
//{
//	int t;
//	t=*a;*a=*b;*b=t;//����ָ��a��b��ָ������ݣ�������a��bֵ
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
//void f(struct S *p)//�Խṹ�����s�еڶ�����Ա���������е����ݽ��д�С�����ѡ������
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
////�����ڵ��ú���fʱ,��������f�Ĳ���ֻ�ǽṹ����c��ջ�е�һ������,
////����f�������в���ֻ�����������ݿ������е��޸�,��Щ������Ӱ�����c��ֵ��
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int a=3,b=5;//ȫ�ֱ���
//
//int main()
//{
//	int maxs(int a,int b);//����maxs����
//	int a=8;//����ֲ�����a
//	printf("max=%d\n", maxs(a,b));
//	system("pause");
//	return 0;
//}
//int maxs(int a,int b)//����maxs����
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
//	c=maxs(a,b);//ͨ������������max����
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
//	int (*p)(int,int);//����ָ������ָ�����
//	p=maxs;//pָ��maxs����
//	printf("please input two numbers:\n");
//	scanf("%d%d",&a,&b);
//	c=(*p)(a,b);//ͨ��ָ�����p����maxs����
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
//	void (*p)(int);//����ָ������ָ�����p
////void��ʾp��ָ��ĺ����޷���ֵ,����������int��ʾ�ú���ֻ��һ��int���βΡ�
//	srand((unsigned)time(NULL));//ͨ��time��������ȡ�����������
//	r=rand()%2;//���������0��1
//	p=game;//pָ��game����
//	(*p)(r);//ͨ��p����game����
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int *seek(int (*pointer)[4],int k)
//{//�β�pointer(����ָ�����)��ָ�����4��int��Ԫ�ص�һά�����ָ�������
//	int *pt;
//	pt=*(pointer+k);//pt��ֵ��&score[k][0]
//	return pt;
//}//����ָ��ĺ���
//int main()
//{
//	int score[4][4]={{70,60,80,210},{75,70,85,230},{90,60,70,220},{85,70,90,245}};
//	//��������,�������
//	int *p,i,n;
//	printf("Please input the class number:");
//	scanf("%d",&n);//����Ҫ�ҵİ༶���
//	printf("The score of No.%d are:\n",n-1);
//	printf("Exer\tRead\tLesson\tTotal\n");
//	p=seek(score,n-1);//����seek����,����score[n][0]��ַ
//	for(i=0;i<4;i++)
//		printf("%d\t",*(p+i));//���score[n][0]-score[n][3]��ֵ
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
//		(*p).num,(*p).name,(*p).sex,(*p).score);//%g�Զ�ѡ����ʵı�ʾ��
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
//struct student//ȫ�ֽṹ������
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
//struct student//ȫ�ֽṹ������
//{
//	char num[10];
//	char name[20];
//	float score;
//};
//void printstruct(struct student st)
//{
//	printf("%s    %s      %g\n",st.num,st.name,st.score);
//}
//struct student InitialStruct(char *num,char *name,float score)//���ṹ�����������Ա��ֵ
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
//	student1=InitialStruct("200608247","Zhang San",94);//�ṹ���ʼ��
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
//}//����fun�Ĺ����ǽ���ά�����е�a[0][0]��a[1][1]��a[2][2]��a[3][3]���θ�ֵ��һά����b��
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
//	fwrite(s2,7,1,pf);//��s2�ַ���д��
//	rewind(pf);//�ļ�λ��ָ��ص��ļ���ͷ
//	fwrite(s1,5,1,pf);//д��s1�ַ��� ��ǰ���ַ���s2���ַ�����
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
////����������:��������ܱ�Ԫ�ص�ƽ��ֵ����Ϊ����ֵ���ظ��������е�s
//double fun ( int w[][N] )
//{
//	int i,j,k=0;
//	double s=0.0;
//	for(i=0;i<N;i++)
//		for(j=0;j<N;j++)
//		if(i==0||i==N-1||j==0||j==N-1)//ֻҪ�±�����һ��Ϊ0��N-1������һ�����ܱ�Ԫ��
//		{
//			s+=w[i][j];//���ܱ�Ԫ�����
//			k++;
//		}
//	return s/k;//���ܱ�Ԫ�ص�ƽ��ֵ
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
//	printf("%d\n",x-=x+x);//x-=x+x�ȼ���x=x-(x+x)
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
//		case 1:case 4:printf("I LOVE\n");/*��k=1��4ʱ��ִ�д˾䣬��������case�ϲ���һ���ˡ��������� break,������ǰ����switch���*/
//		case 2:case 5:printf("you!\n");break;/*��k=2��5ʱ��ִ�д˾䡣*/
//		case 3:case 6:printf("How are\n");break;/*��k=3��6ʱ��ִ�д˾䡣*/
//		case 11:printf("I LOVE YOU!\n");break;
//		default:printf("bye");/*��k������11234561ʱ��ִ�д˾䣬Ĭ�϶��������*/
//	}/*�������� break,������ǰ����switch���*/
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void f(int *q)//������Ԫ��ֵ���6
//{
//	int i=0;
//	for(;i<5;i++)(*q)++;//��������Ԫ�أ�*q������5��
//}
//void main()
//{
//	int a[5]={1,2,3,4,5},i;
//	f(a);//����������Ϊ�����׵�ַ���д���
//	for(i=0;i<5;i++)printf("%d ",a[i]);
//	printf("\n");
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//int fun(int (*s)[4],int n,int k)
//{
//	int m,i;
//	m=s[0][k];//k�����±�
//	for(i=1;i<n;i++)
//		if(s[i][k]>m)
//			m=s[i][k];
//	return m;
//}//���ά�����0���������Ǹ�Ԫ��
//void main()
//{
//	int a[4][4]={{1,2,3,4},
//	{11,12,13,14},{21,22,23,24},{31,32,33,34}};
//	printf("%d\n",fun(a,4,0));
//	system("pause");
//}

//#include <stdio.h>
//#include <stdlib.h>
//void fun(char **p)//char **p��ʾָ�����p��ָ��һ������ָ�����,ָ��ָ�������ָ��,����ָ��
//{
//	++p;//++p����ʹ�β�p�����ƶ�һ���ַ�ָ���λ��
//	printf("%s\n",*p);//*p��Afternoon���׵�ַ
//}
//void main()
//{//ָ�����飬���ÿ���ַ������׵�ַ
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
//			p[i-1]=p[i-1]-'a'+'A';//��p[i-1]�е��ַ�ת��Ϊ��д
//		i++;
//	}
//}//fun�����Ĺ����Ǳ����ַ������е������ַ�,
////���ĳһ���ַ��ǿո���ǰһ���ַ���Сд��ĸ�Ļ�,�Ͱ�ǰһ���ַ�ת��Ϊ��д��
////int islower(char ch)���ch�Ƿ�ΪСд��ĸ:��1;��0
//void main()
//{
//	char s1[100]="ab cd EFG!";
//	fun(s1);//����fun������,ʵ��������s1�����β�ָ��p,pҲָ������s1��
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
////����ת��
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