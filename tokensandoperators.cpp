1.
#include<iostream>
using namespace std;
int main()
{
	  cout<<"Size of int:"<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of float:"<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of char:"<<sizeof(char)<<" bytes"<<endl;
    cout<<"Size of double:"<<sizeof(double)<<" bytes";
	return 0;
}



2.
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c=a*b;
	cout<<"Product = "<<c;
	return 0;
}
