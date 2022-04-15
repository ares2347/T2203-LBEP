#include <stdio.h>
int main() {
	int n;
	do {
	printf("input n:");
	scanf("%d",&n);
	}while(n<=0);
	int a[n];
	for (int i=0; i<n;i++){
		printf("input number:");
		scanf("%d",&a[i]);
		for(int j=i-1; j>=0; j--){
			if(a[j]==a[i]){
				printf("so %d bi trung, vui long nhap lai: ",a[i]);
				scanf("%d",&a[i]);
			}
		}	
	}
	
	for (int i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
}
