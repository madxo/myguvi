#include<stdio.h>
int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a%2==0)
	a++;
	else
	a=a+2;
	for(i=a;i<b;i=i+2)
	printf("%d \t",i);
	return 0;
}
