#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // system("chcp 65001");
    // cout << "привет";


    // for (int i = 0; i < 10; i++) {
    //     cout << i << endl;
    // }

    // int num = 5,
    //     tmp = 0,
    //     count = 0;

    // while(num > 0) { 
    //     cin >> tmp;
    //     if (tmp%2 == 0)
    //         count++;
    //     num--;    
    // }

    // cout << "Result: " << count << endl;

    
    // int b = 7;

    // do{
    //    cout << "fff" << endl; 
    //    b++;
    // } while (b == 10);



    // // Пример работы break
    // int count2 = 0;
    // while(1) {
    //     if(count2 == 10) {
    //         cout << "finaly! count2 = " << count2 << endl;
    //         break;
    //     }

    //     ++count2;
    // }

    // // Сложить все не четные числа
    // int res = 0;
    
    // for(int i = 0; i < 10; i++) {
    //     if (i%2 != 0) 
    //         res += i;
    //     else 
    //         continue;
    // }

    // cout << res << endl;



     // ************************************************************

    // Синтаксический сахар

    // ************************************************************


    /*
        1 - Вывести все числа от 100 до 0
        2 - Вывести квадрат в консоль, высота и ширина задается через функцию cin
        3 - Аналогично вывести треугольник
        4 - Степень числа 
        5 - Посчитать число цифр в числе 123456
        6 - Вывести в консоль таблицу умножения
        7 - 
    */
int h = 0;
int w = 0;
                cin >> h; 
                cin >> w;
                for (int i = 0; i<h;i++){
                    for (int j = 0; j<w; j++){
                        cout <<"*";
                    }
                    cout<<"\n";
                }

}