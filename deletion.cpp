#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int pos,item,i,a[n];
	cout<<"enter elements of array: ";
	for(i=0;i<n;i++)
    {
		cin>>a[i];
	}
	cout<<"Enter position of element you want to delete: ";
	cin>>pos;
	for(i=pos;i<n;i++)
	{
		a[i-1]=a[i];
	}
	cout<<"array after deletion: ";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
