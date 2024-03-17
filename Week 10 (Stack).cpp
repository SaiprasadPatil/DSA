#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//class Stack{
//	public:
//		int *arr;
//		int size;
//		int top;
		
//		Stack(int size)
//		{
//			arr=new int[size];
//			this->size=size;
//			this->top=-1;
//		}
//		void push(int data)
//		{
//			if(top==size-1)
//			{
//				cout<<"Stack is Overflow....";
//			}
//			else
//			{
//				top++;
//				arr[top]=data;
//			}	
//		}
//		void pop()
//		{
//			if(top==-1)
//			{
//				cout<<"Stack Underflow....";
//			}
//			else
//			{
//				top--;	
//			}
//		
//		}
//		bool isEmpty()
//		{
//			if(top==-1)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		int getTop()
//		{
//			if(top==-1)
//			{
//				cout<<"Stack is empty"<<endl;
//				return -1;
//			}
//			else
//			{
//				return arr[top];
//			}
//		}
//		int getSize()
//		{
	//		return top+1;
//		}	
		
//		void print()
//		{
//			cout<<"Top is:"<<top<<endl;
//		cout<<"Top of stack:"<<getTop()<<endl;
//			cout<<"Stack:"<<endl;
//			for(int i=0;i<getSize();i++)
//			{
//				cout<<arr[i]<<" ";
//				
//			}
//			cout<<endl;
//			cout<<endl;
//			
//		}
//};
void slove(stack<int>&st,int pos,int &ans)
{
  //base case
  if(pos==1)
  {
    ans= st.top();
    return;
  }

  //1 case hum slove karege
  pos--;
  int temp=st.top();
  st.pop();

  //recursion
  slove(st,pos,ans);

  //backtriacking
  st.push(temp);
}
int getmiddleelement(stack<int>st)
{
  int size=st.size();
  if(st.empty())
  {
    return -1;
  }
  else{
    //stack is not empty
    //odd
    int pos=-1;
    if(size & 1)
    {
      pos=size/2+1;
    }
    else{
      //even
      pos=size/2;
    }
    int ans=-1;
    slove(st,pos,ans);
    return ans;
  }
}
void insertatbottom(stack<int>&st,int &element)
{
  //base case
  if(st.empty())
  {
    st.push(element);
    return;
  }

  //1 case karege sirf
  int temp=st.top();
  st.pop();

  //recursion
  insertatbottom(st,element);

  //backtracking
  st.push(temp);
}

void reversestack(stack<int>&st)
{
  //base case
  if(st.empty())
  {
    return;
  }

  //1 case kareger sirf
  int temp=st.top();
  st.pop();

  //recursion
  reversestack(st);

  //Backtracking
  insertatbottom(st,temp);

}
void insertsorted(stack<int>&st,int element)
{
  //base case
  if(st.empty() || element>st.top())
  {
    st.push(element);
    return;
  }

  //1 case
  int temp=st.top();
  st.pop();

  //recursion
  insertsorted(st,element);

  //backtracing
  st.push(temp);
}
void sortstack(stack<int>&st)
{
  //base case
  if(st.empty())
  {
    return ;
  }

  //1 case
  int temp=st.top();
  st.pop();

  //recursion
  sortstack(st);

  //bectrackig
  insertsorted(st,temp);
}
class Stack{
	public :
		int *arr;
		int size;
		int top1;
		int top2;
		
		Stack(int size)
		{
			arr=new int[size];
			this->size=size;
			top1=-1;
			top2=size;
		}
		
