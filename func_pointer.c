#include <stdio.h>
int fun(int*);
int fun_one(int*);
int fun_two(int*);
int fun_three(int*);
int fun_last(int*);
int main()
{
    int p=8;
    int *q=&p;
    int (*a[5])(int *q)={fun,fun_one,fun_two,fun_three,fun_last};
    printf("%d\n",a[0](q));
    printf("%d\n",a[1](q));
    printf("%d\n",a[2](q));
    printf("%d\n",a[3](q));
    printf("%d\n",a[4](q));
}
int fun(int *q)
{
	    return *q;
}
int fun_one(int *q)
{
	    return *q;
}
int fun_two(int *q)
{
	    return *q;
}
int fun_three(int *q)
{
	    return *q;
}
int fun_last(int *q)
{
	    return *q;
}
