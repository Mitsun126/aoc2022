#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string mytext;
  int total = 0;
  int addScore = 0;

  ifstream Info("Day 2.txt");

  while (getline(Info, mytext)) {

    if (mytext[2] == 'X') {
      addScore = 1;

      if (mytext[0] == 'A') {
        addScore += 3;
      }

      else if (mytext[0] == 'C') {
        addScore += 6;
      }
      total += addScore;
    }

    if (mytext[2] == 'Y') {
      addScore = 2;

      if (mytext[0] == 'A') {
        addScore += 6;
      }

      else if (mytext[0] == 'B') {
        addScore += 3;
      }

      total += addScore;
    }

    if (mytext[2] == 'Z') {
      addScore = 3;

      if (mytext[0] == 'B') {
        addScore += 6;
      }

      else if (mytext[0] == 'C') {
        addScore += 3;
      }

      total += addScore;
    }
  }
  cout << total << endl;
}
