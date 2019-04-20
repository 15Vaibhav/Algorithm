#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
struct node{
	int data;
	struct node *next;
	
}*start =NULL;



void create(){
	char ch;
	do{
	struct node *new_node, *current;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	if(start==NULL){
		start = new_node;
		current = new_node;
		
	}
	else{
		current->next = new_node;
		current= new_node;
		
	}
	
 printf("nDo you want to creat another : ");
 ch=getchar();
 }while(ch!='n');
}


void display()
{
struct node *new_node;
 printf("The Linked List : n");
 new_node=start;
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
  printf("NULL");
}

int main(void) {
	// your code goes here
	create();
display();
	return 0;
}

