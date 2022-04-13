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
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2!=0){
			printf("so le cuoi cung cua mang la %d", arr[i]);
			break;
		}
	}
}
