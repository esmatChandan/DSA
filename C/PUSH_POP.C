#include<stdio.h>
#include<stdlib.h>
#define n 4

int top=-1;
int stack[n];
void push();
void pop();
void show();

int main (){
	int choice;
	while(1){
		printf("\n push & pop opration in a stack ");
		printf("\n1.push the element\n2.pop the element \n3.show the element \n4.end.. ");
		printf("\n\n enter the choice : ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
			default :
				printf("\n invalid choice...:");
				
					
		}
	}
}      
    void push(){
    	int x;
    	if (top == n-1){
    	printf("\n overflow ");
	}
	 else{
	 	
	 	printf("\n enter a element to be enter your stack  :");
	 	scanf("%d",&x);
	 	top++;
	 	stack[top]=x;
	}
    
    
	 }
	void pop(){
		if(top ==-1){
			printf("\nthe stack is underflow");
		} 
		else{
			printf("\n pop emement in the stack or delete in a stack : %d",stack[top]);
			--top;
		}
	}
	void show(){
		
		if (top==-1){
			printf("\n underflow:\n");
		}
		else{
			int i;
			printf("\n element in the stack :\n");
			for(i = top;i >= 0; --i)
				printf("%d\n",stack[i]);
		}
	}












