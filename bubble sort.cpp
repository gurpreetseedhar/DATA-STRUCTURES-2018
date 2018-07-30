#include<iostream>
using namespace std;
int main()
{
	int i,j,n,ch;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n],temp;
	cout<<"enter elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter 0/1 for sorting in\n0. ascending order\n1. descending order\n";
	cin>>ch;
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-1-i;j++)
		{
		    switch(ch)
		    {
            case 0:
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                break;
            }
            case 1:
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                break;
            }
		    }
		}
	}
	cout<<"array after sorting: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

}
