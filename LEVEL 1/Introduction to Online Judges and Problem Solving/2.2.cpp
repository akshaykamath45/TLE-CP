#include <iostream>
#include <string>

using namespace std;

int main() {
  // Read in the current situation
  string situation;
  cin >> situation;

  // Initialize a counter for the number of consecutive players
  int consecutive_players = 1;

  // Iterate through the situation and check for danger
  for (int i = 1; i < situation.size(); i++) {
    if (situation[i] == situation[i - 1]) {
      // If the current player is the same team as the previous player,
      // increment the consecutive player counter
      consecutive_players++;
    } else {
      // If the current player is on a different team, reset the consecutive
      // player counter
      consecutive_players = 1;
    }

    // If there are 7 or more consecutive players, the situation is dangerous
    if (consecutive_players >= 7) {
      cout << "YES" << endl;
      return 0;
    }
  }

  // If the loop finishes and we haven't found 7 or more consecutive players,
  // the situation is not dangerous
  cout << "NO" << endl;

  return 0;
}
