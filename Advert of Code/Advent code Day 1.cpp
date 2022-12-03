#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
  //declaring variables
  string myText;
  int calories;
  int total = 0;
  int temp = 0;
  int top[3] = {0,0,0};

  
  // reading from file
  ifstream caloriesfile("Advert_Day_1.txt");

  while (getline(caloriesfile, myText))
  {
    if (myText != "")
    {
      calories = stoi(myText);
      temp += calories;
    }
    else
    {
      for (int i = 0; i < 3; i++)
        {
          if (temp > top[i])
          {
            top[i] = temp;
            break;
          }
          
          int n = sizeof(top)/sizeof(top[i]);
          sort(top, top + n);
        }
      temp = 0;
    }
  }
  for (int i = 0; i < 3; i++)
    {
      total += top[i];
    }
  cout << total << endl;
}
