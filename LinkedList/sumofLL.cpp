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
void sumofLL(Node **head){
	Node *cur=*head;
	int tot=0;
	while(cur!=NULL){
		tot=tot+cur->data;
		cur=cur->next;
	}
	cout<<"sum of the linkedList is:"<<tot;
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
cout<<endl;
sumofLL(&head);
return 0; 	
}
