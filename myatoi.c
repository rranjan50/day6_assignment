#include<stdio.h>
int main()
{
	char str[100],size;
//	printf("enter the size of string:\n");
//	scanf("%d",&size);
	gets(str);
	myatoi(str);
}
void myatoi(char *p)
{
	int v=0,flag=0;
	if(*p=='-')
	{
		flag=1;
		p++;
	}
	while(*p)
	{
		v=v*10+(*p-48);
		p++;
	}
	if(flag==1)
	{
		v=-v;
	}
	printf("the integer is %d\n",v);
}



