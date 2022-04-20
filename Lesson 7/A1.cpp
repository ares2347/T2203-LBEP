#include <stdio.h>
#include <string.h>
int main (){
	//input number of strings
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//input string loop
	char str[n][20];
	for (int i=0; i<n;i++){
	printf("input string: ");
	scanf("%s",str[i]);
	}
	//swap string
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (strcmp(str[j],str[j+1])>0){
				char temp[20];
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
	//print array
	for (int i=0; i<n; i++){
		printf("%s\n",str[i]);
	}
}
