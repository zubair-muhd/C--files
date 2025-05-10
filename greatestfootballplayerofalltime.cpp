#include <iostream>
#include <string>

using namespace std;

int main()
{
  string candidates[4] = {"Cristiano Ronaldo", "Lionel Messi", "Diego Maradona", "Pele"};
  int votes[4] = {0, 0, 0, 0}; // Initialize all votes to 0
  int numVotes;

  cout << "Welcome to the Greatest Football Player of All Time poll!" << endl;
  cout << "Please choose one of the following candidates by entering their number:" << endl;

  // Print out the candidates and their corresponding numbers
  for (int i = 0; i < 4; i++)
  {
    cout << i + 1 << ": " << candidates[i] << endl;
  }

  cout << "Enter '0' to exit the poll." << endl;

  while (true)
  {
    cout << "Enter your vote: ";
    cin >> numVotes;

    if (numVotes == 0)
    {
      break;
    }
    else if (numVotes > 0 && numVotes <= 4)
    {
      votes[numVotes - 1]++;
    }
    else
    {
      cout << "Invalid input. Please try again." << endl;
    }
  }

  cout << "Thank you for participating in the poll!" << endl;
  cout << "Here are the final results:" << endl;

  // Print out the results
  for (int i = 0; i < 4; i++)
  {
    cout << candidates[i] << ": " << votes[i] << " votes" << endl;
  }

  return 0;
}
