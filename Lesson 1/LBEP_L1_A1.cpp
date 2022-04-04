#include <stdio.h>
int main(){
	//input a,b,c
	printf("dien so thu nhat: ");
	int a;
	scanf("%d",&a);
	
	printf("dien so thu hai: ");
	int b;
	scanf("%d",&b);
	
	printf("dien so thu ba: ");
	int c;
	scanf("%d",&c);
	
	//so sanh a, b, c
	if (a<b) {
		if(a<c){
			printf("so nho nhat la %d", a );
		} else{
			printf("so nho nhat la %d", c );
		}
	}else{
		if(b<c){
			printf("so nho nhat la %d", b );
		}else{
			printf("so nho nhat la %d", c );
		}
	}
}
