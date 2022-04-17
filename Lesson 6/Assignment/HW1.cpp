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
	//input integer x:
	int x;
	printf("input x: ");
	scanf("%d",&x);
	//find furthest number from x:
	int dist=abs(a[0]-x);
	int m=0;
	for(int i=0; i<n;i++){
		if (abs(a[i]-x)>dist){
			dist=abs(a[i]-x);
			m=a[i];
		}
	}
	printf("gia tri xa x nhat la: %d", m);
}
