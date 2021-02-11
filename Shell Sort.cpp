#include<iostream>
using namespace std;

void ShellSort(int arr[], int n)
{
	int temp;
	for(int gap = n/2; gap>0 ; gap/=2)
	{
		for(int j=gap;j<n;j++)
		{
			temp = arr[j];
			int i=0;
			for(i=j;i>=gap and arr[i-gap]>temp;i=i-gap)
			{
				arr[i] = arr[i-gap];
			}
			arr[i] = temp;
		}
	}
}

int main()
{
	int arr[8];
	for(int i=0;i<8;i++)
	{
		cout<<"Enter Value "<<i+1<<" = ";
		cin>>arr[i];
	}
	ShellSort(arr,8);
	cout<<"Sorted ARray : ";
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" ,";
		
	}
	cout<<endl;
	
	
	system("pause");
}
