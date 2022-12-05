#include <iostream>
using namespace std;

int fib(int n)
{
  if (n==1)
  {
    return 1;
  }
  else if (n==2)
  {
    return 1;
  }
  else
  {
    return ((fib(n-1)) + fib(n-2));
  }
}

int main()
{
  int sum=0;
  for (int i = 1; i<20; i++)
    {
      if ((fib(i)<4000) && (fib(i)%2==0))
      {
        sum += fib(i);
      }
    }
  cout<<sum<<endl;
}