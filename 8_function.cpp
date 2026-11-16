#include <iostream>

using namespace std;

int summator(int a, int b);
void squeare(int &num);

int main() {
    int a = 2;

    cout << a << endl;

    /*
        int a = 10;

        squeare(a); --> squeare(int &num = a);

    
    
    */

    squeare(a);
    
    cout << a << endl;

}

int summator(int a, int b) {
    return a + b;
}

void squeare(int &num) {
    num *= num;
}