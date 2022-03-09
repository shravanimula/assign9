#include <stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);
void rem(int,int);
void swap(int,int);
void square(int,int);
void swap_withouttemp(int,int);
void cube(int,int);
void sum_two(int,int);
int main()
{
	int a=10,b=5;
	void (*f[10])(int,int)={add,sub,mul,divi,rem,swap,square,cube,swap_withouttemp,sum_two};
	f[0](a,b);
	f[1](a,b);
	f[2](a,b);
	f[3](a,b);
	f[4](a,b);
	f[5](a,b);
	f[6](a,b);
	f[7](a,b);
	f[8](a,b);
	f[9](a,b);
	return 0;
}
void add(int a,int b)
{
	printf("add=%d\n",a+b);
}
void sub(int a,int b)
{
     	printf("sub=%d\n",a-b);
}
void mul(int a,int b)
{
    	printf("mul=%d\n",a*b);
}
void divi(int a,int b)
{
       	printf("divi=%d\n",a/b);
}
void rem(int a,int b)
{
	    printf("rem=%d\n",a%b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swap values:%d\t%d\n",a,b);
}
void square(int a,int b)
{
	printf("square=%d\n",a*a*b*b);
}
void cube(int a,int b)
{
       	printf("cube=%d\n",a*a*a*b*b*b);
}
void swap_withouttemp(int a,int b)
{
	  a=a+b;
	  b=a-b;
	  a=a-b;
	  printf("ater swap without temp=%d\t%d\n",a,b);
}
void sum_two(int a,int b)
{
       	printf("sum of two numbers=%d\n",(a+b)/2);
}
