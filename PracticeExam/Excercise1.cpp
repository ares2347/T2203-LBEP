#include <stdio.h>
int main(){
	//input n
	int n;
	printf("Please input integer n: ");
	scanf("%d",&n);
	//condition
	if(n<=0) printf("%d is not a valid value",n);
	else {
		float Sum=0;
		for(int i=1;i<=n;i++){
			Sum+=(float)1/i;
		}
		printf("The value of S(%d) is %f", n, Sum);
	}	
}
