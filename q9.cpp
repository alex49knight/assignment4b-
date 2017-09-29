#include<iostream>
using namespace std;
int fact(int n)
{ if (n>1)
return n*fact(n-1);
else
return 1;
}
int main()
{ 
int x;
cout<<"positive intiger";
cin>> x;
cout<<"factorial of "<<x<<" is "<<fact(x);
reurn 0;
}