#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
void insert(Node **head,int item){
	Node *newNode=new Node();
	newNode->data=item;
	newNode->next=*head;
	*head=newNode;
}
void display(Node *n){
	cout<<"The elements are:";
	while(n->next!=NULL){
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<n->data;
}
int main(){
Node *head=NULL;
insert(&head,5);
insert(&head,10);
insert(&head,15);
insert(&head,20);
insert(&head,25);
insert(&head,30);
insert(&head,35);
display(head);
return 0; 	
}
