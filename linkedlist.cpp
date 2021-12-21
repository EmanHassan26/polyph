#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class node{
	private:
	Node *next,*head,*tail;
	int data,size=0;
	public:
	//insertfirst()//insertlast()//insertposition()//delet()
node(int x)
 	{
 		data=x;
 		next=NULL;
	 }
	 void insertfnode(int x){
	 	Node *newnode= new Node;
	 	newnode->data=x;
	 	if(head==NULL)
		 {
	 	   head=tail=newnode;
	 	   newnode->next=NULL;
	 	   return;
	     }
	     else
	     {
	     	newnode->next=head;
	     	head=newnode;
		 } 
		 size++; 
	 }
	  void insertlnode(int x){
	 	Node *newnode= new Node;
	 	newnode->data=x;
	 	if(head==NULL)
		 {
	 	   head=tail=newnode;
	 	   newnode->next=NULL;
	 	   return;
	     }
	     else
	     {
	     	tail->next=newnode;
	     	newnode->next=NULL;
	     	tail=newnode;
		 } 
		 size++; 
	 }
	 void insertpos(int pos,int item)
	 {
	 	Node *newnode= new Node;
	 	newnode->data=item;
	 	if(pos<0||pos>size)
	 	{
	 		cout<<"error out of range/n";
		 }
		 else if(pos==0)
		 {
		 	insertfnode(item);
		 }
		 else if(pos==size)
		 {
		 	insertlnode(item);
		 }
		 else{
		 	Node *cur= head;
		 	int i=1;
		 	while(i<pos)
		 	{
		 		cur=cur->next;
			 }
			 newnode->next=cur->next;
			 cur->next=newnode;
			 size++;
		 }
	 }
	 void removepos(int pos)
	 {
	 	if (pos< 0|| pos>size)
		cout << " out of range\n";
	   else
	   {
		Node *cur, *tcur;
		if (pos == 0)
		{
			cur = head;
			head = head->next;
			delete cur;
			size--;
			if (size == 0)
				tail = NULL;
		}
		else
		{
			cur = head->next;
			tcur = head;
			int i=1;
			while(i<pos){
				tcur = cur;
				cur = cur->next;
			}

			tcur->next = cur->next;
			if (tail == cur) 
				tail = tcur;
			delete cur;
			size--;
		}
	}
	 }	
};
int main() {
	return 0;
}
