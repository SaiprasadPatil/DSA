#include<iostream>
using namespace std;


class Node{
public:
	int data;
	Node *next;

	Node()
	{
		//cout<<"I am inside default constuctor"<<endl;
		this->next+NULL;
	}
	Node(int data)
	{
		//cout<<"I am inside parametrized constuctor"<<endl;
		this->data=data;
		this->next=NULL;
	}
	~Node()
	{
		cout<<"Destructor called for:"<<this->data<<endl;
	}
	
};

//print L.L

void printAll(Node *head)
{
	Node *temp=head;  //important hai for travsing using temp not use orignal head pointer 
	while(temp !=NULL)
	{
		
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int getlength(Node *head)
{
	int length=0;
	Node *temp=head;
	while(temp !=NULL)
	{
		length++;
		temp=temp->next;
	}
	
	return length;
}

//insertion on head

void inserthead(Node* &head, Node* &tail,int data)
{
	if(head==NULL)
	{
		//empty LL
	  	Node *newnode=new Node(data);
		//update head and tail
		head = newnode;
		tail=newnode;
	}
	else
	{
		//non empty ll
		//create new node
		Node *newnode=new Node(data);
		//attach new node to head node
		newnode->next=head;
		//update head
		head = newnode;
	}

}

//inserion at tail

void insertattail(Node* &head,Node* &tail,int data)
{
	if(head==NULL)
	{
		//empty LL
		
		//create nre node
		Node * newnode=new Node(data);
		//single to hai LL
		//update head and tail
		head = newnode;
		tail=newnode;
	}
	else
	{
		//non empty
		//create nre node
		Node * newnode=new Node(data);
		//tail node ko attach
		tail->next=newnode;
		//update tail
		tail=newnode;
	}
}

void creteTail(Node *head,Node *&tail)
{
	Node *temp=head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	
	tail=temp;
}

void insertAtpostion(Node *&head,Node *tail,int data,int position)
{
	if(position<1)
	{
		cout<<"cannot insert ,please enter vaild postion"<<endl;
		return ;
	}
	int length=getlength(head);
	if(position==1)
	{
		insertattail(head,tail,data);
	}
	else if(position>length)
	{
		insertattail(head,tail,data);
	}
	else
	{
		//insert at middle of linked list
		//crete node
		Node *newnode=new Node(data);
		//traverse//curr to position
		Node*pre=NULL;
		Node*curr=head;
		while(position!=1)
		{
			pre=curr;
			curr=curr->next;
			position--;
		}
		//attach pre ans curr to new node
		pre->next=newnode;
		newnode->next=curr;
	}
}

void deleteNode(Node* &head,Node* &tail,int pos)
{
	//empty list
	if(head==NULL)
	{
		cout<<"Cannot delete,coz LL is empty"<<endl;
		return;
	}
	
	int len=getlength(head);
	
	//delete from head
	if(pos==1)
	{
		//first node ko delete kaedo
		Node *temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
	else if(pos==len)
	{
		//last node ko delte kardo
		
		//find prev
		Node* prev=head;
		while(prev->next !=tail)
		{
			prev=prev->next;
		}
		
		//prev node ka link null karo
		prev->next=NULL;
		
		//node delte karo
		delete tail;
		
		//update tail
		tail=prev;
			
	}
	else
	{
		//middle me koi node ho delete kardo
		
		//set prev/curr pointer
		Node *prev=NULL;
		Node *curr=head;
		while(pos !=1)
		{
			pos--;
			prev=curr;
			curr=curr->next;
		}
		
		//prev->next me curr ka next node add karo
		prev->next=curr->next;
		//node isolate kardo
		curr->next=NULL;
		//delte  node
		delete curr;
		
	}
	
	
}
int main()
{
	//creation of node
	
	//Node a; //static allocation
	//Node *first=new Node(); //dyanamic allocation
	
//	Node *first=new Node(10);
//	Node *second=new Node(20);
//	Node *third=new Node(30);
//	Node *forth=new Node(40);
//	Node *five=new Node(50);
//	Node *tail=five;
	
//	first->next=second;
//	second->next=third;
//	third->next=forth;
//	forth->next=five;
	
//	Node *head=first;
	
	//cout<<"Printing entire L.L"<<endl;
	//printAll(head);
//	cout<<"Printing entire L.L Length:"<<endl;	
//	int ans=getlength(head);
//	cout<<ans<<endl;
	
	//inserthead(head,tail,500);
	//printAll(head);
	
//	insertattail(head,tail,500);
//	printAll(head);

//	Node *head=NULL;
//	Node *tail=NULL;
	
//	inserthead(head,tail,10);
//	inserthead(head,tail,20);
//	inserthead(head,tail,30);
//	inserthead(head,tail,50);
//	printAll(head);
	
	
//	insertAtpostion(head,tail,1000,51);
//	printAll(head);

	//Deletion for Linked list 
	
	Node *head=NULL;
	Node *tail=NULL;
	
	inserthead(head,tail,50);
//	inserthead(head,tail,40);
//	inserthead(head,tail,30);
//	inserthead(head,tail,20);
//	inserthead(head,tail,10);
	
	printAll(head);
	
	//deleteNode(head,tail,1);
	//printAll(head);
	
		
//	deleteNode(head,tail,5);
//	printAll(head);

	
//	deleteNode(head,tail,3);
//	printAll(head);

	printAll(head);
	cout<<endl;
	cout<<"Before Length of LL is:"<<getlength(head)<<endl;	
	deleteNode(head,tail,1);
	cout<<"After Length of LL is:"<<getlength(head)<<endl;
	
}
