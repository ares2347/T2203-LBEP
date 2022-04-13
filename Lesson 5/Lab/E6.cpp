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
	int c=0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			int d=1;
			for(int j=i+1;j<n;j++){
				if (arr[j]>0)
					d+=1;
				else
					break;
			}
			if (d>c)
				c=d;
		}
	}
	printf("so luong so nguyen duong lien tiep lon nhat la %d", c);
}
