#include <stdio.h>
#include <string.h>

int main(){
	//input string
	char s1[50], s2[50];
	printf("input string 1: ");
	scanf("%s",s1);
	printf("input string 2: ");
	scanf("%s",s2);
	//check
	//flag
	bool f;
	//check len
	if (strlen(s1)>strlen(s2)){
		//loop char in longer str
		for (int i=0; i<(strlen(s1)-strlen(s2));i++){
		 	//reset flag
			 f=true;
			 //loop char in shorter len then compare
			for (int j=0;j<strlen(s2);j++){
				//switch flag and break if flase
				if (s1[i+j]!=s2[j]){
					f=false;
					break;
				} 
			}
			//break loop if true
			if(f) break;	
		}
		//print
		if (f) printf("chuoi s2 la chuoi con cua s1");
		else printf("khong co chuoi nao la chuoi con");	
	}else{
		//loop char in longer str
		for (int i=0; i<(strlen(s2)-strlen(s1));i++){
			//reset flag
			f=true;
			//loop char in shorter len then compare
			for (int j=0;j<strlen(s1);j++){
				//switch flag and break if flase
				if (s2[i+j]!=s1[j]){
					f=false;
					break;
				} 
			}
			//break loop if true
			if (f) break;	
		}
		//print
		if (f) printf("chuoi s1 la chuoi con cua s2");
		else printf("khong co chuoi nao la chuoi con");	
	}
}
