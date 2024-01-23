#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int factorial(int n)
{
	//base case 
	if(n==1)
	{
		return 1;
	}
	if(n==0)
	{
		return 0;
	}
	
	//processing

	
	//recursive realation
	int recursionKAans=factorial(n-1);
	
	//processing
	int finalans=n*recursionKAans;
	return finalans;
	
}
void printcounting(int n)
{
	//base case
	if(n==1)
	{
		cout<<1<<" ";
		return;
	}
	//proceesing
	cout<<n<<" ";
	//recursuve call
	printcounting(n-1);
}
int pow(int n)
{
	if(n==0)
	{
		return 1;
	}
	int ans=2*pow(n-1);
	return ans;
}
int fibonacii(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	int ans=fibonacii(n-1)+fibonacii(n-2);
	return ans;
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	int ans=n+sum(n-1);
	return ans;
}
void printArray(int arr[],int size,int index)
{
	//base case
	if(index>=size)
	{
		return ;
	}
	//processiong
	cout<<arr[index]<<" ";
	//recursive call
	printArray(arr,size,index+1);
}
bool searchArray(int arr[],int size,int target,int index)
{
	//base case
	if(index>=size)
	{
		return false;
	}
	if(arr[index]==target)
	{
		return true;
	}
	//recursive call
	bool ans=searchArray(arr,size,target,index+1);
	return ans;
}
void findmini(int arr[],int size,int index,int &mini)
{
	//base case
	if(index>=size)
	{
		return ;
	}
	//procressing
	mini=min(mini,arr[index]);
	//recursive call
	findmini(arr,size,index+1,mini);

}
void evennosumarray(int arr[],int size,int index,vector<int>&ans)
{
	//base case
	if(index>=size)
	{
		return ;
	}
	//prossesing
	if(arr[index]%2==0)
	{
		ans.push_back(arr[index]);
	}
	//recursive call
	evennosumarray(arr,size,index+1,ans);
	
	
}
void doublearray(int arr[],int index,int size,vector<int>&ans)
{
	if(index>=size)
	{
		return;
	}
	int aa=2*arr[index];
	ans.push_back(aa);
	doublearray(arr,index+1,size,ans);
}
void findmax(int arr[],int size,int index,int &max)
{
	//base case
	if(index>=size)
	{
		return ;
	}
	//procressing
	if(max<=arr[index])
	{
		max=arr[index];
	}
	//max=max(max,arr[index]);
	//recursive call
	findmax(arr,size,index+1,max);

}
int findeleinarray(int arr[],int size,int index,int target)
{
	if(index>=size)
	{
		return -1;
	}
	if(arr[index]==target)
	{
		return arr[index];
	}
	findeleinarray(arr,size,index+1,target);
}
void showtotalocuurance(int arr[],int size,int index,int target)
{
	if(index>=size)
	{
		return ;
	}
	if(arr[index]==target)
	{
		cout<<index<<" ";
	}
	showtotalocuurance(arr,size,index+1,target);
}
void showdigit(int n)
{
	if(n==0)
	{
		return;
	}
	//processing
	int rem=n%10;
	
	n=n/10;
	//recursive call
	showdigit(n);
	//processing
	cout<<rem<<" ";
}
void stringcourrance(string ch,int index,int size)
{
	if(index>=size)
	{
		return ;
	}
	if(ch[index]=='a')
	{
		cout<<index<<" ";
	}
	stringcourrance(ch,index+1,size);
}
void arraytoint(int arr[],int index,int size)
{
	int ans=0;
	if(index>=size)
	{
		return ;
	}
	ans=ans+arr[index];
	cout<<ans;
	ans=arr[index]*10;
	
	arraytoint(arr,index+1,size);
	
}
bool checksortdornot(int arr[],int index,int size)
{
	if(index>=size)
	{
		return true;
	}
	if(arr[index]>=arr[index-1])
	{
		bool ans=checksortdornot(arr,index+1,size);
		return ans;
	}
	else
	{
		return false;
	}
	
	
}
int binarysearch(int arr[],int s,int e,int target)
{
	if(s>e)
	{
		return -1;
	}
	int mid=s+(e-s)/2;
	//processing
	if(arr[mid]==target)
	{
		return mid;
	}
	if(arr[mid]<target)
	{
		return binarysearch(arr,mid+1,e,target);
	}
	else
	{
		return binarysearch(arr,s,mid-1,target);
	}
}
void findSubsqueanses(string str,string output,int index)
{
	if(index>=str.size()) 
	{
		cout<<"->"<<  output<<endl;
		return ;
	}
	char ch=str[index];
	//exclude
	findSubsqueanses(str,output,index+1);
	
	//include
	//op mai add karo
	output.push_back(ch);
	findSubsqueanses(str,output,index+1);
	
	
}
void lastocuranceofstring(string ch,int size,int index,int &ans)
{
	if(index>=size)
	{
		return ;
	}
	if(ch[index]=='a')
	{
		
		ans=index;
			
	}
	lastocuranceofstring(ch,size,index+1,ans);
	
}
void reversestring(string &str,int s,int e)
{
	if(s>=e)
	{
		cout<<str;
		return ;
	}
	swap(str[s],str[e]);
	reversestring(str,s+1,e-1);
	
}
bool cheakpailndrom(string str,int s,int e)
{
	if(s>=e)
	{
		return true;
	}
	if(str[s]==str[e])
	{
		return true;
	}
	else
	{
		return false;
	}
	cheakpailndrom(str,s+1,e-1);
}
void printsubarray_util(vector<int>&nums,int s,int e)
{
	//base
	if(e==nums.size())
	{
		return;
	}
	//case
	for(int i=s;i<=e;i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	//RE
	printsubarray_util(nums,s,e+1);
}
void printsubarray(vector<int>&nums)
{
	for(int start=0;start<nums.size();start++)
	{
		int end=start;
		printsubarray_util(nums,start,end);
	}
}
int main()
{
	//cout<<factorial(5)<<endl;
	//printcounting(5);
	//cout<<pow(10)<<endl;
	//cout<<fibonacii(7)<<endl;
	//cout<<sum(5)<<endl;
	//int arr[]={1,2,3,4,5,6};
	//int size=5;
	//int index=0; 
	//printArray(arr,size,index);
	//cout<<searchArray(arr,size,50,index);
	//int mini=INT_MAX;
	//findmini(arr,size,index,mini);
	//cout<<mini<<endl;
	//vector<int>ans;
	//evennosumarray(arr,size,index,ans);
	//for(int num:ans)
	//{
	//	cout<<num<<" ";
	//}
	//doublearray(arr,index+1,size,ans);
	//for(int num:ans)
	//{
	//	cout<<num<<" ";
	//}
	//int max=INT_MIN;
	//findmax(arr,size,index,max);
	//cout<<max<<endl;
	//int ans=findeleinarray(arr,size,index,15);
   // cout<<ans;
   //showtotalocuurance(arr,size,index,10);
   //int n=4321;
   //showdigit(n);
   //string ch="Lovae Bubaber";
   //int size=13;
   //stringcourrance(ch,index,size);
   //arraytoint(arr,index,size);
   
   //check sorted or not
   //int arr[]={10,20,30,40,60,70};
   //int size=6;
   //int index=1;
   //bool ans= checksortdornot(arr,index,size);
   //if(ans)
  // {
   	//cout<<" array is sorted";
   //}
   //else
   //{
   	//cout<<"array is not sorted";
   //}
   
   //bainary search
   //int target=40;
   //int start=0;
   //int end=size-1;
   //bool found= binarysearch(arr,start,end,target);
   //if(found)
   //{
   	//cout<<"taget found";
   //}
   //else
   //{
   	//cout<<"taget not found";
   //}
   
   //subsquances of string
   
   //string str="xy";
   //string output="";
   //int index=0;
   //findSubsqueanses(str,output,index);
   
   //last ocuurance of char
   //string ch="abcdeaa";
   //int size=7;
   //int index=0;
   //int ans=0;
   //lastocuranceofstring(ch,size,index,ans);
   //cout<<ans;
   
   //Reverse a string
   //string str="saiprasad";
   //int size=9;
   //int s=0;
   //int e=size-1;
   //reversestring(str,s,e);
   
   //Pailndrom or not
   //string str="racecara";
   //int size=8;
   //int s=0;
   //int e=size-1;
   //bool found=cheakpailndrom(str,s,e);
   //if(found)
   //{
   	//cout<<"yes it is paolndrom";
   //}
   //else
   //{
   	//cout<<"no it is pailndrom";
   //}
  
   vector<int>nums{1,2,3,4,5};
   printsubarray(nums);
   
   
   
}
