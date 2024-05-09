#include<stdio.h>
#include<stdlib.h>
#define max 4
void enqueue();
void dequeue();
void display();
void exit();
int queue[max];
int rear = -1;
int front = -1;
int main(){
    int choice;
    while (1)
    {
        printf("\n.PERFORM OPRATION IN QUEUE");
        printf("\n1.insert element in the queue\n2.delete aan element in this queue\n3.display the element in this queue\n4.Exit");
        printf("\n.enter your choice:");
        scanf("%d",&choice);
        switch (choice){
        case 1:
          enqueue  ();
            break;
        case 2:
          dequeue();
          break;
        case 3:
          display();
          break;  
        case 4:
         exit(0);
         
        default:
        printf("\n.Invlid choice!!!!");
            break; 
        }
    }
    
}
void enqueue(int x){

       if (front==-1 && rear == -1)
	   {
      		 printf("enter value to insert in queue:");
				scanf("%d",&x);
         front  = rear  = 0;
         queue [rear] = x;
  		}
  		else if ((rear+1) % max == front)
  		{
  			printf("The queue is full");
		}
      else
      {
      	 printf("enter value to insert in queue:");
				scanf("%d",&x);
        rear++;
        queue[rear] = x;

      }
      
}
void dequeue()
{
   if (front == -1 && rear == -1){
   	printf("overflow");
   }

else if (front == rear){
	printf(" the queue element is %d",queue[front]);
    front = rear  = -1;
    
}
else
{
	int i;
    printf("The delete element in  this queue %d",queue[front]);
    front = (front + 1) % max;
    front++;
    printf("\n");
}
}
void display()
{
    
    if (front==-1 && rear == -1)
	{
		printf("no element in queue");
	}
    

else
{
	int i;
    while(i!=rear)
	{
    	printf("%d\n",queue[i]);
    	i = (i+1) % max;
    	
	}
	printf("%d\n",queue[i]);
}

}
