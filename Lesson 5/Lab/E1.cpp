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
	int sumOdd=0;
	int sumEven=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2!=0){
			sumOdd+=arr[i];
		}else{
			sumEven+=arr[i];
		}
	}
	printf("tong cac so chan: %d\n", sumEven);
	printf("tong cac so le: %d", sumOdd);
}
