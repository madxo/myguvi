#include<stdio.h>
int main()
{
	int beg,end,dig,sum,temp,cube,i,num;
    scanf("%d%d",&beg,&end);
	
	for(i=beg;i<=end;i++)
	{
		sum=0;
		num=i;
		do
		{
			dig=num%10;
			num=num/10;
			cube=dig*dig*dig;
			sum=sum+cube;
		}
		while(num>0);
		if(sum==i)
		printf("\n\t%d",i);
	}
	
	printf("\n\n");
		
}
