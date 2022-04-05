#include <stdio.h>

int main () {
	int a;
	printf("input an integer: ");
	scanf("%d",&a);
	
	if(a<=8 and a>=2) {
		if (a>=2 && a<=7) {
			printf("day la thu %d\n", a);
		}else{
			printf("day la chu nhat");
		}
	}else{
		printf("khong phai ngay trong tuan");
	}	
}
