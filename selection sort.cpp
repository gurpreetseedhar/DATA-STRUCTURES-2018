#include<iostream>
using namespace std;
int main()
{
	int n,i,j,ch;
	cout<<"Enter the Number of elements: ";
	cin>>n;
	int a[n];
	cout<<"enter elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter 0/1 for sorting in\n0. ascending order\n1. descending order\n";
	cin>>ch;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    switch(ch)
		    {
		        case 0:
                {
                    if(a[i]>a[j])
                    {
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                    break;
                }
                case 1:
                {
                    if(a[i]<a[j])
                    {
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
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
