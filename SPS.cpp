#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    cout << "ABHISHEK GIRI WELCOMES YOU TO HIS GAME\n enjoyyyyyy....!!\n\n"
         << endl;
    string player_name;
    cout << "Enter your name: ";
    cin >> player_name;

    system("CLS");
    int rounds;
    cout << " \" " << player_name << " \" "
         << " how many rounds do you want to play: ";
    cin >> rounds;

    int player_score = 0, computer_score = 0;

    for (int round = 1; round <= rounds; round++)
    {
        system("CLS");
        int player_choice, computer_choice;
        cout << "Round no: " << round << "/" << rounds << "\n\n"
             << endl;

        cout << player_name << "'s Score = " << player_score << endl;
        cout << "computer's score = " << computer_score << "\n\n"
             << endl;

        cout << "Press 1 to choose stone" << endl;
        cout << "Press 2 to choose Paper" << endl;
        cout << "Press 3 to choose scissor" << endl;
        cout << "You chose: " << endl;
        do
        {
            cin >> player_choice;
        } while (player_choice != 1 && player_choice != 2 && player_choice != 3);

        srand(time(0));
        computer_choice = (rand() % 3) + 1;

        if (player_choice == 1 && computer_choice == 3)
        {
            cout << "Computer chose " << computer_choice << endl;
            cout << "You win" << endl;
            player_score++;
            cout << "Press Enter" << endl;
            getch();
        }
        else if (player_choice == 2 && computer_choice == 1)
        {
            cout << "Computer chose " << computer_choice << endl;
            cout << "You win" << endl;
            player_score++;
            cout << "Press Enter" << endl;
            getch();
        }
        else if (player_choice == 3 && computer_choice == 2)
        {
            cout << "Computer chose " << computer_choice << endl;
            cout << "You win" << endl;
            player_score++;
            cout << "Press Enter" << endl;
            getch();
        }
        else if (player_choice == computer_choice)
        {
            cout << "Computer chose " << computer_choice << endl;
            cout << "It's a draw" << endl;
            cout << "Press Enter" << endl;
            getch();
        }
        else
        {
            cout << "Computer chose " << computer_choice << endl;
            cout << "computer won" << endl;
            computer_score++;
            cout << "Press Enter" << endl;
            getch();
        }
    }
    cout << "\n"
         << player_name << " :Your score is " << player_score << " And Computers Score is " << computer_score << endl;

    cout << "\n\n Thank you for your time " << endl;
    cout << "from ABHISHEK GIRI";
    return 0;
}
