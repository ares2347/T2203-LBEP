#include <stdio.h>
int main(){
	//input n
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	//tim chu so dau tien 
	int i=n;
	for(; i>=10; i/=10);
	printf("Chu so dau tien cua %d la %d",n,i);
}
