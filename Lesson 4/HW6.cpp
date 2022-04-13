#include <stdio.h>
int main(){
	//input n
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	//kiem tra chu so le
	int a=n;
	int i;
	for(;a!=0;a/=10){
		i=i*10+a%10;
		if(i%2==0){
			printf("so %d co chua chu so chan",n);
			break;
		}
	}
	if(i%2!=0)
		printf("so %d chua toan chu so le",n);
}
	
