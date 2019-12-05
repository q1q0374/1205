#include<stdio.h>
int main()
{
	char a[4]={'a','b','c','\0'};
    char b[]="abc";
    char c[8]="abcdefg";
	char *p="abcdefg";
	char q[20];
	int i;
		
	printf("%s\n",a);
	printf("%s %d\n",b,sizeof(b));
	printf("%s\n",c);
	printf(c);
	printf("\n");
	printf(p);
	printf("\n");
	
	for(i=0;i<8;i++)
	{
		printf("%c ",*(p+i));
		//printf("%c ",p[i]);
		
	}
	printf("ÀÌ¸§ÀÔ·Â:");
	scanf("%s",q);
	printf("%c",q[0]);
	
	printf("%s´Ô ¹Ý°©½À´Ï´Ù",q);
	
}
