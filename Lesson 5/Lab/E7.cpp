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
	int s=0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			int z=arr[i];
			for(int j=i+1;j<n;j++){
				if (arr[j]>0)
					z+=arr[j];
				else
					break;
			}
			if (z>s)
				s=z;
		}
	}
	printf("chuoi so duong lien tiep co tong lon nhat la %d", s);
}

