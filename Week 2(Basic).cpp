#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void print(vector<int> v)
{
	//int size=v.size();
	//for(int i=0;i<size;i++){
	//	cout<<v[i]<<endl;
	//}
	for(auto it:v)
	{
		cout<<it<<endl;
	}
}
int findminmaxarray(int arr[],int size)
{
	int min=INT_MAX;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
void countzeroone(int arr[],int size)
{
	int zero=0;
	int one=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			zero++;
		}
		if(arr[i]==1)
		{
			one++;
		}
	}
	cout<<zero<<endl;
	cout<<one<<endl;
	
}
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

bool linearserch(int arr[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return true;
		}
	}
	return false;
}

void reversearray(int arr[],int size)
{

	//while(left<=right)
	//{
	//	swap(arr[left],arr[right]);
	//	left++;
	//	right--;
	//}
	for(int left=0,right=size-1;left<=right; left++,right--)
	{
		swap(arr[left],arr[right]);
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}

void extream(int arr[],int size)
{
	int left=0;
	int right=size-1;
	
	while(left<=right)
	{
		if(left==right)
	    {
		cout<<arr[left]<<endl;
	    }
	    else
	    {
		cout<<arr[left]<<endl;
		cout<<arr[right]<<endl;
	    }
	left++;
	right--;	
	}
}
int increment(int &n)
{
	n=n+1;
}
int finduniqe(int arr[],int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans^arr[i];
	}
	return ans;
}
void sortzero(int arr[],int n)
{
	int zero=0;
	int one=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			zero++;
		}
		if(arr[i]==1)
		{
			one++;
		}
	}
	//place 0 and 1
	int i;
	for(i=0;i<zero;i++)
	{
		arr[i]=0;
	}
	for(int j=i;j<n;j++)
	{
		arr[j]=1;
	}
}
void leftshift(int arr[],int n)
{
	int temp=arr[n-1];
	
	for(int i=n-1;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}
void rightshift(int arr[],int n)
{
	int temp=arr[0];
	
	for(int i=0;i<n;i++)
	{
		arr[i+1]=arr[i];
	}
	arr[n-1]=temp;
}
int main()
{
	//int arr[10];
	//char ch[102];
	//bool flags[223];
	//long add[900];
	
	//cout<<sizeof(arr)<<endl;
	//cout<<sizeof(ch)<<endl;
	//cout<<sizeof(flags)<<endl;
	//cout<<sizeof(add)<<endl;
	//cout<<&arr<<endl;
	//cout<<arr<<endl;
	
	//int arr[]={1,2,3,4,5};
	//int brr[5]={1,2,3,4,5};
	//int crr[5]={2,3};
	//int drr[2]={1,2,3,4};
	
	//int arr[5]={1,2,3,4,5};
	//cout<<arr[0]<<endl;
	//cout<<arr[4]<<endl;
	//cout<<arr[3]<<endl;
	//cout<<arr[2]<<endl;
	//cout<<arr[1]<<endl;
	//for(int i=0;i<5;i++)
	//{
	//	cout<<arr[i]<<endl;
	//}
	
	//int arr[10];
	//for(int i=0;i<5;i++)
	//{
	//	cin>>arr[i];
	//	cout<<endl;
    //}
    //int sum=0;
    //for(int i=0;i<5;i++)
	//{
	//	sum=sum+arr[i];
	//}
	//cout<<sum<<endl;

// linear Search 
//int arr[]={1,2,3,4,5};
//int target=16;
//bool flag =0;
//for(int i=0;i<5;i++)
//{
//	if(arr[i]==target)
//	{
//		flag=1;
//		break;
//	}
//}
//
//if(flag==1)
//{
//	cout<<"target found";
//}
//else
//{
//	cout<<"target not found";
//}



	//int arr[5]={1,2,3,4,5};
	//int size=5;
	//int target=16;
	//printarray(arr,size);
	//bool ans = linearserch(arr,size,target);
	
	//if(ans==1)
	//{
	//	cout<<"Tareget Found"<<endl;
	//}
	//else
	//{
	//		cout<<"Target not found"<<endl;
//	}
	
	//count 0 and 1
	//int arr[]={0,0,0,1,1,0,1,0,1,1,0,1,1,1};
	//int size=14;
	//countzeroone(arr,size);
	
	//-2 to th epower 31
	//cout<<INT_MIN<<endl;
	//2 to the power 31-1
	//cout<<INT_MAX<<endl;
	
	//int arr[]={10,8,31,4,3,1,-51};
	//int size=7;
	
	//Find min max an Array
	//int minimum=findminmaxarray(arr,size);
	//cout<<minimum;
	
	//Reverse an Array
	//int arr[]={10,20,30,40,50,60};
	//int size=6;
	//reversearray(arr,size);
	//return 0;
	
	//extream(arr,size);
	
	
	//Call by value and by Refernce
	//int n=5;//orignal variable
	//int &k=n;//k is refernce variable
	//int &c=n;// c is refernce variable
	//cout<<k<<endl;//call by refernce
	//cout<<n<<endl;
	//cout<<c<<endl;
	//k++;
	//cout<<k<<endl;//call by refernce
	//cout<<n<<endl;
	//cout<<c<<endl;
	//int n=5;
	//increment(n);
	//cout<<n;
	
	//find unique elements
    //int arr[]={2,10,11,10,2,13,15,13,15};
    //int n=9;
    //int ans=finduniqe(arr,n);
    //cout<<ans;
    
    //find all pairs
    //int arr[]={1,2,3,4,5};
    //int n=5;
    
    //for(int i=0;i<n;i++)
    //{
    //	for(int j=0;j<n;j++)
    //	{
    //		cout<<arr[i]<<" "<<arr[j]<<endl;
	//	}
	//}
	
	//all triplate pairs
	//for(int i=0;i<n;i++)
    //{
    //	for(int j=0;j<n;j++)
    //	{ 
    //	   for(int k=0;k<n;k++)
    //	   {
    //	   	cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
	//	   }	
	//	}
	//}
	
	//sort 0's ans 1's
	//int arr[]={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
	//int n=14;
	
	//sortzero(arr,n);
	
	//for(int i=0;i<n;i++)
	//{
	//	cout<<arr[i]<<" ";
	//}
	
	
	//shift array elements by 1
	//int arr[]={10,20,30,40,50,60};
	//int n=6;
	
	//leftshift(arr,n);
	//rightshift(arr,n);
	
	
	//for(int i=0;i<n;i++)
	//{
	  // cout<<arr[i]<<" ";	
	//}
	
	//Vector STL
	
	//vector<int>v;
	
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//print(v);
	
	//pop vector
	//v.pop_back();
	//print(v);
	
	//int n;
	//cin>>n;
	//for(int i=0;i<n;i++)
	//{
	//	int d;
	//	cin>>d;
	//	v.push_back(d);
	//}
	//print(v);
	
	
	//clear the vector
	//v.clear();
	//v.push_back(5);
	//print(v);
    
    //vector<int>arr;//default with no data 0 size
   // vector<int>arr2(5,-1);//init with spacific data
	//arr2.push_back(50);
	//print(arr2);
	//vector<int>arr3{1,2,3,4,5};
	//arr3.push_back(80);
	//print(arr3);
	
    //vector<int>arr5{1,2,3,4,5};
    //vector<int>arr6(arr5);
    //print(arr6);
	//vector<char>v;
	//v.push_back('S');
	//v.push_back('A');
	//v.push_back('I');
	//print(v);
	//cout<<v[0]<<endl;
	//cout<<v[v.size()-1] <<endl;
	//cout<<v.front()<<endl;
	//cout<<v.back()<<endl;
	//print(arr5);
	//vector<int> v(5);
	//cout<<v.size();
	
}
