#include<stdio.h>
int main()
{
	int  i =6; //������ ������ �ּҸ� ��� ������ Ÿ�Կ� ������� ũ��� 4����Ʈ�Դϴ�. 
	int *p;
	int **dp;
		
	p=&i;
	dp=&p;
	
	printf("%x %x %x\n",&i, &p, &dp);
	printf("%x %x %x\n",i, p, dp);
	printf("%d %d %d\n",i, *p, **dp); 
    printf("%x %x\n",p+1,p-1);
	
	
	 
}
