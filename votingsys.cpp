#include <iostream>
using namespace std;

#define CANDIDATE_COUNT 4

#define CANDIDATE1 "Candidate 1: Vishwas M"
#define CANDIDATE2 "Candidate 2: Ajit Gupta"
#define CANDIDATE3 "Candidate 3: Pranav Acharya"
#define CANDIDATE4 "Candidate 4: Aditi A"

int votesCount[CANDIDATE_COUNT] = {0};
int spoiledVotes = 0;

void castVote()
{
    int choice;
    cout << "\n\n #### Please Choose your Candidate ####\n\n";
    cout << "1. " << CANDIDATE1 << endl;
    cout << "2. " << CANDIDATE2 << endl;
    cout << "3. " << CANDIDATE3 << endl;
    cout << "4. " << CANDIDATE4 << endl;
    cout << "5. None of These" << endl;

    cout << "\nInput Your Choice (1 - 4): ";
    cin >> choice;

    switch (choice)
    {
        case 1: votesCount[0]++; break;
        case 2: votesCount[1]++; break;
        case 3: votesCount[2]++; break;
        case 4: votesCount[3]++; break;
        case 5: spoiledVotes++; break;
        default: cout << "\nError: Wrong Choice!! Please retry" << endl;
    }
    cout << "\nThanks for voting!!!";
}

void printVoteCount()
{
    cout << "\n\n#### Voting Statistics ####" << endl;
    for (int i = 0; i < CANDIDATE_COUNT; i++)
    {
        cout << CANDIDATE1 << " - " << votesCount[i] << endl;
    }
    cout << "Spoiled Votes - " << spoiledVotes << endl;
}

void getLeadingCandidate()
{
    int maxVotesIndex = 0;
    for (int i = 1; i < CANDIDATE_COUNT; i++)
    {
        if (votesCount[i] > votesCount[maxVotesIndex])
        {
            maxVotesIndex = i;
        }
    }

    cout << "\n\n#### Leading Candidate ####" << endl;
    if (votesCount[maxVotesIndex] != 0)
    {
        cout << "[" << CANDIDATE1 << "]" << endl;
    }
    else
    {
        cout << "----- Warning!!! No-win situation ----" << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n\n##### Welcome to Election/Voting 2021 #####" << endl;
        cout << "\n1. Cast the Vote";
        cout << "\n2. Find Vote Count";
        cout << "\n3. Find Leading Candidate";
        cout << "\n0. Exit";

        cout << "\n\nPlease enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: castVote(); break;
            case 2: printVoteCount(); break;
            case 3: getLeadingCandidate(); break;
            default: cout << "\nError: Invalid Choice"<< endl;
}
}
while (choice != 0);
return 0;
}
