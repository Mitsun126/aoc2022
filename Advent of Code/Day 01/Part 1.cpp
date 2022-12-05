#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  //declaring variables
  string myText;
  int calories;
  int maximum = 0;
  int temp = 0;

  
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
      if (temp > maximum)
      {
        maximum = temp;
      }
      temp = 0;
    }
  }
  cout << maximum << endl;
}
