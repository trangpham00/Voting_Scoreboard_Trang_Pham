// Trang Pham
// EC - Voting Scoreboard
// COSC 1437: Dr. T
// 4/29/2020


// Credit to Dr. T's basketball scoreboard template that this program was modified after

#include <iostream>

using namespace std;

class Candidate
{
  private:
    string firstName,
           lastName,
           party;
    bool leadStatus;
    int currentVoteCount;

  public:
    Candidate()     // default constructor
    {
      currentVoteCount = 0;
      leadStatus = true;
    }

    void setFirstName(string fn)
    { firstName = fn; }
    void setLastName(string ln)
    { lastName = ln; }
    void setParty(string par)
    { party = par; }
    void setLeadStatus(bool ls)
    { leadStatus = ls; }
    void setCurrentVoteCount(int cvc)
    { currentVoteCount = cvc; }

    string getFirstName() const
    { return firstName; }
    string getLastName() const
    { return lastName; }
    string getParty() const
    { return party; }
    bool getLeadStatus() const
    { return leadStatus; }
    int getCurrentVoteCount() const
    { return currentVoteCount; }

};

/*
void scoreboardControls(Scoreboard &sData)
{
  char decision = '\0';
  char newQuarter;
  int newScore = 0;
  int newTimeouts = 0;
  int newDown = 0;
  int newYardsToGo = 0;
  string newName,
         newCity,
         newCoach;

  do
  {
        //show the scoreboard
        system("clear");
        sData.showScoreboard();
        cout << "SCOREBOARD MENU: " << endl;
        cout << "A. Update Home Team Name" << endl;
        cout << "B. Update Away Team Name" << endl << endl;
        cout << "1. Update Home Team Score" << endl;
        cout << "2. Update Home Team Timeouts" << endl;
        cout << "3. Update Away Team Score" << endl;
        cout << "4. Update Away Team Timeouts" << endl;
        cout << "5. Update Down" << endl;
        cout << "6. Update Yards-To-Go" << endl;
        cout << "7. Update Quarter" << endl << endl;
        cout << "X. Exit" << endl << endl;
        cout << "Enter choice: ";
        cin >> decision;

        if (decision == 'a' || decision == 'A')
        {
          cout << "Home Team Name Update \n";
          cout << "Enter Home Team Name: ";
          cin.ignore();
          getline(cin, newName);
          sData.team1.setName(newName);
        }
        if (decision == 'b' || decision == 'B')
        {
          cout << "Away Team Name Update \n";
          cout << "Enter Away Team Name: ";
          cin.ignore();
          getline(cin, newName);
          sData.team2.setName(newName);
        }
        else if (decision == '1')
        {
          cout << "Home Team Score Update \n";
          cout << "New score: ";
          cin >> newScore;
          sData.team1.setScore(newScore);
        }
        else if (decision == '2')
        {
          cout << "Home Team Timeouts Update \n";
          cout << "New number of timeouts: ";
          cin >> newTimeouts;
          sData.team1.setTimeoutCount(newTimeouts);
        }
        else if (decision == '3')
        {
          cout << "Away Team Score Update \n";
          cout << "New score: ";
          cin >> newScore;
          sData.team2.setScore(newScore);
        }
        else if (decision == '4')
        {
          cout << "Away Team Timeouts Update \n";
          cout << "New number of timeouts: ";
          cin >> newTimeouts;
          sData.team2.setTimeoutCount(newTimeouts);
        }
        else if (decision == '5')
        {
          cout << "Down Update \n";
          cout << "New down: ";
          cin >> newDown;
          sData.setDown(newDown);
        }
        else if (decision == '6')
        {
          cout << "Yards-To-Go Update \n";
          cout << "New Yards-To-Go: ";
          cin >> newYardsToGo;
          sData.setYardsToGo(newYardsToGo);
        }
        else if (decision == '7')
        {
          cout << "Quarter Update \n";
          cout << "New quarter: ";
          cin >> newQuarter;
          sData.setQuarter(newQuarter);
        }
        else if (decision == 'x' || decision == 'X')
        {
          cout << "\nEXIT. Go Cowboys!" << endl;
        }

  }while(decision != 'x' && decision != 'X');

}.  */

