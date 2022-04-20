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
//sorting
	int f_Odd, l_Odd;
	//find first odd number
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			f_Odd=i;
			break;
		}	
	}
	//find last odd number
	for(int i=n-1;i>=0;i--){
		if(a[i]%2!=0){
			l_Odd=i;
			break;
		}	
	}
	//Odd loop:
	for (int i=f_Odd;i<l_Odd;){
		//find next Odd
		for (int j=i+1; j<=l_Odd;j++){
			if (a[j]%2!=0){
				//swap
				if(a[i]>a[j]){
					int tmp;
					tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
				i=j;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
