#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"Enter the value of a and b:";
cin>>a>>b;
cout<<"values of a and b before swapping: "<<a<<" & " <<b;

   a=a+b;
   b=a-b;
   a=a-b;
cout<<"\n value of a and b after swapping the values: "<<a<< " & " <<b;
}
