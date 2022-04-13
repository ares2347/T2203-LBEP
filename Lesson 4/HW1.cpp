#include <stdio.h>
int main(){
	//input n
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	//tim uoc loop
	int s;
	for(int a=1; a<=n; a+=1){
		if (n%a==0)
			s+=a;
	}
	printf("tong cac uoc cua %d la %d",n,s);
}
