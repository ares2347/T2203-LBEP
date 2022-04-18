#include <stdio.h>
int main() {
	int n;
	do {
	printf("input n:");
	scanf("%d",&n);
	}while(n<=0);
	int a[n];
	int i=0;
	for(int i=0; i<n;i++){
		bool f=false;
		printf("input number %d: ",i);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				f=true;
				printf("so nay da ton tai\n");
				break;
			}
		}
		if(f)
			i--;
	}

	
	for (int i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
}
	
