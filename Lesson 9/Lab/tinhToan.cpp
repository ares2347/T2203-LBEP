#include <stdio.h>
#include "function.h"
int main(){
	int n,a,b;
	bool f1, f2;
	f2=true;
	do{
		f1=true;
		do{
		menuSection();
		scanf("%d",&n);
		}while(n<1||n>6);
		if (n==1) {	
			printf("input a:");
			scanf("%d",&a);
			printf("input b:");
			scanf("%d",&b);
			f2=false;
		}
		else if (n==6) f1=false;
		else if(f2) printf("nhap lai 2 so\n"); 
		else if (n==2) printf("Ket qua la %d\n",sumFx(a,b));
		else if (n==3) printf("Ket qua la %d\n",subFx(a,b));
		else if (n==4) printf("Ket qua la %d\n",mulFx(a,b));
		else if (n==5) printf("Ket qua la %f\n",divFx(a,b));

	}while(f1);
}
