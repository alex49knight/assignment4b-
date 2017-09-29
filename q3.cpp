#include<iostream>
using namespace std;
void print(int 1,int u);
{ if(1<u && 1%2==0)
cout<< 1 <<",";
print(1+1,u);
}
int main()
{
int x,y;
cout<<"lower limit";
cin>> y;
cout<<"upper limit ";
cin>> x;
cout<<even numbers between"<<y<<"and<<x<<"are"<<endl;
print(y,x);
return 0;
}