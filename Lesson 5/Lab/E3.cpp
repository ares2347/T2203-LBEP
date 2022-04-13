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
	int x;
	printf("input x: ");
	scanf("%d",&x);
	bool f=true;
	for(int i=0; i<n; i++){
		if(x==arr[i]){
			f=false;
			printf("ton tai x trong mang");
			break;
		}
	}
	if(f)
		printf("khong ton tai x trong mang");
}