		void push1(int data)
		{
			if(top2-top1==1)
			{
				cout<<"Overflow...."<<endl;
			}
			else
			{
				top1++;
				arr[top1]=data;
			}
			
		}
		void push2(int data)
		{
			if(top2-top1==1)
			{
				cout<<"Overflow...."<<endl;
			}
			else
			{
				top2--;
				arr[top2]=data;	
			}
		}
		void pop1()
		{
			if(top1==-1)
			{
				cout<<"Underflow"<<endl;
			}
			else
			{
				arr[top1]=0;
				top1--;	
			}
		}
		void pop2()
		{
			if(top2==size)
			{
				cout<<"Underflow"<<endl;
			}
			else
			{
				arr[top2]=0;
				top2++;
			}
		}
		void print()
		{
			cout<<"Top 1:"<<top1<<endl;
			cout<<"Top 2:"<<top2<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};
bool checkredudant(string &str)
{
	stack<char>st;
 	
 	for(int i=0;i<str.length();i++)
 	{
 		char ch=str[i];
 		
 		if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' )
 		{
 			st.push(ch);
		 }
		 else if(ch==')')
		 {
		 	int opeator=0;
		 	while(!st.empty() &&st.top()!='(')
		 	{
		 		char temp=st.top();
		 		if(temp=='+' || temp=='-' || temp=='*' || temp=='/')
		 		{
		 			opeator++;
				 }
				 st.pop();
			 }
			 
		 st.pop();
		 
		 if(opeator==0)
		 {
		 	return true;
		 }
		}	
	 } 
	 return false;
}
vector<int> prevsmallerelement(int *arr,int size,vector<int>&ans)
{
	stack<int>st;
	st.push(-1);
	
	for(int i=0;i<size;i++)
	{
		int curr=arr[i];
		//answer find karo curr k liye
		while(st.top()>=curr)
		{
			st.pop();
		}
		ans[i]=st.top();
		st.push(curr);
	}
	return ans;
}
vector<int> nextsmallerelement(int *arr,int size,vector<int>&ans)
{
	stack<int>st;
	st.push(-1);
	
	for(int i=size-1;i>=0;i--)
	{
		int curr=arr[i];
		//answer find karo curr k liye
		while(st.top()>=curr)
		{
			st.pop();
		}
		ans[i]=st.top();
		st.push(curr);
	}
	return ans;
}
class Nstack{
	int *a,*top,*next;
	int n;
	int size;
	int freespot;
	public:
		Nstack(int _n,int _s):n(_n),size(_s){
			freespot=0;
			a=new int[size];
			top=new int[n];
			next=new int[size];
			
			for(int i=0;i<n;i++)
			{
				top[i]=-1;
			}
			for(int i=0;i<n;i++)
			{
				next[i]=i+1;
			}
			for(int i=0;i<size;i++)
			{
				next[i]=i+1;
			}
			next[size-1]=-1;
			
		}
		bool push(int x,int m)
		{
			if(freespot==-1)
			{
				return false;
			}
			int index=freespot;
			
			freespot=next[index];
			a[index]=x;
			next[index]=top[m-1];
			
			top[m-1]=index;
			return true;
		}
		int pop(int m)
		{
			if(top[m-1]==1)
			{
				return -1;
			}
			int index=top[m-1];
			top[n-1]=next[index];
			int popele=a[index];
			next[index]=freespot;
			freespot=index;
			return popele;
		}
		~Nstack(){
			delete[]a;
			delete[] top;
			delete[] next;
		}
};
int main()
{
	//creation of stack
	//stack<int>st;
	
	//inseration of stack
	//st.push(10);
	//st.push(20);
	//st.push(30);
	
	//size of stack 
	//cout<<"Size of stack is:"<<st.size()<<endl;
	
	//remove
	//st.pop();
	
	//cheak empty or full
	//if(st.empty())
	//{
	//	cout<<"Stack is empty..."<<endl;
	//}
	//else
	//{
	//	cout<<"Stack is non empty...."<<endl;
	//}
	
	//cout<<st.top()<<endl; 
	
	//Stack create by own method
	
	//Stack st(8);
	
	//push
	//st.push(10);
	//st.print();

	//st.push(20);
	//st.print();
//	st.push(30);
	//st.print();
//	st.push(40);
//	st.print();
//	st.push(50);
//	st.print();
//	st.push(60);
//	st.print();
//  st.push(70);
//	st.print();
//  st.push(80);
//	st.print();
//  st.push(90);
//	st.print();
	
//	st.pop();
//	st.print();
//	st.pop();
//	st.print();
//	st.pop();
//	st.print();
	
//	cout<<"Top Element:"<<st.getTop()<<endl;
//  cout<<"Size of Stack:"<<st.getSize()<<endl;

//  if(st.isEmpty())
//  {
//    cout<<"Empty..."<<endl;
//  }
//  else{
//    cout<<"Not Empty..."<<endl;
//  }

//1.Reverse a String
//  string str="Saiprasad";
//  stack<char>ss;
//  for(int i=0;i<str.length();i++) 
//  {
//    char ch=str[i];
//    ss.push(ch);
//  }
//  while(!ss.empty())
//  {
//    cout<<ss.top()<<" ";
//    ss.pop();
//  }

//2.Middle element of stack
//stack<int>st;
//st.push(10);
//st.push(20);

//nt mid=getmiddleelement(st);
//cout<<"Midddle element of stack is:"<<mid<<endl;


//3.Bottom of element of stack
//stack<int>st;
//st.push(10);
//st.push(20);
//st.push(30);

//int element=400;
//insertatbottom(st,element);


//while(!st.empty())
//{
//  cout<<st.top()<<" ";
//  st.pop();
//}

//3.Reverse a String

//stack<int>st;
//st.push(10);
//st.push(20);
//st.push(30);

//reversestack(st);
//while(!st.empty())
//{
 // cout<<st.top()<<" ";
 // st.pop();
//}

//4.insert in sorted stack
//stack<int>st;
//st.push(10);
//st.push(20);
//st.push(30);
//insertsorted(st,35);
//while(!st.empty())
//{
//  cout<<st.top()<<" ";
//  st.pop();
//}

//5.Sort a stack
//stack<int>st;
//st.push(10);
//st.push(7);
//st.push(3);
//st.push(1);
//st.push(8);
//st.push(12);
//st.push(33);
//sortstack(st);
//while(!st.empty())
//{
//  cout<<st.top()<<" ";
//  st.pop();
//}

//6.Implement 2 Stack in an Array
//Stack st(6);
//st.print();
//st.push1(1);
//st.print();
//st.push1(20);
//st.print();
//st.push2(100);
//st.print();
//st.push2(200);
//st.print();
//st.push2(300);
//st.print();
//st.push2(300);
//st.print();
//st.push2(1000);
//st.print();
//st.push1(300);
//st.print();
//st.pop1();
//st.print();
//st.pop1();
//st.print();
//st.pop1();
//st.print();

//string str="(((a+b)*(c+d)))";
//bool ans=checkredudant(str);

//if(ans==true)
//{
//	cout<<"Redudant brackets are present"<<endl;
//}
//else
//{
//	cout<<"Redudant brackets are not present"<<endl;
//
//}

//int arr[]={8,4,6,2,3};
//int size=5;
//vector<int>ans(size);
//ans=nextsmallerelement(arr,size,ans);
//ans=prevsmallerelement(arr,size,ans);
//for(int i=0;i<size;i++)
//{
//	cout<<ans[i]<<" ";
//}
//cout<<endl;
//

//N stack in ans Array
Nstack s(3,6);
cout<<s.push(10,1)<<endl;
cout<<s.push(10,1)<<endl;
cout<<s.push(10,1)<<endl;
cout<<s.push(14,2)<<endl;
cout<<s.push(15,3)<<endl;
cout<<s.pop(1)<<endl;
cout<<s.pop(2)<<endl;



	return 0;
}
