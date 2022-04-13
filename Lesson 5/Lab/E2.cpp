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
	int c=0;
	for(int i=0; i<n;i++){
		if(arr[i]%2!=0&&i%2==0){
			sumOdd+=arr[i];
			c++;	
		}
	}
	float averageOdd=(float)sumOdd/c;
	printf("trug binh cong cac so le la: %f",averageOdd);
}
