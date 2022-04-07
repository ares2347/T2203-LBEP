#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//i=1, s=0, start loop 
	int i=1;
	int s=0;
	while(i<=n/2){
		if(n%i==0)
			s+=i;
		i+=1;
	}
	if(s==n)
		printf("%d la so hoan hao", n);
	else
		printf("%d khong phai so hoan hao", n);
	
}
