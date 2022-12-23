#include<iostream>
#include<math.h>
using namespace std ;
int sum(int a,int b)    
{
return (a+b);
}
int sub(int a,int b)
{
return (a-b);
}
int prod(int a,int b)
{
return (a*b);
}
float divd(float a,float b)
{
return (a/b);
}
int rem(int a,int b)
{
return (a%b);
}
float log(int a)
{
return  log(a);
}
int sqrt(int a,int b)
{
return sqrt(a);
}
int sqrt(int b)
{
return sqrt(b);
}
int main()
{
float a,b,num;
cout<<"enter the first number:"<<endl;
cin>>a;
cout<<"enter the second number = "<<endl;
cin>>b;
num=sum(a,b);
cout<<"addition of two number = ";
cout<<num<<endl;
num=sub(a,b);
cout<<"subtraction of two number = ";
cout<<num<<endl;
num=prod(a,b);
cout<<"product of two number = ";
cout<<num<<endl;
num=rem(a,b);
cout<<"remainder of two number = ";
cout<<num<<endl;
num=divd(a,b);
cout<<"division of two number = ";
cout<<num<<endl;
num=log(a);
cout<<"The log is =  ";
cout<<num<<endl;
num=sqrt(a);
cout<<"square root is = ";
cout<<num<<endl;
num=sqrt(b);
cout<<"square root is = ";
cout<<num<<endl;
}


    