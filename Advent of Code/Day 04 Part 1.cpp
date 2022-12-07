#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int delim1, delim2, delim3, count = 0;
  string temp1, temp2, line;
  int a, b, c, d;

  fstream data("Day 04 data.txt");

  while (getline(data, line)) {
    delim1 = line.find(',');
    temp1 = line.substr(0, delim1);
    temp2 = line.substr(delim1 + 1, line.length() - delim1 - 1);

    delim2 = temp1.find('-');
    delim3 = temp2.find('-');

    a = stoi(temp1.substr(0, delim2));
    b = stoi(temp1.substr(delim2 + 1, temp1.length() - 1 - delim2));
    c = stoi(temp2.substr(0, delim3));
    d = stoi(temp2.substr(delim3 + 1, temp2.length() - 1 - delim3));

    if ((a >= c && b <= d) || (c >= a && d <= b)) {
      count++;
    }
  }
  cout << count << endl;
}