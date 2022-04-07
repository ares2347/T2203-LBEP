#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//I=2,A=1,B=0, loop
	int a=1;
	int b=0;
	int i=2;
	if(n==0)
		printf("so can tim la %d",b);
	else if(n==1)
		printf("so can tim la %d",a);
	else{
		while(i<=n){
			a=a+b;
			b=a-b;
			i+=1;		
		}
		printf("so can tim la %d",a);
	}
}
