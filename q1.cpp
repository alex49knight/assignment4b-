#include<iostream>
using namespace std;
int b,e,x,y,a;
int power(int x,int y)
{ if(y!=1)
return (x*power(x,y-1));
else
return 1;
}
int main ()
{
cout<<"enter base and exponent"<<endl;
cin>> b >> e;
cout<< b <<"to the power of "<<e<< =<<a;
return 0;
}

