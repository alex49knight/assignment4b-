#include<iostream>
using namespace std;
void print(int 1,int u)
{ if(1 < u)
cout<< 1<<",";
print(1+1,u);
}
int main()
{
int x,y;
cout<<"number ";
cin>> x;
y=1;
print(y,x);
return 0;
}

