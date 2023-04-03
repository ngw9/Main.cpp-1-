/*
 * Noah White
 * 16365 COP2334 202301
 * Created with Repl.it
 *
 * Program takes user input
 * Then, starting from 1, outputs each ordinal until the input is reached
 */
#include <iostream>
using namespace std;

int main() {
  int stoppingPoint;
  int i;

  cin >> stoppingPoint;
  for (i = 1; i <= stoppingPoint; i++) {
    cout << i;
    // Sorts if the 10s place is between 10 and 20
    // This makes teens always end with "th"
    // Also determines if the 1s place more than 3
    // Lastly, the condition checks if the 1s place is equal to 0
    if ((((i % 100) >= 10) && ((i % 100) <= 20)) || ((i % 10) > 3) ||
        ((i % 10) == 0))
    // Replit formats this line oddly for some reason
    {
      cout << "th";
    }
    // If the input is not in the above range, it should end in 1, 2, or 3
    else {
      if ((i % 10) == 1) {
        cout << "st";
      } else if ((i % 10) == 2) {
        cout << "nd";
      } else if ((i % 10) == 3) {
        cout << "rd";
      }
    }
    cout << " Hello" << endl;
  }
}