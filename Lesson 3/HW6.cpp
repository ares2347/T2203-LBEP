#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//A=1,B=0, loop
	int a=1;
	int b=0;
	if(n==0)
		printf("khong ton tai tiem can duoi cua %d thuoc day Fibonaci",n);
	else if(n==1)
		printf("so can tim la %d",b);
	else{
		while(a<n){
			a=a+b;
			b=a-b;		
		}
		if(a==n)
			printf("so %d thuoc day Fibonacci", n);
		else
			printf("so can tim la %d",b);
	}
}
