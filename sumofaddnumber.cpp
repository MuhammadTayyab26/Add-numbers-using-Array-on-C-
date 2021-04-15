#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	int i,sum=0;
	
	for(i=0;i<10;i++)
	{
		cout<<"enter unmber "<<endl;
		cin>>arr[i];
		
	}
     for(i=0;i<10;i++)
     {
     	if(arr[i]%2!=0)
     	{
     		sum=sum+arr[i];
		 }
	 }
cout<<"sum ="<<sum<<endl;



getch();
return 0;
}

