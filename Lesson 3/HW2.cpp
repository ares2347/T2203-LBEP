#include <stdio.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//i=0, start loop
	int i=0;
	while (i==0){
		n-=1;
		if (n%2==0 && n%3==0){
			i=n;
		}
	}
	printf("so can tim la %d", i);
}
