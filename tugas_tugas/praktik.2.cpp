#include <iostream>
#include <iomanip>

using namespace std;

int n;
int data[100];
int pos, tukar, j;

int selectionsort()
{
	for (int i=0;i<n;i++)
	{
		pos=i;
		for (int j=i+1;j<n;j++)
		{
			if (data[j]<data[pos])
			{
				pos=j;
			}
		}
		if (pos !=i)
		{
			tukar=data[pos];
			data[pos]=data[i];
			data[i]=tukar;
		}
		cout<<"\nlangkah ke "<<i+1<<endl;
		for (int x=0;x<n;x++)
		{
		cout<<data[x]<<setw(4);
		}
		cout<<endl;
	}	
	
}
int main()
{
	cout<<"SELECTION SORTING"<<endl;
	cout<<"Masukan banyak data : ";
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cout<<"Data ke-"<<i+1<<" ";
		cin>>data[i];
	}
	cout<<"Tampilan Data Sebelum Sorting"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<data[i]<<setw(4);
	}
	selectionsort();
	cout<<"Tampilan Data Setelah disorting"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<data[i]<<setw(4);
	}
}
