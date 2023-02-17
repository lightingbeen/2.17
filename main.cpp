#include <iostream>

#include "swap.h"
using namespace std;
int main() {
  int x = 10, y = 20;
  cout << "x=" << x << "y=" << y << endl;
  swap(x, y);
  cout << "x=" << x << "y=" << y << endl;
  return 0;
}