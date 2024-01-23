#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void slove(int *arr,int size)
{
	//cout<<sizeof(arr)<<endl;
	//cout<<"Inside slove:"<<arr<<endl;
	//cout<<"Inside slove:"<<&arr<<endl;
	*arr=*arr+1;
}
vector<bool>segSleve(int L,int R)
{
	vector<bool>sleve(sqrt(R));
	vector<int>basePrimes;
	for(int i=0;i<sleve.size();i++)
	{
		if(sleve[i])
		{
			basePrimes.push_back(i);
		}
	}
	vector<bool>segSleve(R-L+1,true);
	if(L==1 || L==0)
	{
		segSleve[L]=false;
	}
	for(auto prime:basePrimes)
	{
		int fir_mul=(L/prime)*prime;
		if(fir_mul<L)
		{
			fir_mul+=prime;
		}
		int j=max(fir_mul,prime*prime);
		while(j<=R)
		{
			segSleve[j-L]=false;
			j+=prime;
		}
	}
}
vector<bool>Sleve(int n)
{
	vector<bool>sleve(n+1,true);
	sleve[0]=sleve[1]=false;
	
	for(int i=2;i*i<=n;i++)//optimzed 2
	{
		if(sleve[i]==true)
		{
		//int j=i*2;
		int j=i*i;//optimized 1
		
		while(j<=n)
		{ 
			sleve[j]=false;
			j+=i;
			}	
		}
	}
	return sleve;
	
}
int fastExponational(int a,int b)
{
	int ans=1;
	while(b>0)
	{ 
		if(b&1)
		{
			ans=ans*a;
		}
		a=a*a;
		b>>=1;
	}
	return ans;
}//o(logb)
int slowExponational(int a,int b)
{
	int ans=1;
	for(int i=0;i<b;i++)
	{
		ans*=a;
		
	}
	return ans;
}//o(b)

int main()
{
	//cout<<fastExponational(5,4)<<endl;
	//cout<<slowExponational(5,4)<<endl;
	
	//vector<bool>sleve=Sleve(25);
	//for(int i=0;i<25;i++)
	//{
	//	if(sleve[i])
	//	{
	//		cout<<i<<" ";
	//	}
	//}
	//int L=110;
	//int R=130;
	//vector<bool>ss=segSleve(L,R);
	//for(int i=0;i<ss.size();i++)
	//{
	//	if(ss[i])
	//	{
	//		cout<<i+L<<" ";
	//	}
	//}
	
	//Pointers
	
	//int a=5;
	//cout<<a<<endl;
	//cout<<"address is:"<<&a<<endl;
	
	//pointer creation
	//int*ptr=&a;
	//accessing 
	//cout<<"Accessing:"<<*ptr<<endl;
	//cout<<"Accessing ptr:"<<ptr<<endl;
	//cout<<"  address of ptr:"<<&ptr<<endl;
	
	//int b=5;
	//int* ptr1=&b;
	//cout<<sizeof(ptr)<<endl;
	
	//char c=5;
	//char* ptr2=&c;
	//cout<<sizeof(ptr2)<<endl;
	
	//long d=5;
	//long* ptr3=&d;
	//cout<<sizeof(ptr3);
	
	//int aa=100;
	//int*ptr4=&a;
	//cout<<aa<<endl;//100
	//cout<<&aa<<endl;//104
	//cout<<*aa<<endl;//exception
	//cout<<ptr4<<endl;//104
	//cout<<*ptr4<<endl;//100
	//cout<<&ptr4<<endl;//208
	//cout<<(*ptr4)++<<endl;//101
	//cout<<++(*ptr4)<<endl;//102
	//*ptr4=*ptr4/2;
	//cout<<*ptr4<<endl;//51
	//*ptr4=*ptr4-2;
	//cout<<*ptr4<<endl;//49
	
	//int arr[5]={1,2,3,4,5};
	//int *ptr6=arr;
	//int (*ptr7)[5]=&arr;
	
	//int arr[]={10,20,30,40,50};
	//cout<<sizeof(arr)<<endl;
	//cout<<"Inside main:"<<arr<<endl;
	//cout<<"Inside main:"<<&arr<<endl;
	
	//slove(arr,4);
	//for(int i=0;i<4;i++)
	//{
	//	cout<<arr[i]<<" ";
	//}
	
	
	
}
