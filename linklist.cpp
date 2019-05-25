#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node* link;
};
Node *head =0;
void Insert(int x){
	Node *temp = new Node();
	temp->data =x;
	temp->link=head;
	head = temp;
}
void Print(){
	Node *temp =0;
	temp =head;
	while(temp!=0){
	cout<<temp->data;
	cout <<" ";
	temp = temp->link;
	}
cout <<"\n";

}

int main() {
	int n=0,i=0,x=0;
	

	// your code goes here
	cout<<"Enter the No of Insertions\n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter the no\n";
		cin>>x;
		Insert(x);
		Print();
	}
	return 0;
}	
