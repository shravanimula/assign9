#include<stdio.h>
#include<string.h>
#define size 50
int strcmp(const char*,const char*);
int main()
{
	char string1[size],string2[size];
	printf("enter a string1:");
	fgets(string1,size,stdin);
	printf("enter a string2:");
	fgets(string2,size,stdin);
	int (*fp)(const char*,const char*);
	fp=strcmp;
	fp(string1,string2);
	if(strcmp(string1,string2)==0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}
int strcmp(const char *a,const char *b)
{
	while(*a==*b)
	{
		if(*a=='\0')
			return 0;
		a++;
		b++;
	}
	return 1;
}

