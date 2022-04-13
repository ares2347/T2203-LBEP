#include <stdio.h>
int main(){
	//input a,b
	int a,b;
	do{
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	}while((a<=0 || b<=0) && a<b );
	
	for(int i=a; i<=b; i+=1){
		int c=0;
		for(int t=2; t<=i/2; t+=1){
			if(i%t==0){
				c+=1;
				break;
			}
		}
		if(c==0)
			printf("%d\n",i);
	}
}
