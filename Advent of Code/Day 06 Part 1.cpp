#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

bool check(string M)
{
  bool Duplicate = false;
  for (int j = 0; j < 4; j++)
  {
    for (int k = j+1; k < 4; k++)
      {
        if (M[j] == M[k])
        {
          Duplicate = true;
        }
      }
  }
  return Duplicate;
}

int main() 
{
  string data;
  int processed = 4, i = 0;
  string marker;
  
  fstream file("Day 06 data.txt");

  getline (file,data);
  marker = data.substr(i,4);

  do 
    {
      processed ++;
      i ++;
      marker = data.substr(i,4);
    }
    while (check(marker) != false);

  cout << processed << endl;
  
}