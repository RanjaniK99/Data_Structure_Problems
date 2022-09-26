#include<iostream>
using namespace std;
class Node{
	public:
		string data;
		Node*next;
};
void insert(Node **head,string item){
	Node *newNode=new Node();
	newNode->data=item;
	newNode->next=*head;
	*head=newNode;
}
void display(Node *n){
	cout<<"the linked list is: ";
	while(n->next!=NULL){
	cout<<n->data<<" -> ";
	n=n->next;	
	}
	cout<<n->data;
}
Node* reverse(Node **head){
	Node *Next=NULL;
	Node *prev=NULL;
	while(*head!=NULL){
	   Next=(*head)->next;
	   (*head)->next=prev;
	   prev=*head;
	   *head=Next;	
	}
	*head=prev;
}
int main(){
	Node *head=NULL;
	insert(&head,"index");
    insert(&head,"by");
    insert(&head,"for_ll");
    insert(&head,"example");
    insert(&head,"is");
    insert(&head,"This");
    insert(&head,"Hello");
    display(head);
    cout<<endl;
    reverse(&head);
    display(head);
    cout<<endl;
}
