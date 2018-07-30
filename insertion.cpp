#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number of elements in array: ";
	cin>>n;
	int pos,item,i,a[n];
	cout<<"enter elements of array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value to be inserted: ";
	cin>>item;
	cout<<"Enter the position: ";
	cin>>pos;
	pos=pos-1;
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	cout<<"array after insertion: ";
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}

}
