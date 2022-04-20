#include <stdio.h>
#include <string.h>

int main(){
	//input string 
	char str[50];
	printf("input string : ");
	scanf("%s",str);
	int c;
	for (int i=0; i<strlen(str);i++){
		int x=(int)str[i];
		switch (x){
			case 97: c++;break;
			case 101: c++;break;
			case 105: c++;break;
			case 111: c++;break;
			case 117: c++;break;
			case 65: c++;break;
			case 69: c++;break;
			case 73: c++;break;
			case 79: c++;break;
			case 85: c++;break;
		}
		
	}
	printf("so nguyen am xuat hien trong chuoi la %d", c);
	
	
}
