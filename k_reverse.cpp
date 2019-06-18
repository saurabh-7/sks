#include<bits/stdc++.h>

using namespace std;

class Node
{
	public:
		int val;
		Node *next;
};

Node* reverse(Node *head,int k)
{
	Node *prev=NULL,*next=NULL;
	Node *curr=head;	int i=0;
	while(curr!=NULL && i<k)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		i++;
	//	cout<<"$$"<<curr<<'\t'<<prev<<i<<'\t'<<endl;
	}
	//cout<<"##"<<curr<<'\t'<<prev; exit(0);
//	exit(0);
	if (next != NULL)  
    	head->next = reverse(next, k);  
  	cout<<"^^"<<prev<<endl;
  
    return prev;  
}

int main()
{
	int k=2;
	
    Node* head = new Node(); 
	Node* second=new Node();
	Node* third=new Node();
	Node* four=new Node(); 
	Node* five=new Node();
    cout<<head<<'\n';	cout<<second<<'\n';	cout<<third<<'\n';	cout<<four<<'\n';	cout<<five<<'\n';
    
    head->next=second;		head->val=1;
	second->next=third;		second->val=2;
	third->next=four;		third->val=3;
	four->next=NULL;		four->val=4;
	//five->next=NULL;		five->val=5;


	Node *ptr=head;
	/*while(ptr!=NULL)
	{
		cout<<ptr->val<<endl;
		ptr=ptr->next;
	}*/
	ptr=reverse(ptr,k);
	
	while(ptr!=NULL)
	{
		cout<<ptr->val<<endl;
		ptr=ptr->next;
	}
	
	return 0;	

}
