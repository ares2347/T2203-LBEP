#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//loop from i=1
	int i=1;
	while(i<n){
		printf("%d\n",i);
		i+=2;
	}
}
