#include<stdio.h>
int main()
{
	
	int a[]={10,20,30,40,50};
	int *p,i=1;
	
	p=&i;
	printf("%d %x\n",i,p);
	
	p=a;///배열에는 주소가 있기떄문에 포인터변수에 대입가능 &이것을 안써도됨 
	printf("%d %x %x\n",a[10], a, p);
	 
	printf("%d %d\n",a[2], p);
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",p[i]);
	}
	
}
