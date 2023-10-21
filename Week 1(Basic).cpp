#include<iostream>
#include <cmath>
#include<vector>
using namespace std;

void tanspose(int arr[][4],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<i+1;j++)
		{
		  swap(arr[i][j],arr[j][i]);
		}
	}
}

void rowsum(int arr[3][3],int row,int col)
{
	
	for(int i=0;i<row;i++)
	{
		int sum=0;
		for(int j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
		cout <<sum<<endl;
	}
}
int findmax(int arr[3][3],int row,int col)
{
	int maxans=INT_MIN;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]>maxans)
			{
				maxans=arr[i][j];
			}
		}
	}
	return maxans;
}
int findmin(int arr[3][3],int row,int col)
{
	int minans=INT_MAX;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]<minans)
			{
				minans=arr[i][j];
			}
		}
	}
	return minans;
}
bool findtarget(int arr[3][3],int row,int col,int target)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==target)
			{
				return true;
			}
		}
	}
	return false;
}
int printarry(int arr[][4],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int colprintarry(int arr[3][3],int row,int col)
{
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
void printdigits(int n)
{
	while(n>0)
	{
		int rem=n%10;
		cout<<rem<<endl;
		n=n/10;
	}
}
int createnoofdigits(int noofdigits)
{
	int num=0;
	for(int i=0;i<noofdigits;i++)
	{
		cout<<"Enter digit:"<<endl;
		int digit;
		cin>>digit;
		num=num*10+digit;
	}
	return num;
}
void reverse(int n)
{
	int ans=0;
	while(n>0)
	{
		while(n>0)
		{
			int rem=n%10;
			ans=ans*10+rem;
			n=n/10;
		}
	}
	cout<<ans;
}
void evenodd(int n)
{
	//if(n%2==0)
	//{
	//	cout<<"Even No";
	//}
	//else
	//{
	//	cout<<"Odd no";
	//}
	if((n&1)==0)
	{
		cout<<"Even No";
	}
	else
	{
		cout<<"Odd no";
	}
}
int setbits(int n)
{
	//int ans=0;
	//int i=0;
	int count=0;
	//while(n>0)
	//{
	  // int bit=n%2;
	   //if(bit==1)
	   //{
	  // 	count++;
	   //}
	   //n=n/2;
	//}
	while(n>0)
	{
		int bit=n&1;
	   if(bit==1)
	   {
	   	count++;
	   }
	   n=n>>1;
	}
	
	return count;
}
bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
void temp(float n)
{
	float k;
	k=n+273.15;
	float f;
	f=n*1.80+32.00;
	cout<<k<<" "<<f;
}
void kmtomiles(float n)
{
	n=n*0.621371;
	cout<<n;
}
void factorial(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	cout<<sum<<endl;
}
void areaofcircle(int r)
{
	float pie=3.14159265359;
	float area=pie*r*r;
	cout<<"Area of circle is:"<<area;
}
//bool checkprime(int n)
//{
//	for(int i=2;i<n;i++)
//	{
//		if(n%i==0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//void printname(string name)
//{
//	for(int i=0;i<5;i++)
//{
//	cout<<name<<endl;;
//}
//}
//void findsum(int n)
//{
//	int sum=0;
//	for(int i=0;i<=n;i++)
//	{
//		sum=sum+i;
//		
//	}
//	cout<<sum<<endl;
//}
//void sumeven(int n)
//{
//	int sum=0;
//	for(int i=2;i<=n;i+2)
//	{
//		sum=sum+i;
//		
//	}
//	cout<<sum<<endl;
//}
//void evenodd(int n)
//{
//	if(n%2==0)
//	{
//		cout<<"Even No"<<endl;
//	}
//	else
//	{
//		cout<<"Odd no"<<endl;
//	}
//}
//void counting(int n)
//{
//	for(int i=0;i<=n;i++)
//	{
//		cout<<i<<endl;
//	}
//}
//void printmax(int a,int b,int c)
//{
//	if(a>=b && a>c)
//	{
//		cout<<"A is Max:"<<a<<endl;
//	}
//	else if(b>=a && b>=c)
//	{
//		cout<<"B is Max:"<<b<<endl;
//	}
//	else
//	{
//		cout<<"C is Max:"<<c<<endl;
//	}
//}

//void printline()
//{
//	for(int i=0;i<10;i++)
//	{
//		cout<<"Tera Bahii Jogindar"<<endl;
//	}
//}

//int addition(int a,int b)
//{
//	int ans=0;
//	ans=a+b;
//	return ans; 
 //} 
 
 
int main()
{
	//Decimal to binary coversion
//	int n;
//	cout<<"Enter the NO:"<<endl;
//	cin>>n;
	
	//int i=0;
	//int binaryno=0;
	
	//1st method
//	while(n>0)
//	{
//		int bit = n % 2;
//		//cout<<bit<<endl;
//		binaryno = bit*pow(10,i++)+binaryno;
//		n=n/2;
//	}
   //2d method
//	while(n>0)
//	{
//		int bit = n & 1;
//		//cout <<bit<<endl;
//		binaryno = bit*pow(10,i++)+binaryno;
//		n=n>>1;
//	}
//	cout<<binaryno<<endl;

//Binary to Decimal coversion
//int i =0;
//int decimal = 0;
//while(n>0)
//{
//	int bit = n % 10;
//	decimal = decimal + bit * pow(2,i++);
//	n = n/10; 
//	
//}
//cout<<decimal<<endl;
//for(int i=1;i<5;i++)
//{
//	cout<<"Sai"<<endl;;
//}
//	return 0;

//* * * * 
//* * * *
//* * * *
//* * * *
//for(int i=0;i<4;i++)
//{
//	for(int j=0;j<4;j++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//}

//* * * * * 
//* * * * *
//* * * * *
//for(int i=0;i<3;i++)
//{
//	for(int j=0;j<5;j++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//}

//* * * * *
//*       *
//*       *
//* * * * *

//for(int row=0;row<10;row++)
//{
//	for(int col=0;col<10;col++)
//	{
//		if(row==0 || row==9)
//		{
//			cout<<"* ";
//		}
//		else
//		{
//			if(col==0 || col==9)
//			{
//				cout<<"* ";
//
//			}
//			else
//			{
//				cout<<"  ";
//			}
//		}
//	}
//	cout<<endl;
//}

//*
//* *
//* * *
//* * * *
// * * * * *

//for(int row=0;row<10;row++)
//{
//	for(int col=0;col<row+1;col++)
//    {
//    	cout<<"*";
//	}
//	cout<<endl;
//}

//* * * * * 
//* * * *
//* * *
//* *
//*

//int n=10;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//    {
//    	cout<<"*";
//	}
//	cout<<endl;
//}

//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//for(int row=0;row<5;row++)
//{
//	for(int col=0;col<row+1;col++)
//    {
//    	cout<<col+1;
//	}
//	cout<<endl;
//}
//


//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
//int n=10;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//    {
//    	cout<<col+1<<" ";
//	}
//	cout<<endl;
//}

//* * * * *
//*     *
//*   *
//* *
//*
//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//    {
//    	if(row==0 ||row==n-1)
//    	{
//    		cout<<"*";
//		}
//		else
//		{
//			if(col==0 || col==n-row-1)
//			{
//				cout<<"*";
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//      
//	}
//	cout<<endl;
//}	

//    *
//   * *
//  * * *
// * * * *
//* * * * *

//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int space=0;space<n-row-1;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}

//* * * * *
// * * * *
//  * * *
//   * *
//    *

//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int space=0;space<row;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}

//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *
//int num;
//cin>>num;
//int n=num/2;
//for(int row=0;row<n;row++)
//{
//	for(int space=0;space<n-row-1;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//for(int row=0;row<n;row++)
//{
//	for(int space=0;space<row;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;


//    *
//  *   *
// *     *
//*       *
//int n=6;
//for(int row=0;row<n;row=row+1)
//{
//	for(int space=0;space<n-row-1;space=space+1)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col=col+1)
//	{
//		if(col==0 || col==row+1-1)
//		{
//			cout<<"* ";
//		}
//		else
//		{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}

//    *
//   * *
//  * * *
// * * * *
//* * * * *
//* * * * *
// * * * * 
//  * * *
//   * *
//    *
//int num;
//cin>>num;
//int n=num/2;
//for(int row=0;row<n;row=row+1)
//{
//	for(int space=0;space<n-row-1;space=space+1)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col=col+1)
//	{
//		if(col==0 || col==row+1-1)
//		{
//			cout<<"* ";
//		}
//		else
 //	{
//			cout<<"  ";
//		}
//	}
//	cout<<endl;
//}
//for(int row=0; row<n;row++)
//{
//	for(int space=0;space<row;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<n-row;col++)
//	{
//		if(col==0 || col==n-row-1)
//		{
//			cout<<"* ";
//		}
//		else
//		{
//			cout<<"  ";
//		}
//	}
//	cout<<endl;

//**** ****
//***   ***
//**     **
//*       *
//*       *
//**     **
//***   ***
//**** ****
//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"*";
//	}
//	for(int space=0;space<2*row+1;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"*";
//	}
//	
//	cout<<endl;
//}
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"*";
//	} 
//	for(int space=0;space<2*n-2*row-1;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"*";
//	}
//	
//	cout<<endl;
//}

//1
//1*2*
//1*2*3*
//1*2*3*4*
//int n=4;
//
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<2*row+1;col++)
//	{
//	   	if(col%2==1)
//	   	{
//	   		cout<<"*";
//		   }
//		   else
//		   {
//		   	cout<<row+1;
//		   }
//	}
//	cout<<endl;
//}

//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//		if(col==row+1-1)
//		{
//			cout<<row+1;
//		}
//		else
//		{
//			cout<<row+1<<"*";
//		} 
//	}
//	cout<<endl;
//}

//*********
//*      *
//*     * 
//*    *
//*   *
//*  *
//* *
//**
//*
//int n=10;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//	{
//		if(row==0 || row==n-1)
//		{
//		cout<<"*";
//	    }
//	    else
//	    {
//	    	if(col==0 || col==n-row-1)
//	    	{
//	    	cout<<"*";
//	        }
//	        else
//	        {
//	        	cout<<" ";
//			}
//		}
//	}
//	cout<<endl;
//}

//A
//AB
//ABC
//ABCD
//ABCDE

//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//		char ch=col+1+'A'-1;
//		cout<<ch;
//	}
//	cout<<endl;
//}

//A
//ABA
//ABCBA
//ABCDCBA
//ABCDEBCBA
//int n=5;
//for(int row=0;row<n;row++)
//{
//	char ch;
//	for(int col=0;col<row+1;col++)
//	{
//		ch=col+1+'A'-1;
//		cout<<ch;
//	}
//	for(char aplha=ch;aplha>'A';)
//	{
//		aplha=aplha-1;
//		cout<<aplha;
//	}
//	cout<<endl;
//}


//    *
//  *   *
// *     * 
//* * * * *
//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int space=0;space<n-row;space++)
//	{
//		cout<<" ";
//	}
//	for(int col=0;col<row+1;col++)
//	{
//		if(row==0 || row==n-1)
//		{
//			cout<<"* ";
//		}
//		else{
//			if(col==0 ||col==row+1-1)
//			{
//				cout<<"* ";
//			}
//			else
//			{
//				cout<<"  ";
//			}
//		}
//	}
//	cout<<endl;
//}

// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{   if(row==0 || row==n-1)
//	    {
//		cout<<col+1;
///	    }
//	    else
//	    {
//	    	if(col==0 || col==row+1-1)
//	    	{
//	    		cout<<col+1;
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//	}
//	cout<<endl;
//}


//1 2 3 4 5
//2     5
//3   5
//4 5
//5
//int n=5;
//for(int row=0;row<n;row++)
//{
//	for(int col=row+1;col<=n;col++)
//	{
//		if(row==0 ||row==n-1)
//		{
//			cout<<col;	
//		}
//		else
//		{
//			if(col==row+1 ||col==n)
//			{
//				cout<<col;
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//	}
//	cout<<endl;
//}


//* 
//* *
//* * *
//* * * *
//* * *
//* *
//*
//int n=10;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row-1;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}




//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *
//* * * * * * * *
//* * *   * * * * 
//* *       * * * 
//*           * *

//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"* ";
//	}
//	for(int space=0;space<(2*n-2*row-2);space++)
//	{
//		cout<<"  ";
//	}
//	for(int col=0;col<row+1;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"* ";
//	}
//	for(int space=0;space<row*2;space++)
//	{
//		cout<<"  ";
//	}
//	for(int col=0;col<n-row;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}


//1
//2 2
//4 5 6
//7 8 9 10
//11 12 13 14 
//15 16 17 18 19
//int num=1;
//for(int row=0;row<6;row++)
//{
//	
//	for(int col=0;col<=row;col++)
//	{
//		cout<<num<<" ";
//		num++;
//	}
//	cout<<endl;
//}

//int n=7;
//for(int row=1;row<=n;row++)
//{   int no=1;
//	for(int col=1;col<=row;col++)
//	{
//		cout<<no<<" ";
//		no=no*(row-col)/col;
//	}
//	cout<<endl;
//}
//


//* * * * * * * * 1 * * * * * * * *
//* * * * * * * 2 * 2 * * * * * * *
//* * * * * * 3 * 3 * 3 * * * * * *
//* * * * * 4 * 4 * 4 * 4 * * * * *
//* * * * 5 * 5 * 5 * 5 * 5 * * * *
//int n=5;

//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<2*n-row-2;col++)
//	{
//		cout<<"* ";
//	}
//	for(int space=1;space<=row+1;space++)
//	{
//		cout<<row+1<<" * ";
//	}
//	for(int col=0;col<2*n-row-3;col++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}



//1
//2*3
//4*5*6
//7*8*9*10
//7*8*9*10
//4*5*6
//2*3
//1
//int n=4;
//int no=1;
//for(int row=0;row<n;row++)
//{
//	for(int col=0;col<row+1;col++)
//	{
//	   cout<<no;
//	   no++;
//	   if(col<row)
//	   {
//	   	cout<<"*";
//	   }
//	}
//	cout<<endl;
//}

//int start=no-n;
//for(int row=0;row<n;row++)
//{
//	int k=start;
//	for(int col=0;col<n-row;col++)
//	{
//	   cout<<k;
//	   k++;
//	   if(col<n-row-1)
//	   {
//	   	cout<<"*";
//	   }
//	}
//	start = start -(n-row-1);
//	cout<<endl;
//}


//*
//* 1 *
//* 1 2 1 *
//* 1 2 3 2 1 *
//* 1 2 1 *
//* 1 *
//*


//Bitwiase operators

// & | ~ ^
//int a=5;
//int b=10;
//bool no=1;
//cout<< (a&b)<<endl;
//cout<< (a|b)<<endl;
//cout<< ~(no)<<endl;
//cout<< (a^b)<<endl;

//int n=7;
//int ans=(n<<1);
//cout<<ans<<endl;

//n=100;
//ans=(n>>1);
//cout<<ans<<endl;


// Functions
//No return type
//printname("Saiprasad");
//printname("Patil");
//printline();


//Return type//int a=10;
//int b=5;
//int sum=addition(a,b);
//cout<<sum<<endl;

//printmax(80,8,400);
//counting(10);
//evenodd(11);
//findsum(10);
//sumeven(10);
//bool prime =checkprime(1);
//if(prime)
//{
//	cout<<"Prime no"<<endl;
//}
//else
//{
//	cout<<"not prime"<<endl;
//}

//Homework
//factorial(5);
//areaofcircle(10);
//Prime or not
//bool ans=prime(10);
//if(ans)
//{
//	cout<<"Prime no";
//}
//else{
//	cout<<"Not a Prime";
//}
//print all prime no form 1 to n
//int n=50;
//for(int i=2;i<=n;i++)
//{
//	bool ans=prime(i);
//	if(ans)
//  {
//	cout<<i<<" ";
  //  }	
//}
//km to miles
//kmtomiles(5);
//templreature to faranite and kelvin
//temp(36.50);
//count set bits
//int ans=setbits(34);
//cout<<ans;
//even odd
//evenodd(12);
//reverse interger
//reverse(123);

//int n=10;
//int k=2;
//int mask=1<<k;
//int ans=n | mask;
//cout<<ans;

//crete no using diggits 
//int noofdigits;
//cin>>noofdigits;
//int num=createnoofdigits(noofdigits);
//cout<<"Num is:"<<num;

//print all digits of int
//printdigits(6767);

//2D Arrays
  //int arr[3][3]={{10,20,30},
  //             {80,70,60},
	//		   {10,20,30}};
			   		   
 //printarry(arr,row,col);
 //colprintarry(arr,row,col);
 //int arr[3][3];
 //for(int i=0;i<row;i++)
 //{
 //	for(int j=0;j<col;j++)
 //	{
 //	  cout<<"Enter the elements:";
//	   cin>>arr[i][j];	
//	 }
 //}
  //int target=100;
 //cout<<"Fund or not:"<<findtarget(arr,row,col,target);
 //cout<<"Max no is:"<<findmax(arr,row,col)<<endl;
 //cout<<"Min no is:"<<findmin(arr,row,col);
 //rowsum(arr,row,col);
// int row=4;
// int col=4;	
// int arr[][4]={{11,12,13,14},
  //            {15,16,17,18},
	//		   {10,20,30,40},
	//		   {50,60,70,80}
	//		   };

 
 
  //printarry(arr,row,col);
  //cout<<endl;
   //tanspose(arr,row,col);
  //printarry(arr,row,col);			   
 
 //1d array by vector
 //int arr[5];
 //vector<int> v(5);
 
 //v.push_back(5);
 //v.push_back(4);
 //v.push_back(3);
 //v.push_back(2);
 //v.push_back(1);
 
 //for(int i=0;i<v.size();i++)
 //{
 //	cout<<v[i]<<" ";
 //}cout<<endl;
 
  //cout<<v.size()<<endl;
  
  //2d array by vector
  //vector<vector<int>> arr(5,vector<int>(10,-1));
  //for(int i=0;i<arr.size();i++)
 //{
 //	for(int j=0;j<arr[i].size();j++)
 //	{
 //		cout<<arr[i][j]<<" ";
//	 }
 //	cout<<endl;
 //}
//}
	//jagged array
	
	vector<vector<int>> brr;
	
	vector<int> vec1(10,0);
	vector<int> vec2(5,1);
	vector<int> vec3(7,0);
	vector<int> vec4(8,1);
	vector<int> vec5(20,0);
	brr.push_back(vec1);
	brr.push_back(vec2);
	brr.push_back(vec3);
	brr.push_back(vec4);
	brr.push_back(vec5);
	
	for(int i=0;i<brr.size();i++)
 {
 	for(int j=0;j<brr[i].size();j++)
 	{
 		cout<<brr[i][j]<<" ";
	 }
 	cout<<endl;
 }
}
		
	

	


