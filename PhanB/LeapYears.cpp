#include<iostream>
using namespace std;
int main()
{
    int years;
    cout<<"Nhap vao nam kiem tra: ";
    cin>>years;
    if(years%100==0)
    {
    	if(years%400==0)
    	{
    		cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
	else
	{
		if(years%4==0)
		{
			cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
	return 0;
}
