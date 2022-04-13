#include <stdio.h>
int main(){
	//input n
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	//chu so lon nhat
	int i=n;
	int a=0;
	do{
		if (i%10>=a)
			a=i%10;
		i/=10;
	}while(i!=0);
	printf("Chu so lon nhat cua %d la %d",n,a);
}
