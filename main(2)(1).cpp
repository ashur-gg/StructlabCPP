/*  Modify the C++ program so that it displays the output exactly as shown.  
You MUST use one cout statement with a series of format specifiers

Name        Age      IQ
----        ---     -----
Frodo        22     112.2
Sam          32      94.3
Bilbo       134     136.1
Pippin       12      86.2
Merry         8      42.3

Title : C++ Formatting Lab
Desc  : Practice Formatting string with cout
Author: Ashur Baroutta
Date  : 06/18/23


*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  string names[] = {"Frodo","Sam","Bilbo","Pippin","Merry"};
  int age[] = {22, 32, 134, 12, 8};
  float iq[] = {112.2, 94.34, 136.123, 86.2, 42.3 };

  cout << "Name        Age      IQ\n";
  cout << "----        ---     -----\n";
  for (int i = 0; i < 5; i++) {
    cout << setw(7) << left << names[i] << setw(8) << right << age[i] << setw(10) << fixed << setprecision(1) << iq[i] << endl;
  }
}