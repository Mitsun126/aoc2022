#include <iostream>
using namespace std;

int main()
{
  long x = 600851475143;

  for (int factor = 2; factor * factor <=x; factor ++)
    {
      while (x % factor == 0 && factor != x)
        {
          x = x/factor;
        }
    }
  cout << x << endl;
}