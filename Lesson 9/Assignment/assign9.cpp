#include <stdio.h>
#include "assign9.h"
int main(){
	int n, c;
	char arr[n][50];
	
	do{
		selectMenu();
		scanf("%d",&c);
		switch (c){
			case 1: n=nhapSo(n);break;
			case 2: nhapTen(arr,n);break;
			case 3: sapXep(arr,n);break;
			case 4: inDanhSach(arr,n);break;
		}
	}while(c!=5);
}
