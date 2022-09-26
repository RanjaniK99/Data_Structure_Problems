#include<iostream>
using namespace std;
class Node{
	public:
		string data;
		Node *next;
};
void insert(Node **head,string item){
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
//recursive approach
string getvalue(Node *head,int index){
	if(head==NULL){
		return "";
	}
	if(index==0){
		return head->data;
	}
	else{
		return getvalue(head->next,index-1);
	}
}
 
/* string getvalue(Node *head,int index){
	int count=0;
	Node *cur=head;
	while(cur!=NULL){
	
	if(count==index)
		return cur->data;
	else{
		cur=cur->next;
		count++;
	} 
	}
	return "";
} */

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
cout<<"the element is: "<<getvalue(head,3);
return 0; 	
}
