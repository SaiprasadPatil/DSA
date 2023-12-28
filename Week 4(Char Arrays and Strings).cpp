#include<iostream>
#include<string.h>
using namespace std;

int findlenght(char ch[],int size)
{
	int index=0;
	
	while(ch[index]!='\0')
	{
		index++;
	}
	//int length=0;
	
	//for(int i=0;i<size;i++)
	//{
	//	if(ch[i]=='\0')
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		length++;
	//	}
	//}
	return index;
}
int reversestring(char ch[],int n)
{
	int i=0;
	int j=n-1;
	
	while(i<=j)
	{
		swap(ch[i],ch[j]);
		i++;
		j--;
	}
}
void converttouppercase(char ch[],int n)
{
	int index=0;
	
	while(ch[index]!='\0')
	{
		char currentchar=ch[index];
		if(currentchar>='a' && currentchar<='z')
		{
			ch[index]=currentchar-'a'+'A';
		}
		index++;
	}
}
void replacecharachter(char ch[],int n)
{
    int index=0;
    
	while(ch[index]!='\0')
	{
		if(ch[index]=='@')
		{
			ch[index] = ' ';
		}
		index++;
	}
}
bool checkpailnedrom(char ch[],int n)
{
	int i=0;
	int j=n-1; 
	
	while(i<=j)
	{
		if(ch[i]==ch[j])
		{
			i++;
		    j--;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//creation
	//char ch[100];
	
	//input
	//cin>>ch;
	//cin.getline(ch,100);
	//print
	//cout<<ch;
	
	//printing using fore loop
	//for(int i=0;i<10;i++)
	//{
	//	cout<<"At index:"<<i<<" "<<ch[i]<<endl;
	//}
	
	//char temp=ch[9];
	//int value=temp;
	//cout<<"printing integer value:"<<value;
	
	
	//1.find length of string
	//char ch[100];
	//cin>>ch;
	//cin.getline(ch,100);
	
	//int len=findlenght(ch,100);
	//cout<<"Length of string:"<<len<<endl;
	//cout<<"printing Length of string:"<<strlen(ch)<<endl;
	
	//2.Reverse string
	//char ch[100];
	//cin.getline(ch,100);
	
	//cout<<"Before:"<<ch<<endl;
	//int len=findlenght(ch,100);
	//reversestring(ch,len);
	//cout<<endl<<"After:"<<ch<<endl; 
	
	//3.Convert to upper case
	//char ch[100];
	//cin. getline(ch,100);
	
	//cout<<"Before:"<<ch<<endl;
	//converttouppercase(ch,100);
	//cout<<endl<<"After:"<<ch<<endl;
	//return 0;
	
	//4.Replace @ to _
	//char ch[100];
	//cin. getline(ch,100);
	//cout<<"Before:"<<ch<<endl;
	//replacecharachter(ch,100);
	//cout<<endl<<"After:"<<ch<<endl;
	//return 0;
	
	//5.check Pailnedrom
	//char ch[100];
	//cin.getline(ch,100);
	
	//int len=findlenght(ch,100);
	//bool result=checkpailnedrom(ch,len);
	//if(result)
	//{
	//	cout<<"String is Pailnedrom";
	//}
	//else
	//{
	//	cout<<"Not Paindrom";
	//}
	
	//String
	
	//creation
	//string name;
	
	//input
	//cin>>name;
	//space and tab used 
	//getline(cin,name);
	
	//output
	//cout<<name<<endl;
	
	//print 1st char
	//cout<<name[0]<<endl;
	
	//loop
	//int index=0;
	//while(name[index]!='\0')
	//{
	//	cout<<"index:"<<index<<"Char:"<<name[index]<<endl;
	//	index++;
	//}
	//
	//	cout<<endl<<"Print value:"<<name[9]<<endl;
	//	int value=name[9];
	//	cout<<endl<<"Print value:"<<value<<endl;
	
	
	string name;
	cin>>name;
	//empty string
	string temp=" ";
	string str1="sai";
	string str2="patil";
	
	cout<<"Length of string:"<<name.length()<<endl;
	cout<<"String is empty or not:"<<temp.empty()<<endl;
	cout<<"Charcater at postion 0 is:"<<name.at(0)<<endl;
	cout<<"Front Charcater is:"<<name.front()<<endl;
	cout<<"Back Charcater is:"<<name.back()<<endl;
	//append
	cout<<"Before append:"<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
	str1.append(str2);
	cout<<"After append:"<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
	string desc="this is a car";
	desc.erase(4,3);
	cout<<desc<<endl;
	string name1="Sai Patil";
	string name2="Dipak";
	name1.insert(4,name2);
	cout<<name1<<endl;
	string name3="sai";
	cout<<name3<<endl;
	name3.push_back('P');
	cout<<name3<<endl;
	name3.push_back('A');
	cout<<name3<<endl;
	name3.pop_back();
	cout<<name3<<endl;
	//find
	string str3="yar ter super star desi kalakar";
	string str4="star";
	
	if(str3.find(str4)==string::npos)
	{
		cout<<"Not found"<<endl;
	}
	else
	{
		cout<<"Found"<<endl;
	}
	
	//compare
	string str5="sai";
	string str6="sai";
	if(str5.compare(str6)==0)
	{
		cout<<"Matching"<<endl;
	}
	else
	{
		cout<<"not Matching";
	}
	
	//substr
	
	string desc1="this is a car, big daddy of all suvs";
	
	cout<<desc1.substr(19,5);
	
	
	
	
	
	
}
