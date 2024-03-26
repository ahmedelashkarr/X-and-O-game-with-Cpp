
//#include <bits/stdc++.h>

#include <iostream> 
#include <string>
using namespace std;
char arr[10] = { '0' , '1','2','3','4','5','6','7','8','9' };
void display(string , string);
void game(string , string);
int cheak();
int main()
{
        system("cls") ;
        string player1, player2;
        cout << "Enter name of the first player : ";
        getline(cin, player1);
        cout << "Enter name of the second player : ";
        getline(cin, player2);
        game(player1, player2);
 
}

void display(string player1, string player2) {
    system("cls");
    cout << "\n\n\t\t\tX AND O GAME";
    cout << "\t\t\t\t\t" << player1 << " (X) - " << player2 << " (O)\n\n";
    int counter= 1;
    for (int i = 0; i < 3; i++) {
        cout << "\t\t\t\t\t   " << "      " << "|" << "       |" << endl;
        cout << "\t\t\t\t\t   " << "  " << arr[counter];
        counter++;
        cout << "   " << "|" << "   " << arr[counter];
        counter++;
        cout << "   |   " << arr[counter] << "\n";
        counter++;
        cout << "\t\t\t\t\t   " << "      " << "|" << "       |" << endl;
        if(i != 2)cout << "\t\t\t\t\t   " << "------" << "|" << "-------|-------" << endl;
    }
    cout << "\n\n\n";
}
void game(string player1, string player2) {
    int move;
    char typemove;
    int player = 1;
    while (cheak() == 0) {
        if (player == 3)player = 1;
        if (player == 1)typemove = 'X';
        else typemove = 'O';
        display(player1, player2);
        cout << "\t\t\t\t\t\tEnter Move : ";
        cin >> move;

        if (arr[move] == 'X' || arr[move] == 'O' || move > 9 || move < 1) {
            cin.ignore();
            player--;
        }
        else {
            arr[move] = typemove;
        }

        player++;

    }
    if (cheak() == 1) {
        display(player1, player2);
        if (--player = 1)cout << "\n\n\t\t\t\t\t\acongratulation " << player1 << "\n\n\n";
        else cout << "\n\n\t\t\t\t\t\acongratulation " << player2 << "\n\n\n";
    }
    else if (cheak() == -1) {
        cout << "\n\n\t\t\t\t\t DROW \n\n\n";
    }
};
int cheak() {
    if ((arr[1] == 'X' && arr[2] == 'X' && arr[3] == 'X') || (arr[1] == 'O' && arr[2] == 'O' && arr[3] == 'O'))return 1;
    else if ((arr[4] == 'X' && arr[5] == 'X' && arr[6] == 'X') || (arr[4] == 'O' && arr[5] == 'O' && arr[6] == 'O'))return 1;
    else if ((arr[7] == 'X' && arr[8] == 'X' && arr[9] == 'X') || (arr[7] == 'O' && arr[8] == 'O' && arr[9] == 'O'))return 1;
    else if ((arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X') || (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O'))return 1;
    else if ((arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X') || (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O'))return 1;
    else if ((arr[3] == 'X' && arr[6] == 'X' && arr[9] == 'X') || (arr[3] == 'O' && arr[6] == 'O' && arr[9] == 'O'))return 1;
    else if ((arr[1] == 'X' && arr[5] == 'X' && arr[9] == 'X') || (arr[1] == 'O' && arr[5] == 'O' && arr[9] == 'O'))return 1;
    else if ((arr[3] == 'X' && arr[5] == 'X' && arr[7] == 'X') || (arr[3] == 'O' && arr[5] == 'O' && arr[7] == 'O'))return 1;
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')return -1;
    else return 0;


}



