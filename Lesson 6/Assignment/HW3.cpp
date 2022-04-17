#include <stdio.h>
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
	printf("doan can tim la [%d,%d]",a[0],a[n-1]);
}
