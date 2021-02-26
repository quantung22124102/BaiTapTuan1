#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cout<<"Nhap hai so a,b: ";
	cin>>a>>b;
	float distance;
	distance=sqrt(a*a+b*b);
	cout<<"distance = "<<distance;
	return 0;
}
