#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	int hex=0,rem=0,i=1;
	while(num!=0)
	{
		rem=num%16;
		num=num/16;
		hex=hex+rem*i;
		i=i*10;
	}
	printf("%d",hex);
	return 0;
	getch();
}
