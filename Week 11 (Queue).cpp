#include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;


class Queue{
	public :
		int *arr;
		int size;
		int front;
		int rear;
		
		Queue(int size)
		{
			arr=new int[size];
			this->size=size;
			front=-1;
			rear=-1;
			
		}
		void push(int val)
		{
			//cheak full
			if(rear==size-1)
			{
				cout<<"Queue Overflow"<<endl;
				return;
			}
			else if(front==-1 && rear==-1)
			{
				//not full
				front++;
				rear++;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;	
			}
		}
		void pop()
		{
			if(front ==-1 && rear==-1)
			{
				cout<<"Queue Underflow"<<endl;
			}
			else if(front==rear)
			{
				//empty case->single element
				arr[rear]=-1;
				front=-1;
				rear=-1;
			}
			else
			{
				//noramal case
				arr[front]=-1;
				front++;
			}
		}
		
		bool isempty()
		{
			if(front ==-1 && rear==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		int  getsize()
		{
			//bhul jata hu
			if(front==-1 && rear==-1)
			{
				return 0;
			}
			else
			{
				return rear-front+1;
			}
		}
		
		int getFront()
		{
			if(front ==-1)
			{
				cout<<"No element in queue,cannot give front element"<<endl;
			}
			else
			{
				return arr[front];	
			}	
		}
		int getrear()
		{
			if(rear==size-1)
			{
				return arr[rear];
			}
			else
			{
				cout<<"No element in queue,cannot give rear element"<<endl;	
			}
		}
		
		void print()
		{
			cout<<"Printing Queue"<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		
};
class Cqueue{
	public :
		int *arr;
		int size;
		int front;
		int rear;
		
		Cqueue(int size)
		{
			arr=new int(size);
			this->size=size;
			front=-1;
			rear=-1;
		}
		void push(int val)
		{
			//Overflow
			//ya galati karoge
			if(front==0 && rear==size-1 || (rear==front-1))
			{
				cout<<"Overflow"<<endl;
			}
			//Empty case ->! element
			//ya bhi bool karoge
			else if(front ==-1 && rear==-1 )
			{
				front++;
				rear++;
				arr[rear]=val;
			}
			//circular nature
			else if(rear==size-1 && front !=0)
			{
				rear=0;
				arr[rear]=val;
			}
			//normal case
			else
			{
				rear++;
				arr[rear]=val;
			}
		}
		
		void pop()
		{
			//Underflow
			if(front==-1 && rear==-1 )
			{
				cout<<"Underflow"<<endl;
			}
			//Empty case ->! element
			//ya bhi bool karoge
			else if(front ==rear )
			{
				arr[front]=-1;
				front=-1;
				rear=-1;
			}
			//circular nature
			else if(front==size-1)
			{
				arr[front]=-1;
				front=0;
			}
			//normal case
			else
			{
				arr[front]=-1;
				front++;
			}
		}
		
		void print()
		{
			cout<<"Printing Queue::";
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

void reverseQueue(queue<int>&q)
{
	stack<int> s;
	
	while(!q.empty())
	{
		int frontele=q.front();
		q.pop();
		
		s.push(frontele);
	}
	
	while(!s.empty())
	{
		int ele=s.top();
		s.pop();
		
		q.push(ele);
	}
}
void reverse(queue<int>&q)
{
	//Recursion
	if(q.empty())
	{
		return ;
	}
	
	int ele=q.front();
	q.pop();
	
	reverse(q);
	
	q.push(ele);
}
void reversefirstk(queue<int>&q,int k)
{
	stack<int>s;
	int n=q.size();
	
	if(k>n || k==0)
	{
		return ;
	}
	
	for(int i=0;i<k;i++)
	{
		int temp=q.front();
		q.pop();
		s.push(temp);
	}
	
	while(!s.empty())
	{
		int temp=s.top();
		s.pop();
		q.push(temp);
	}
	
	for(int i=0;i<(n-k);i++)
	{
		int temp=q.front();
		q.pop();
		q.push(temp);
	}
}
void interleacve(queue<int>&first)
{
	queue<int>second;
	int size=first.size();
	
	for(int i=0;i<size/2;i++)
	{
		int temp=first.front();
		first.pop();
		second.push(temp);
	}
	
	for(int i=0;i<size/2;i++)
	{
		int temp=second.front();
		second.pop();
		
		first.push(temp);
		
		temp=first.front();
		first.pop();
		first.push(temp);
	}
}
void printfirstneg(int *arr,int n,int k)
{
	deque<int>dq;
	
	for(int i=0;i<k;i++)
	{
		int ele=arr[i];
		if(ele<0)
		{
			dq.push_back(i);
		}
	}
	
	for(int i=k;i<n;i++)
	{
		if(dq.empty())
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<arr[dq.front()]<<" ";	
		}
		if(i-dq.front()>=k)
		{
			dq.pop_front();
		}
		
		if(arr[i]<0)
		{
			dq.push_back(i);
		}
	}
	if(dq.empty())
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<arr[dq.front()]<<" ";	
	}
} 
int main()
{
	//Creation of Queue using STL
	//queue<int>q;
	
	//q.push(5);
	
	//size
	//cout<<"Size of Queue:"<<q.size()<<endl;
	
	//empty
	//if(q.empty()==true)
	//{
	//	cout<<"Queue is empty.."<<endl;;
	//}
	//else
	//{
	//	cout<<"Queue is not empty..."<<endl;
	//}
	
	//remove
	//q.pop();
	
	//size
	//cout<<"Size of Queue:"<<q.size()<<endl;
	
	//q.push(10);
	//q.push(20);
	//q.push(30);
	
	//cout<<"Front element og queue is:"<<q.front()<<endl;
	//cout<<"Last element og queue is:"<<q.back()<<endl;
	
	//Create a queue using a Own Implmentation methos array
	
	//Queue q(5);
	//q.print();
	
	//q.push(10);
	//q.print();
		
	//q.push(20);
	//q.print();
	
	//q.push(30);
	//q.print();
	
	//q.push(40);
	//q.print();
	
	//q.push(50);
	//q.print();
	
	//cout<<"Size of Queue:"<<q.getsize()<<endl;
	
	//q.pop();
	//q.print();
	
	//cout<<"Size of Queue:"<<q.getsize()<<endl;
	//cout<<"queue is empty or not"<<q.isempty()<<endl;
	
	//q.push(100);
	//q.print();
	//q.pop();
	//q.pop();
	//q.pop();
	
	//cout<<q.getFront()<<endl;
	//q.pop();
	//q.print();
	//q.push(100);
	//q.print();
	//q.push(200);
	//q.print();q.push(300);
	//q.print();q.push(400);
	//q.print();q.push(500);
	//q.print();
	//cout<<q.getrear()<<endl;
	
	//Circular Queue
	//Cqueue q(5);
	//q.print();
	
	//q.push(10);
	//q.print();
	//q.push(20);
	//q.print();
	//q.push(30);
	//q.print();
	//q.push(40);
	//q.print();
	//q.push(50);
	//q.print();
	
	//q.push(60);
	//q.pop();
	//q.pop();
	//q.pop();
	//q.print();
	//q.push(100);
	//q.print();
	//q.push(110);
	//q.print();
	//q.push(130);
	//q.print();
	//q.push(140);
	//q.print();
	
	//Doubly Backed Queue
	
	//deque<int> dq;
	
	//dq.push_back(10);
	//dq.push_front(20);
	//dq.pop_back();
	//dq.pop_front();
	
	//cout<<dq.front()<<endl;
	//cout<<dq.back()<<endl;
	
	//cout<<dq.size()<<endl;
	
	//Reverse the Queue
	
	//queue<int>q;
	//q.push(-2);
	//q.push(-5);
	//q.push(4);
	//q.push(-1);
	//q.push(-2);
	//q.push(0);
	//q.push(5);	
	
	//int arr[]={2,-5,4,-1,-2,0,5};
	//int size=7;
	//int k=3;
	//printfirstneg(arr,size,k);
	
	//reverseQueue(q);
	//reverse(q);
	//cout<<"Printing Queue:"<<endl;
	
	//while(!q.empty())
	//{
	//	int ele=q.front();
	//	q.pop();
	//	cout<<ele<<" ";	
	//}
	
	
	//Reverse K element in Queue
	
	//reversefirstk(q,4);
	//cout<<"Printing Queue:"<<endl;
	
	//while(!q.empty())
	//{
	//	int ele=q.front();
	//	q.pop();
	//	cout<<ele<<" ";	
	//}
	
	
	//Interleave forst and seconf half
	
	//interleacve(q);
	//cout<<"Printing Queue:"<<endl;
	
	//while(!q.empty())
	//{
	//	int ele=q.front();
	//	q.pop();
	//	cout<<ele<<" ";	
	//}
	
	//First non-repeating character in a stream
	string str="ababc";
	queue<char>q;
	int freq[26]={0};
	
	for(int i=0;i<str.length();i++)
	{
		char ch=str[i];
		freq[ch-'a']++;
		q.push(ch);
		while(!q.empty())
		{
			char frontchar=q.front();
			if(freq[frontchar-'a']>1)
			{
				q.pop();
			}
			else
			{
				cout<<frontchar<<"->";
				break;
			}
		}
		if(q.empty())
		{
			cout<<"#"<<"->";
		}
	
	}
	
		

	return 0;
}
