#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int val)
		{
			this->data=val;
			this->left=NULL;
			this->right=NULL;
		}
		
		
};
//it returns root node of created tree
Node* createTree()
{
	cout<<"enter the value for node:"<<endl;
	int data;
	cin>>data;	
	
	//base case
	if(data==-1)
	{
		return NULL;
	}
	
	
	//step 1:Create Node
	Node* root=new Node(data);
	
	//step 2:Crete left subtree;
	//cout<<"left of Node:"<<root->data<<endl;
	root->left=createTree();
	
	
	//step 3:Crete right subtree;
	//cout<<"right of Node:"<<root->data<<endl;
	root->right=createTree();

	
	return root;
	
	
}

void preordertraversal(Node* root)
{		
	//base case
	if(root==NULL)
	{
		return;
	}

	//N L R 
	
	//N
	cout<<root->data<<" ";
	
	//L
	preordertraversal(root->left);
	
	//R
	preordertraversal(root->right);
	
}

void inordertraversal(Node* root)
{		
	//base case
	if(root==NULL)
	{
		return;
	}

	//L N R 
	
	//L
	inordertraversal(root->left);
	
	//N
	cout<<root->data<<" ";
	
	//R
	inordertraversal(root->right);
	
}

void postordertraversal(Node* root)
{		
	//base case
	if(root==NULL)
	{
		return;
	}

	//L R N
	
	//L
	postordertraversal(root->left);
	
	//R
	postordertraversal(root->right);
	
	//N
	cout<<root->data<<" ";
	
}

void levelordertraversal(Node* root)
{
	queue<Node*>q;
	
	q.push(root);
	
	while(!q.empty())
	{
		Node* front=q.front();
		q.pop();
		
		cout<<front->data<<" ";
		
		if(front->left !=NULL)
		{
			q.push(front->left);
		}
		if(front->right !=NULL)
		{
			q.push(front->right);
		}	
	
	}
	
}
void levelordertraversalbylevel(Node* root)
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(q.size()>1)
	{
		Node* front=q.front();
		q.pop();
		
		if(front==NULL)
		{
			cout<<endl;
			q.push(NULL);
		}
		else
		{
			//vaild
			cout<<front->data<<" ";
		
			if(front->left !=NULL)
			{
				q.push(front->left);
			}
			if(front->right !=NULL)
			{
				q.push(front->right);
			}
		}
			
	
	}
	
}

int serchinrder(int inorder[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(inorder[i]==target)
		{
			return i;
		}
	}
	return -1;
}
Node* constructtreefrompreandinordertravrsal(int preorder[],int inorder[],int &preindex,int inoindex,int inoend,int size)
{
	
	if(preindex >= size || inoindex > inoend)
	{
		return NULL;
	}	
	
	int ele=preorder[preindex];
	preindex++;
	Node* root=new Node(ele);
	
	int postion=serchinrder(inorder,size,ele);
	
	root->left=constructtreefrompreandinordertravrsal(preorder,inorder,preindex,inoend,postion-1,size);
	root->right=constructtreefrompreandinordertravrsal(preorder,inorder,preindex,inoend,postion+1,size);
	
	
	return root;
}
int main()
{

	//Node* root=createTree();
	//cout<<root->data<<endl;
	//cout<<"Printing Preorder:"<<endl;
	//preordertraversal(root);
	//out<<endl;
	//cout<<"Printing Inorder:"<<endl;
	//inordertraversal(root);
	//cout<<endl;
	//cout<<"Printing Postorder:"<<endl;
	//postordertraversal(root);
	//cout<<endl;
	//cout<<"Printing Levelorder:"<<endl;
	//levelordertraversal(root);
	//cout<<endl;
	//cout<<"Printing Levelorderbylevel:"<<endl;
	//levelordertraversalbylevel(root);
	//cout<<endl;
	
	
	int inorder[]={10,8,6,2,4,12};
	int preorder[]={2,8,10,6,4,12};
	
	int size=6;
	int preindex=0;
	int inoindex=0;
	int inoend=5;
	return 0;
	
	Node* root=constructtreefrompreandinordertravrsal(preorder,inorder,preindex,inoindex,inoend,size);
	cout<<"Printing the entire tree:"<<endl;
	levelordertraversal(root);
	
	
	return 0;
	
}
