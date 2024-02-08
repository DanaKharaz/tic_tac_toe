#include <iostream>
using namespace std;

void show(string grid[3][3]) {
  cout << "\n";
  cout << grid[0][0] << " " << grid[0][1] << " " << grid[0][2] << endl;
  cout << grid[1][0] << " " << grid[1][1] << " " << grid[1][2] << endl;
  cout << grid[2][0] << " " << grid[2][1] << " " << grid[2][2] << endl;
}

void move(string grid[3][3], string p) {
  cout << "\nPlayer " << p << ", make your move (row then col): ";
  int r;
  int c;
  do {
    cin >> r;
    cin >> c;
  } while (r <= 0 || r > 3 || c <= 0 || c > 3 || grid[r - 1][c - 1] != ".");
  
  grid[r - 1][c - 1] = p;
}

bool check(string grid [3][3]) {
  for (int i = 0; i < 3; i++) {
    if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] and grid[i][2] != ".") {return false;}
    if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] and grid[2][i] != ".") {return false;}
  }
  if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] and grid[2][2] != ".") {return false;}
if (grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2] and grid[0][2] != ".") {return false;}
  return true;
}

int count(string grid[3][3]) {
  int c = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (grid[i][j] == ".") {c++;}
    }
  }
  return c;
}

int main() {
  string u;
  string grid[3][3] = {{".", ".", "."}, {".", ".", "."}, {".", ".", "."}};
  int c = 0;
  int d = 9;
  do {
    show(grid);
    if (c % 2 == 0) {
      move(grid, "x");
    } else {
      move(grid, "o");
    }
    c++;
    d = count(grid);
  } while (check(grid) && d != 0);

  show(grid);
  if (d == 0 && check(grid)) {
    cout << "\nDraw!";
  } else if (c % 2 == 0) {
    cout << "\nPLayer o wins!";
  } else {
    cout << "\nPLayer x wins!";
  }
}
