#include <stdio.h>
int main(){
	int n;
	do{
	printf("input n: ");
	scanf("%d",&n);
	}while(n<=0);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("input number: ");
		scanf("%d",&arr[i]);
	}
	int min=0;
	for (int i=0; i<n;i++){
		if(arr[i]>0){
			min = arr[i];
			break;
		}
	}
	for(int i=0; i<n;i++){
		if(arr[i]<=min&&arr[i]>0)
			min=arr[i];
	}
	if(min!=0)
		printf("so duong nho nhat la %d",min);
	else
		printf("ko co so nguyen duong trong mang");
}
