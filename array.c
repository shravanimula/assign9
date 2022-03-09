#include<stdio.h>
#define size 50
void search(const int ,int *,int);
int main()
{
	int b,n;
	int a[size],i;
	printf("size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched:");      	        
	scanf("%d",&b);
	void (*fp)(const int,int *,int);
	fp=search;
	fp(n,a,b);
	return 0;
}
void search(const int n,int *a, int b)
{
	int element,i;
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			element=1;
			break;
		}
	}
	if(element==1)
	{
		printf("%d is present in the array",b);    
	} 
	else 
	{  
	       	printf("%d is not present in the array",b); 
	}
}	