int main()
{
  Candidate cand1;
  Candidate cand2;
  char decision;
  string newFirstName,
         newLastName,
         newParty;
  int newVoteCount;
  do
  {
    // Clears the previous board and update it with the new info
    system("clear");

    // Displaying the score board
    cout << "***************WELCOME TO THE VOTING SCOREBOARD***************\n\n\n";
    cout << "Candidate 1: " << cand1.getFirstName() << " " << cand1.getLastName() << endl;
    cout << "Party Affiliation: " << cand1.getParty() << endl;
    cout << "Current Vote Count: " << cand1.getCurrentVoteCount() << endl << endl;

    cout << "Candidate 2: " << cand2.getFirstName() << " " << cand2.getLastName() << endl;
    cout << "Party Affiliation: " << cand2.getParty() << endl;
    cout << "Current Vote Count: " << cand2.getCurrentVoteCount() << endl << endl;

    // Scoreboard controls
    cout << "***************SCOREBOARD MENU***************\n\n\n";
    cout << "(1) Update Candidate 1's Name " << endl;
    cout << "(2) Update Candidate 2's Name " << endl;
    cout << "(3) Update Candidate 1's Party" << endl;
    cout << "(4) Update Candidate 2's Party" << endl << endl;
    cout << "(A) Update Candidate 1's Vote Count" << endl;
    cout << "(B) Update Candidate 2's Vote Count" << endl << endl;
    cout << "(X) Exit" << endl << endl;
    cout << "Enter choice: ";
    cin >> decision;

    if (decision == '1')
    {
      cout << "\nCandidate 1 Name Update" << endl;
      cout << "Enter Candidate 1's First Name: ";
      cin.ignore();
      getline(cin, newFirstName);
      cand1.setFirstName(newFirstName);
      cout << "Enter Candidate 1's Last Name: ";
      getline(cin, newLastName);
      cand1.setLastName(newLastName);
      //NO NEED for cin.ignore() in the second getline function
      //Already using the cin.ignore() called first
    }
    else if (decision == '2')
    {
      cout << "\nCandidate 2 Name Update" << endl;
      cout << "Enter Candidate 2's First Name: ";
      cin.ignore();
      getline(cin, newFirstName);
      cand2.setFirstName(newFirstName);
      cout << "Enter Candidate 2's Last Name: ";
      getline(cin, newLastName);
      cand2.setLastName(newLastName);
      //NO NEED for cin.ignore() in the second getline function
      //Already using the cin.ignore() called first
    }
    else if (decision == '3')
    {
      cout << "\nCandidate 1 Party Update" << endl;
      cout << "Enter Candidate 1's Party Affiliation: ";
      cin.ignore();
      getline(cin, newParty);
      cand1.setParty(newParty);
    }
    else if (decision == '4')
    {
      cout << "\nCandidate 2 Party Update" << endl;
      cout << "Enter Candidate 2's Party Affiliation: ";
      cin.ignore();
      getline(cin, newParty);
      cand2.setParty(newParty);
    }
    else if (decision == 'a' || decision == 'A')
    {
      cout << "\nCandidate 1 Vote Count Update" << endl;
      cout << "Enter Candidate 1's Current Vote Count: ";
      cin >> newVoteCount;
      cand1.setCurrentVoteCount(newVoteCount);
    }
    else if (decision == 'b' || decision == 'B')
    {
      cout << "\nCandidate 2 Vote Count Update" << endl;
      cout << "Enter Candidate 2's Current Vote Count: ";
      cin >> newVoteCount;
      cand2.setCurrentVoteCount(newVoteCount);
    }
    else if (decision == 'x' || decision == 'X')

    {
      cout << "HAVE A NICE DAY!!";
    }
  }while(decision != 'x' && decision != 'X');



  return 0;
}
