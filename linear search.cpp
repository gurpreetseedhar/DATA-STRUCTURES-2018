#include<iostream>
using namespace std;
int main()
{
	int n,c=0,pos;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int item,i,a[n];
	cout<<"enter the elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to search : ";
	cin>>item;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"item not found";
	}
	else
	{
		cout<<"item found at "<<pos<<"th position";
	}
}
