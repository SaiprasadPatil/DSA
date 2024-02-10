#include<iostream>
using namespace std;

void merge(int arr[],int s,int e)
{
	int mid=(s+e)/2;
	
	int lengthleft=mid-s+1;
	int lengthright=e-mid;
	
	int *left=new int[lengthleft];
	int *right=new int[lengthright];
	
	//copy values from left and right
	int k=s;
	//k start index of left array origanal array 
	for(int i=0;i<lengthleft;i++)
	{
		left[i]=arr[k];
		k++;
	}
	
	k=mid+1;
	//k start index of right array origanal array
	for(int i=0;i<lengthright;i++)
	{
		right[i]=k;
		k++;
	}
	
	//actual merge logic here
	int leftindext=0;
	int rightindex=0;
	//yai galti karoge
	int mainarrayindex=s;
	
	while(leftindext<lengthleft && rightindex<lengthright)
	{
		if(left[leftindext]<right[rightindex])
		{
			arr[mainarrayindex]=left[leftindext];
			mainarrayindex++;
			leftindext++;
		}
		else
		{
			arr[mainarrayindex]=right[rightindex];
			mainarrayindex++;
			rightindex++;
		}	
	}
	//2 more case
	//1 case=left exhust but right array me element abhi bache hai
	while(rightindex<lengthright)
	{
		arr[mainarrayindex]=right[rightindex];
		mainarrayindex++;
		rightindex++;
	}
	//2 case=right exhust but left array me element abhi bache hai
	while(leftindext<lengthleft)
	{
		arr[mainarrayindex]=left[leftindext];
		mainarrayindex++;
		leftindext++;
	}
	
	//1 more step case
	delete[] left;
	delete[] right;
	
}
void mergesort(int arr[],int s,int e)
{
	//base case
	if(s>e)
	{
		return ;
	}
	if(s==e)
	{
		return ;
	}
	
	//break
	int mid=(s+e)/2;
	//s==mid==left
	//mid+1==e==right
	
	//recursive call
	//left and right ko sort karo
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	
	//merge 2 sorted array
	merge(arr,s,e);
}
void printPerminutation(string &str,int i)
{
	if(i>=str.length())
	{
		cout<<str<<" ";
		return ;
	}
	for(int j=i;j<str.length();j++)
	{
		swap(str[i],str[j]);
		//recurasive call
		printPerminutation(str,i+1);
		//backtracking call for call by refernce
		swap(str[i],str[j]);
	}
}
//bool isSafe(int i,int j,int newi,int newj,int maze[][4],int row,int col, vector<vector<bool>> &visited)
//{
//	if(
//		(newi >=0 && newi <row) &&
//		(newj >=0 && newj < col) &&
//		maze[newi][newj] == 1 &&
//		visited[newi][newj] == false)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void printPath(int maze[][4],int row,int col,int i,int j,string &output, vector<vector<bool>>&visited)
//{
//	//base case 
//	if(i==row-1 && j==col-1)
//	{
///		cout<<output<<" ";
//		return ;
//	}
//	
//	//up
//	int newi=i-1;
//	int newj=j;
//	if(isSafe(i,j,newi,newj,maze,row,col,visited))
//	{
//		//mark
//		visited[newi][newj]=true;
//		//cal rescursive
//		output.push_back('U');
//		printPath(maze,row,col,newi,newj,output,visited)
//		//backtraking
//		output.pop_back();
//		visited[newi][newj]=false;
//	}
	
	//down
//	newi=i;
///	newj=j+1;
//	if(isSafe(i,j,newi,newj,maze,row,col,visited))
//	{
//		//mark
///		visited[newi][newj]=true;
//		//cal rescursive
//		output.push_back('R');
//		printPath(maze,row,col,newi,newj,output,visited)
//		//backtraking
//		output.pop_back();
//		visited[newi][newj]=false;
//	}
	//right
//	newi=i+1;
//	newj=j;
//	if(isSafe(i,j,newi,newj,maze,row,col,visited))
//	{
		//mark
//		visited[newi][newj]=true;
		//cal rescursive
//		output.push_back('D');
//		printPath(maze,row,col,newi,newj,output,visited)
		//backtraking
//		output.pop_back();
//		visited[newi][newj]=false;
//	}
	
	//left
//	newi=i;
//	newj=j-1;
//	if(isSafe(i,j,newi,newj,maze,row,col,visited))
//	{
//		//mark
//		visited[newi][newj]=true;
//		//cal rescursive
//		output.push_back('L');
//		printPath(maze,row,col,newi,newj,output,visited)
//		//backtraking
//		output.pop_back();
//		visited[newi][newj]=false;
//	}
//}
int slove(int arr[],int s,int e)
{
	if(s>=e)
	{
		return 1;
	}
	int option1=arr[s]+slove(arr,s+2,e);
	int option2=0+slove(arr,s+1,e);
	int ans=max(option1,option2);
	return ans;
	
}
int main()
{
	//int arr[]={2,1,6,9,4,5};
	//int size=6;
	//int s=0;
	//int e=size-1;
	//cout<<"before merge sort:"<<endl;
	//for(int i=0;i<size;i++)
	//{
	//	cout<<arr[i]<<" ";
	//}
	//cout<<endl;
	//mergesort(arr,s,e);
	//cout<<"After merge sort:"<<endl;
	//for(int i=0;i<size;i++)
	//{
	//	cout<<arr[i]<<" ";
	//}
	
	//backtracking concept
	//string str="abc";
	//int i=0;
	//printPerminutation(str,i);
	
	//int maze[4][4]={
	//	{1,0,0,0},
	//	{1,1,0,0},
	//	{1,1,0,0},
	//	{1,1,1,1}
	//	
	//	};
		
		//int row=4;
		//int col=4;
		//int i=0;
		//int j=0;
		//string output="";
		//vector<vector<bool>>visited(row,vector<bool>(col,false));
		//if(maze[0][0]==0)
		//{
			//i j is close 
		//	cout<<"no path exist"<<endl;
		//}
		//else
		//{
		//	visited[i][j]=true;
		//	printPath(maze,row,col,i,j,output,visited);
		//}
		
		int arr[]={1,2,3,1};
		int size=4;
		int index=0;
		int ans=slove(arr,index,size);
		cout<<ans<<endl;
		
	}

