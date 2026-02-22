#include <iostream>
#include <limits>
using namespace std;

class TicTacToe
{
private:
  char board[3][3];
  char currentMark;
  string player1, player2;

public:
  TicTacToe()
  {
    currentMark = 'X';
    char num = '1';

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        board[i][j] = num++;
      }
    }
  }

  void startGame()
  {
    cout << "Enter Player 1 name (X): ";
    getline(cin, player1);

    cout << "Enter Player 2 name (O): ";
    getline(cin, player2);

    play();
  }

private:
  void play()
  {
    printBoard();
    while (true)
    {
      string currentPlayer = (currentMark == 'X') ? player1 : player2;

      int choice;
      cout << "\n"
           << currentPlayer
           << " (" << currentMark << ") enter position (1-9): ";
      cin >> choice;

      if (!makeMove(choice))
      {
        cout << "\033[1;91mInvalid move! Try again.\033[1;97m\n";
        continue;
      }
      printBoard();
      if (checkWin())
      {
        cout << "\n🎉 Congratulations \033[1;92m" << currentPlayer << "\033[1;97m! You won the game.\n\n";

        break;
      }

      if (checkDraw())
      {
        printBoard();
        cout << "\n\t   Match Draw!\n\n";
        break;
      }
      switchTurn();
    }
  }

  void printBoard()
  {
    system("clear");

    // const string GREEN = "\033[1;92m";
    // const string WHITE = "\033[0m";

    const string GREEN = /*"\033[38;5;208m";*/ "\033[1;92m";
    const string WHITE = "\033[1;97m";
    const string RESET = "\033[1;97m";

    cout << "\n\t\033[1;97m═══ TIC TAC TOE ═══\n\n"
         << WHITE << "\t┌─────┬─────┬─────┐\n";
    for (int i = 0; i < 3; i++)
    {
      cout << "\t│  " << GREEN << board[i][0] << WHITE << "  │  " << GREEN << board[i][1] << WHITE << "  │  " << GREEN << board[i][2] << WHITE << "  │\n";

      if (i < 2)
        cout << WHITE << "\t├─────┼─────┼─────┤\n";
      else if (i == 2)
        cout << WHITE << "\t└─────┴─────┴─────┘\n\n";
    }

    /*system("clear");
    cout << endl
         << "\t\033[1;97m═══ TIC TAC TOE ═══\n\n"
         << "\t┌─────┬─────┬─────┐\n"
         << "\t│  " << board[0][0] << "  │  " << board[0][1] << "  │  " << board[0][2] << "  │\n"
         << "\t├─────┼─────┼─────┤\n"
         << "\t│  " << board[1][0] << "  │  " << board[1][1] << "  │  " << board[1][2] << "  │\n"
         << "\t├─────┼─────┼─────┤\n"
         << "\t│  " << board[2][0] << "  │  " << board[2][1] << "  │  " << board[2][2] << "  │\n"
         << "\t└─────┴─────┴─────┘\n\n";*/
  }

  bool makeMove(int choice)
  {
    if (choice < 1 || choice > 9)
      return false;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] == 'X' || board[row][col] == 'O')
      return false;

    board[row][col] = currentMark;
    return true;
  }

  bool checkWin()
  {
    for (int i = 0; i < 3; i++)
    {
      if (board[i][0] == currentMark && board[i][1] == currentMark && board[i][2] == currentMark)
        return true;

      if (board[0][i] == currentMark && board[1][i] == currentMark && board[2][i] == currentMark)
        return true;
    }

    if (board[0][0] == currentMark && board[1][1] == currentMark && board[2][2] == currentMark)
      return true;

    if (board[0][2] == currentMark && board[1][1] == currentMark && board[2][0] == currentMark)
      return true;

    return false;
  }

  bool checkDraw()
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (board[i][j] != 'X' && board[i][j] != 'O')
        {
          return false;
        }
      }
    }
    return true;
  }

  void switchTurn()
  {
    currentMark = (currentMark == 'X') ? 'O' : 'X';
  }
};

int main()
{
  TicTacToe game;
  game.startGame();
  return 0;
}
