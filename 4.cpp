#include<iostream>
using namespace std;
int sum(int u)
{ if(u!=1)
return u+sum(u-1);
else
return 1;
}
int main()
{
int x,y;
cout<<"last term";
cin>> x;
y=sum(x);
cout<<"sum of all natural numbers upto"<<x<<"is"<<y;
return 0;
}

