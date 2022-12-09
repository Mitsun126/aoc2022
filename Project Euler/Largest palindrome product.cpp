#include <iostream>
#include <string>
using namespace std;


bool check(int a)
{
  bool result = true;
  int b, c, mid;
  string str = to_string(a); 
  
  mid = str.length()/2;
  b = 0;
  c = str.length()-1;
  while (b<=mid && c>=mid)
    {
      if (str[b] != str[c])
      {
        result = false;
      }
      b++;
      c--;
    }
  
  return result;
}

int main()
{
  int max=0;
  for (int i = 999; i > 0; i--)
    {
      for (int j = 999; j > 0; j--)
        {
          int temp = i*j;
          if (check(temp) == true && temp>max)
          {
            max = temp;
          }
        }
    }
  cout << max;
}