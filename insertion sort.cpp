#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number of elements in array: ";
	cin>>n;
	int i,j,a[n];
	cout<<"enter elements of array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		j=i;
 		while (j>0 && a[j-1]>a[j])
 		{
 			int temp=a[j];
 			a[j]=a[j-1];
 			a[j-1]=temp;
 			j--;
 		}
	}
	cout<<"array after sorting: ";
	for(i=0;i<n;i++)
	{
        cout<<a[i]<<" ";
    }
}
