#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* link;
};
int main() {
	Node* A;
	A= 0;
	Node *temp =new Node();
	temp->data = 2;
	temp->link =0;
	A = temp;
	
	cout<<temp->data;
	return 0;
}
