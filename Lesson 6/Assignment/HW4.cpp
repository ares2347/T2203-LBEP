#include <stdio.h>
#include <math.h>
int main(){
	//input integer n:
	int n;
	do{
		printf("input n: ");
		scanf("%d",&n);
	}while(n<=0);
	//input array loop:
	int a[n];
	for(int i=0;i<n;i++){
		printf("input number %d: ",i);
		scanf("%d",&a[i]);
	}
	//sorting:
	for(int i=0;i<n;i++){
		for(int j=0; j<n-i-1;j++){
			int temp=0;
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int y;
	if (abs(a[0])>=abs(a[n-1]))
		y=abs(a[0]);
	else
		y=abs(a[n-1]);
	printf("doan can tim la [%d,%d]",y,-y);
}
