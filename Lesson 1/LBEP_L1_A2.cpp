#include <math.h>
#include <stdio.h>
int main(){
	//nhap ba so a, b, c
	printf("dien so a: ");
	int a;
	scanf("%d",&a);
	
	printf("dien so b: ");
	int b;
	scanf("%d",&b);
	
	printf("dien so c: ");
	int c;
	scanf("%d",&c);
	
	//giai phuong trinh ax2 + bx + c = 0
	int delta;
	delta = b*b - 4*a*c;
	if (delta>=0){
		int sqrtDelta = sqrt(delta);
		int x1 = (-b+sqrtDelta)/(2*a);
		int x2 = (-b-sqrtDelta)/(2*a);
		if(x1==x2){
			printf("nghiem cua phuong trinh la %d ", x1);
		}else{
			printf("nghiem cua phuong trinh la %d, %d ", x1, x2);
		}
	}else{
		printf("phuong trinh vo nghiem");
	}
}
