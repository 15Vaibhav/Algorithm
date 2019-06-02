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
int Reverse(){
Node *prev,*current,*next;
current = head;
prev = 0;

while(current!=0){
next = current->link;
current->link = prev;
prev = current;
current = next;
}
	head = prev;
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
	cout<<"Before Reverse\n";
	Print();
	 Reverse();
	 cout<<"After Reverse\n";
	 Print();
	return 0;
}
