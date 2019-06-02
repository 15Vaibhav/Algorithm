#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};
struct Node* head =0;
void Insert(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->link=head;
	head = temp;
}
int Insert_at(int data,int p){
	Node *temp = new Node();
	Node *temp1 = new Node();
	temp1->data = data;
	temp = head;
	int c =1;
	while(c!=0){
		if(c==p){
		 	temp1->link = temp->link;
		 	temp->link = temp1;
		 	return 0;
		}
		temp = temp->link;
		c++;
	}

}
void Print(){
	Node* temp;
	temp = head;
	while(temp!=0){
		cout<<temp->data;
		temp = temp->link;
	}
}
int main() {
	Insert(34);
	Insert(45);
	Insert(57);
	Insert(90);
	Insert_at(48,2);
	Print();
	return 0;
}
