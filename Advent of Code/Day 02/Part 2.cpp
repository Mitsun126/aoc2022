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
      addScore = 0;

      if (mytext[0] == 'A') {
        addScore += 3;
      }

      else if (mytext[0] == 'B') {
        addScore += 1;
      }

      else if (mytext[0] == 'C'){
        addScore += 2;
      }
      total += addScore;
    }

    if (mytext[2] == 'Y') {
      addScore = 3;

      if (mytext[0] == 'A') {
        addScore += 1;
      }

      else if (mytext[0] == 'B') {
        addScore += 2;
      }

      else if (mytext[0] == 'C'){
        addScore += 3;
      }

      total += addScore;
    }

    if (mytext[2] == 'Z') {
      addScore = 6;

      if (mytext[0] == 'A') {
        addScore += 2;
      }

      else if (mytext[0] == 'B') {
        addScore += 3;
      }

      else if (mytext[0] == 'C'){
        addScore += 1;
      }

      total += addScore;
    }
  }
  cout << total << endl;
}
