#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int mysqrt(int n)
{
	int s=0; int e=n;
	int ans=0;
	while(s<=e)
	{
		int mid=(e-s)/2+s;
		if(mid*mid<=n)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	return ans;
}
double myprecisionsqrt(int n)
{
	double sqrt = mysqrt(n);
	double step=0.001;
	double precision=10;
	for(int i=0;i<precision;i++)
	{
		double j=sqrt;
		while(j*j<=n)
		{
			sqrt=j;
			j+=step;
		}
		step/=10;
	}
	
	return sqrt;
}
bool ispossiblesolution(vector<long long int>trres,long long int m,long long int mid)
{
	long long int woodcoolcte=0;
	for(int i=0;i<trres.size();i++)
	{
		if(trres[i]>mid)
		{
			woodcoolcte+=trres[i]-mid;
		}
	}
	return woodcoolcte>=m;
}
long long maxSawBladeheight(vector<long long int>trres,long long int n)
{
	long long int start,end,ans=-1;
	end=*max_element(trres.begin(),trres.end());
	
	while(start<=end)
	{
		long long int mid=start+(end-start)/2;
		if(ispossiblesolution(trres,n,mid))
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return ans;
}
int bs(int a[],int start,int end,int x)
{
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(a[mid]<x)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}
int expsearch(int a[],int n,int x)
{
	if(a[0]==x) return 0;
	
	int i=1;
	while(i<n && a[i]<=x)
	{
		i=i*2;//i*2//i=i<<1;
	}
	return bs(a,i/2,min(i,n-1),x);
} 
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void printv(vector<vector<int>> v)
{
	for(int i=0;i<v.size();i++)
	{
		vector<int>&temp=v[i];
		int a=temp[0];
		int b=temp[1];
		cout<<a<<" "<<b<<endl;
		
	}
	cout<<endl;
}
void bubblesort(vector<int> &v)
{
	int n=v.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(v[j]>v[j+1])
			{
				swap(v[j],v[j+1]);
			}
		}
	}

}
void selectionsort(vector<int>&v)
{
	int n=v.size();
	for(int i=0;i<n-1;i++)
	{
		int min=i;//iyh element is ith index hai
		for(int j=i+1;j<n;j++)
		{
			if(v[j]<v[min])
			{
				min=j;
			}
		}
		swap(v[i],v[min]);
	}
}
insertionsort(vector<int> &v)
{
	int n=v.size();
	for(int i=1;i<n;i++)
	{
		int key=v[i];
		int j=i-1;
		
		while(j>=0 && v[j]>key)
		{
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=key;
	}
}
int findocuuringelement(int arr[],int n)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(s==e)
		{
		return s;	
		}
		if(mid&1)//odd no
		{
			if(mid-1>=0 && arr[mid-1]==arr[mid])
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}
		}
		else
		{
			if(mid+1 < n && arr[mid]==arr[mid+1])
			{
				s=mid+2;
			}
			else
			{
				//ya ans hai orr mai right pai hu ans lost issue
				e=mid;
			}
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int nearlysearch(int arr[],int n,int target)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(mid-1>=0 && arr[mid-1]==target)
		{
		   return mid-1;   
		}
		if(arr[mid]==target)
		{
			return mid;
	    }
	    if(mid+1<n && arr[mid+1]==target)
		{
		   return mid+1;	
		}
		if(target > arr[mid])
		{
			s=mid+2;
		}
		else
		{
			e=mid-2;
		}
	  mid=s+(e-s)/2;	
	}
	return -1;
}
int getQuestint(int divisor,int dividend)
{
	int s=0;
	int e=dividend;
	int ans=0;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(mid*divisor==dividend)
		{
			return mid;
		}
		if(mid*divisor < dividend)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int binaryserach(int arr[],int n,int target)
{
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	
	while(start<=end)
	{
		//found
		if(arr[mid]==target)
		{
			return mid;
		}
		else if(target>arr[mid])
		{
			start=mid+1;
		}
		else if(target<arr[mid])
		{
			end=mid-1;
		}
		//mistkae karoege
		//mid update
		mid=(start+end)/2;
	}
	//no found
	return -1;
 }
 
 int findfirstocuurance(int arr[],int n,int target)
 {
 	int s=0;
 	int e=n-1;
 	int mid=(s+e)/2;
 	
 	int ans=-1;
 	
 	while(s<=e)
 	{
 		if(arr[mid]==target)
 		{
 			ans=mid;
 			e=mid-1;
		 }
		 else if(target>arr[mid])
		 {
		 	s=mid+1;
		 }
		 else if(target<arr[mid])
		 {
		 	e=mid-1;
		 }
		 mid=(s+e)/2;
	 }
   return ans;
  } 
  
  int findlastocuurance(int arr[],int n,int target)
 {
 	int s=0;
 	int e=n-1;
 	int mid=(s+e)/2;
 	
 	int ans=-1;
 	
 	while(s<=e)
 	{
 		if(arr[mid]==target)
 		{
 			ans=mid;
 			s=mid+1;
		 }
		 else if(target>arr[mid])
		 {
		 	s=mid+1;
		 }
		 else if(target<arr[mid])
		 {
		 	e=mid-1;
		 }
		 mid=(s+e)/2;
	 }
   return ans;
  } 
  
  int totalcouurance(int arr[],int n, int target)
  {
  	int firstcourrance=findfirstocuurance(arr,n,target);
  	int lastcourrance=findlastocuurance(arr,n,target);
  	
  	int ans=lastcourrance-firstcourrance+1;
  	return ans;
  }
  int missingelement(int arr[],int n,int target)
  {
  	int s=0;
  	int e=n-1;
  	int mid=(s+e)/2;
  	int ans=-1;
  	
  	while(s<=e)
  	{
  		int diff=arr[mid]-mid;
  		if(diff==1)
  		{
  			s=mid+1;
		  }
		  else
		  {
		  	ans=mid;
		  	e=mid-1;
		  }
		  mid=(s+e)/2;
	  }
	  if(ans+1==0)
	  {
	  	return n+1;
	  }
	  return ans+1;
  }
    int findpivotindex(vector<int>& arr)
    {
       int n=arr.size();
       int s=0;
       int e=n-1;
       int mid=s+(e-s)/2;

       while(s<=e)
       {
           //corner case
            if(arr[mid] > arr[mid+1])
                return mid;
            else if(arr[mid] < arr[mid-1])
                return mid-1;
            else if(arr[s] > arr[mid] ) 
                e = mid - 1;
            else 
                s = mid + 1;
            
            mid = s + (e-s)/2;
       }
       return -1;
    }
bool mycomp(int &a, int&b)
{
    //return a < b;//increaing order sorting
	return a > b;	
}
bool mycomindex(vector<int> &a, vector<int>&b)
{
    //return a < b;//increaing order sorting
	return a[1] < b[1];	
}     
int main()
{
	//int arr[]={1,2,3,4,5,6,7,8};
	//int target=30;
	//int n=8; 
	
	//int ans=binaryserach(arr,n,target);
	//if(ans == -1)
	//{ 
	//	cout<<"Element not found"<<endl;
	//}
	//else
	//{
	//	cout<<"Element found"<<endl;
	//}
	
	//int ans=findfirstocuurance(arr,n,target);
	//if(ans == -1)
	//{ 
	//	cout<<"Element not found"<<endl;
	//}
	//else
	//{
	//	cout<<"Element found index:"<<ans<<endl;
	//}
	
	//int ans=findlastocuurance(arr,n,target);
	//if(ans == -1)
	//{ 
	//	cout<<"Element not found"<<endl;
	//}
	//else
	//{
	//	cout<<"Element found index:"<<ans<<endl;
	//}
	
	//int ans=totalcouurance(arr,n,target);
	
	
	//cout<<"Total couurance :"<<ans<<endl;
	
	//int ans=missingelement(arr,n,target);
	//cout<<"Missing element is :"<<ans<<endl;
	
  //vector<int> v;
  //v.push_back(2);
  //v.push_back(4);
  //v.push_back(6);
  //v.push_back(8);
  //v.push_back(10);
	
	
	//int pivotindex = findpivotindex(v);
	//cout<<"pivot index:"<<pivotindex<<endl;
	//return 0;
	
	//int divisor=7;
	//int dividend= 35;
	
	//int ans=getQuestint(abs(divisor),abs(dividend));
	
	//sign kinsa legaye
	//if((divisor>0 && dividend<0) || (divisor<0 && dividend>0))
	//{
	//	ans=0-ans;
	//}
	//cout<<"Ans is:"<<ans<<endl;	
	
    //int arr[]={60};
    //int n=1;
    
    //int target=200;
    
    //int targetindex=nearlysearch(arr,n,target);
    //if(targetindex==-1)
    //{
    //	cout<<"Element not found"<<endl;;
	//}
	//else
	//{
	//	cout<<"element fount at Index:"<<targetindex<<endl;
	//}
	
	
	//int arr[]={10,10,2,2,3,3,5,5,6,6,7,7,10};
	//int n=13;
	
	//int ans=findocuuringelement(arr,n);
	//cout<<"Ans is:"<<arr[ans]<<endl;
	
	//vector<int> v={5,4,3,2,1};
	//bubblesort(v);
	//print(v);
	//return 0;
	
	//vector<int> v={44,33,55,22,11};
	//selectionsort(v);
	//print(v);
	//return 0;
	
	//vector<int> v={5,4,3,2,1};
	//insertionsort(v);
	//print(v);
	
	//vector<int> v={5,4,3,2,1};
	//sort(v.begin(),v.end());//increasing order sorrtng
	//sort(v.begin(),v.end(),mycomp);//decrasing order sorrtng
	//print(v);
	
	//vector<vector<int>>v;
	//int n;
	//cout<<"Enter size:"<<endl;
	//cin>>n;
	//for(int i=0;i<n;i++)
	//{
	//	int a,b;
	//	cout<<"Enter a,b:"<<endl;
	//	cin>>a>>b;
	//	vector<int>temp;
	//	temp.push_back(a);
	//	temp.push_back(b);
	//	v.push_back(temp);
	//}
	//printv(v);
	//cout<<"soeted by 1st index:"<<endl;
	//sort(v.begin(),v.end(),mycomindex);
	//printv(v);
	//return 0;
	
	//int a[]={3,4,5,6,11,13,14,15,56,70};
	//int n=sizeof(a) / sizeof(int);
	//int x=13;
	//int ans=expsearch(a,n,x);
	//cout<<ans<<endl;
	//return 0;
	
	//EKO Sponj
	
	//long long int n,m;
	//cin>>n>>m;
	//vector<long long int>trees;
	//while(n--)
	//{
	//	long long int height;
	//	cin>>height;
	//	trees.push_back(height);
	//}
	//cout<<maxSawBladeheight(trees,n)<<endl;
	
	int n=51;
	double sqrt=myprecisionsqrt(n);
	printf("%0.10f",sqrt);
	return 0;
	
}
