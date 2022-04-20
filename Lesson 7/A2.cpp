#include <stdio.h>
#include <string.h>
int main(){
	//input n
	int n;
	printf("input n: ");
	scanf("%d",&n);
	//input string
	char str[n][50];
	for (int i=0; i<n;i++){
		printf("input string no %d: ",i);
		scanf("%s",str[i]);
	}
	//input search string 
	char srcStr[50];
	printf("input search string : ");
	scanf("%s",srcStr);
	//compare string
	bool f=true;
	for (int i=0; i<n;i++){
		if(strcmp(srcStr,str[i])==0){
			f=false;
			break;
		}
	}
	if (f) printf("chuoi %s khong co trong danh sach",srcStr);
	else printf("chuoi %s co o trong danh sach",srcStr);
			
}
