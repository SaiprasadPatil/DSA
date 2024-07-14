#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int value)
		{
			this->data=value;
			this->left=NULL;
			this->right=NULL;
		}
};

Node* insertBST(Node* root,int data)
{
	if(root==NULL)
	{
		root=new Node(data);
		return root;
	}
	
	if(data>root->data)
	{
		root->right=insertBST(root->right,data);
	}
	else
	{
		root->left=insertBST(root->left,data );
	}
	return root;
}
void createBST(Node* root)
{
	cout<<"Enter data:"<<endl;
	int data;
	cin>>data;
	
	while(data!=-1)
	{
		root=insertBST(root,data);
		cout<<"Enter data:"<<endl;
		cin>>data;
	}
}
void levelordertravelsal(Node* root)
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		Node *temp=q.front();
		q.pop();
		
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<temp->data<<" ";
			if(temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if(temp->right !=NULL)
			{
				q.push(temp->right);
			}
		}
	}
}
void preorder(Node* root)
{
	//NLR
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(Node* root)
{
	//LNR
	if(root==NULL)
	{
		return;
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(Node* root)
{
	//LRN
	if(root==NULL)
	{
		return;
	}
	
	postorder(root->left);

	postorder(root->right);
	cout<<root->data<<" ";
}
Node* minvalue(Node* root)
{
	if(root==NULL)
	{
		cout<<"No MIN Value"<<endl;
		return NULL;
	}
	Node* temp=root;
	
	while(temp->left !=NULL)
	{
		temp=temp->left;
	}
	return temp;
}

Node* maxvalue(Node* root)
{
	if(root==NULL)
	{
		cout<<"No MIN Value"<<endl;
		return NULL;
	}
	Node* temp=root;
	
	while(temp->right !=NULL)
	{
		temp=temp->right;
	}
	return temp;
}
bool searchbst(Node* root,int targrt)
{
	if(root=NULL)
	{
		return false;
	}
	
	if(root->data == target)
	{
		return true;
	}
	
	bool leftans=false;
	bool rightans=false;
	
	if(target>root->data)
	{
		rightans=searchbst(root->right,target);
	}
	else
	{
		leftans=searchbst(root->left,target)
	}
	
	return leftans||rightans;
}
Node* deletefromBST(Node* root,int target)
{
	if(target==NULL)
	{
		return NULL
	}
	
	if(root->data ==target)
	{
		if(root->left ==NULL && root->right==NULL)
		{
			delete root;
			return NULL;
		}
		else if(root->left != NULL && root->right ==NULL)
		{
			Node* child=root->left;
			delete root;
			return child;
		}
		else if(root->left == NULL && root->right !=NULL)
		{
			Node* child=root->left;
			delete root;
			return child;
		}
		else
		{
			Node* maxi=maxivalue(root->left);
			root->data=maxi->data;
			
			root->right=(root->left,maxi->data;)
		}
	}  
	else if(root->data >target)
	{
		deletefrombst(root->left,target);
	}
	else
	{
		return deletefrombst(root->right,target);
	}
	return root;
}
int main()
{
	Node* root=NULL;
	createBST(root);
	levelordertravelsal(root);
	
	cout<<endl<<"Inorder:"<<endl;
	inorder(root);
	cout<<endl<<"Preorder:"<<endl;
	preorder(root);
	cout<<endl<<"postorder:"<<endl;
	postorder(root);
	
	cout<<endl;
	Node* minvalue=minvalue(root);
	if(minvalue==NULL)
	{
		cout<<"There is no node in tree,so on min vlaue"<<endl;
	}
	else
	{
		cout<<"Min value:"<<minvalue->data<<endl;
	}
	
	Node* maxvalue=maxvalue(root);
	if(maxvalue==NULL)
	{
		cout<<"There is no node in tree,so on min vlaue"<<endl;
	}
	else
	{
		cout<<"Min value:"<<maxvalue->data<<endl;
	}
	
	
	int t;
	cout<<"Enter the target:"<<endl;
	cin>>t;
	
	while(t !=-1)
	{
		boool ans=searchbst(root,t);
		if(ans==true)
		{
			cout<<"Found"<<endl;		
			
		}
		else
		{
			cout<<"Not Found"<<endl;
		}
		cout<<"Enter the target:"<<endl;
		cin>>t;
	}		
	return 0;
}
