#include<stdio.h>
void england(){
	printf("you are in england\n");
	india();
	return;
}
void australia(){
	printf("you are in australia\n");
	england();
	return;
}
void india(){ 
	printf("you are in indian\n");
	australia();
	return;
}
int main(){
	india();
	return 0;
}
	
