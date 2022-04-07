#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//a=0, loop
	int a=0;
	 while (n>0){
	 	a=a*10+n%10;
	 	n=n/10;
	 }
	 printf("so dao nguoc cua so da nhap la %d",a);
}
