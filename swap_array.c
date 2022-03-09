#include<stdio.h>     
#define size 50
void swap(int * const a1,int * const a2,int n)
{
	int i=0,temp;
	for(i=0;i<n;i++)
	{
		temp = *(a1+i);
		*(a1+i) = *(a2+i); 
		*(a2+i) = temp;
	}
}             
int main()
{
	int a1[size] ,a2[size],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter 2nd array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}
	printf("Before swapping\n");
	for(i=0;i<n;i++)
	{	
		printf("a1[%d]=%d a2[%d]=%d\n",i,a1[i],i,a2[i]);
	}
	void (*fp)(int *const a1,int *const a2,int n);       
	fp=swap;                                         
	fp(a1,a2,n);                                 
	printf("After swapping\n"); 
	for(i=0;i<n;i++)
	{	
		printf("a1[%d]=%d a2[%d]=%d\n",i,a1[i],i,a2[i]);
	}
}
