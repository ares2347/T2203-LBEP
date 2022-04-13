#include <stdio.h>
int main(){
	//input n
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	//tinh tong cac chu so
	int s=0;
	for(int i=n; i!=0; s+=i%10, i/=10);
	printf("tong cac chu so cua %d la %d",n,s);
}
