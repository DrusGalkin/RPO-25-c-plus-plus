#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int &a_link = a;

    a++;
    cout << a_link << endl;


    int b = 10;
    const int &b_link = b;

    b++;
    cout << "------> " << b_link << endl;

    int nums[] {1,2,3,4,5,6};

    for(int &num : nums) {
        num = num * num;
    }

    for(int num : nums) {
        cout << num << " ";
    }
}