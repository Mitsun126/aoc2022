#include <iostream>
using namespace std;

int main()
{
  long square=0, sum=0, sqrsum=0;
  
  for (int i=1; i<101; i++)
    {
      sqrsum += i*i;
      sum+=i;
    }

  square = sum*sum;

  long diff = square - sqrsum;
  cout<<diff;
    
}