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
int Delete(int data){
	Node *temp = new Node();
		Node *prev = new Node();

	temp = head;
	while(temp!=0){
		if(temp->data==data){
		 	prev->link =temp->link ;
		 	
		 	free(temp);
		 	return 0;
		}
		prev  = temp;
		temp = temp->link;
	}

}
void Print(){
	Node* temp;
	temp = head;
	while(temp!=0){
		cout<<" "<<temp->data;
		temp = temp->link;
	}
	cout<<"\n";
}
int main() {
	Insert(34);
	Insert(45);
	Insert(12);
	Insert(4);
	Insert(41);
	Insert(57);
	Insert(90);
	cout<<"Before Delete\n";
	Print();
	Delete(45);
	cout<<"After Delete\n";
	Print();
	return 0;
}
