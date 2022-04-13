#include <stdio.h>
int main(){
	//input a,b
	int a,b;
	do{
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	}while(a<=0 || b<=0);
	//tim uoc chung lon nhat
	for(int i=a; ; i-=1){
		if (a%i==0 && b%i==0){
			printf("uoc chung lon nhat cua %d va %d la %d\n",a,b,i);
			break;
		}
	}
	//tim boi chung nho nhat
	for(int i=a;;i+=1){
		if (i%a==0 && i%b==0){
			printf("boi chung nho nhat cua %d va %d la %d",a,b,i);
			break;
		}
	}
}
