#include<stdio.h>
int main()
{
	int  i =6; //포인터 변수는 주소를 담기 때문에 타입에 상관없이 크기는 4바이트입니다. 
	int *p;
	int **dp;
		
	p=&i;
	dp=&p;
	
	printf("%x %x %x\n",&i, &p, &dp);
	printf("%x %x %x\n",i, p, dp);
	printf("%d %d %d\n",i, *p, **dp); 
    printf("%x %x\n",p+1,p-1);
	
	
	 
}
