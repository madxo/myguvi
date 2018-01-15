#include<stdio.h>
int main(){
	int f=1,i,a;
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	f=f*i;
	printf("%d",f);
}
