#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

bool check(string M)
{
  bool Duplicate = false;
  for (int j = 0; j < 14; j++)
  {
    for (int k = j+1; k < 14; k++)
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
  int processed = 14, i = 0;
  string marker;
  
  fstream file("Day 06 data.txt");

  getline (file,data);
  marker = data.substr(i,14);

  do 
    {
      processed ++;
      i ++;
      marker = data.substr(i,14);
    }
    while (check(marker) != false);

  cout << processed << endl;
  
}