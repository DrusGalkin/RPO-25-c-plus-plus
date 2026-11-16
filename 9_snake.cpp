#include <iostream>

using namespace std;

int x = 30;
int y = 8;

int snake_x = x/2;
int snake_y = y/2;

char total_button = 'D';

void move(char button);

int main(){
    for(int i{}; i < y; i++) {
        for(int j{}; j < x; j++) {
            if(i == 0 || i == y - 1 || j == 0 || j == x - 1 || snake_x == j && snake_y == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cin >> total_button;

    move(total_button);
    cout << "\n\n\n\n\n\n\n\n\n";
    main();
}

void move(char button) {
    switch (button)
    {
        case 'A': snake_x--; break;
        case 'W': snake_y--; break;
        case 'S': snake_y++; break;
        case 'D': snake_x++; break;
    }
}