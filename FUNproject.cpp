#include <iostream>
#include <stdbool.h>
using namespace std;
bool gameover();
void display();
void turn();
int row, coll;
char pturn = 'X';
char arr[3][3] = {{'1', '2', '3'},
                  {'4', '5', '6'},
                  {'7', '8', '9'}};
int x;
int main()
{
  display();
  while (gameover())
  {
    // display();
    turn();
    // display();5
  }
  cout << "                  GAME OVER" << endl;
  return 0;
}
bool gameover()
{
  for (int i = 0; i < 3; i++)
  {
    if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
      return false;
    if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
      return false;
  }
  if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
    return false;
  if (arr[2][0] == arr[1][1] && arr[2][0] == arr[0][2])
    return false;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] != 'X' || arr[i][j] != 'O')
      {
        return true;
        // cout<<"its a draw...."<<endl;}
      }
      else
        return false;
      cout << "its a draw...." << endl;
    }
  }
}
void display()
{
  system("cls");
  cout << "\t\t\t\t\t      T I K    T A C K    T O O W\n";
  cout << "\t\t\t\t\t\t|       |       |       |\n";
  cout << "\t\t\t\t\t\t|   " << arr[0][0] << "   |   " << arr[0][1] << "   |   " << arr[0][2] << "   |\n";
  cout << "\t\t\t\t\t      ___________________________\n";
  cout << "\t\t\t\t\t\t|       |       |       |\n";
  cout << "\t\t\t\t\t\t|   " << arr[1][0] << "   |   " << arr[1][1] << "   |   " << arr[1][2] << "   |\n";
  cout << "\t\t\t\t\t       ___________________________\n";
  cout << "\t\t\t\t\t\t|       |       |       |\n";
  cout << "\t\t\t\t\t\t|   " << arr[2][0] << "   |   " << arr[2][1] << "   |   " << arr[2][2] << "   |\n";
}
void turn()
{
  if (pturn == 'X')
    cout << "Player[X]:";
  if (pturn == 'O')
    cout << "Player[O]:";
  cin >> x;
  switch (x)
  {
  case 1:
    if (pturn == 'X' && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
      arr[0][0] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
      arr[0][0] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again...";
    break;
  case 2:
    if (pturn == 'X' && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
      arr[0][1] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
      arr[0][1] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again....";
    break;
  case 3:
    if (pturn == 'X' && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
      arr[0][2] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
      arr[0][2] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again....";
    break;
  case 4:
    if (pturn == 'X' && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
      arr[1][0] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
      arr[1][0] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again......";
    break;
  case 5:
    if (pturn == 'X' && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
      arr[1][1] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
      arr[1][1] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again.....";
    break;
  case 6:
    if (pturn == 'X' && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
      arr[1][2] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
      arr[1][2] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter Again.....";
    break;
  case 7:
    if (pturn == 'X' && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
      arr[2][0] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
      arr[2][0] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again.....";
    break;
  case 8:
    if (pturn == 'X' && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
      arr[2][1] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
      arr[2][1] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again....";
    break;
  case 9:
    if (pturn == 'X' && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
      arr[2][2] = 'X';
      pturn = 'O';
    }
    else if (pturn == 'O' && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
      arr[2][2] = 'O';
      pturn = 'X';
    }
    else
      cout << "Invaliddddd!!!\nEnter again.....";
    break;
  default:
    cout << "Invalid Input!!";
    break;
  }
  display();
}