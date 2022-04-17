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
		if(a[i]%2==1||a[i]%2==-1){
			f_Odd=i;
			break;
		}	
	}
	//find last odd number
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==1||a[i]%2==-1){
			l_Odd=i;
			break;
		}	
	}
	//Odd loop:
	for (int i=f_Odd;i<=l_Odd;i++){
		int j=f_Odd;
		while (j<l_Odd){
		//find next odd:
			int k;
			for(k=j+1;k<=l_Odd;k++){
				if (a[k]%2==1||a[k]%2==-1)
					break;
			}
		//swap
			if(a[j]>a[k]){
				int temp;
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		//loop operator
			j=k;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
