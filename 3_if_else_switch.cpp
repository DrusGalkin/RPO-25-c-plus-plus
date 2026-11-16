#include <iostream>
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    if (a > b) {
        std::cout << "1: a > b" << std::endl;
    } else if (a < b) {
        std::cout << "2: a < b" << std::endl;
    } else {
        std::cout << "3: a = b" << std::endl;
    }

    bool var = a > b;

    if (var) {
        std::cout << "4: a > b" << std::endl;
    }

    int c = 9;
    if (a > b && a < c)
        std::cout << "good" << std::endl;
    if (a > b && a < c && b < c)
        std::cout << "nice" << std::endl;
    if (a > b || a < c || b < c)    
        std::cout << "cool" << std::endl;
    if (a == c)    
        std::cout << "no bad" << std::endl;
    if (a != b)    
        std::cout << "no bad" << std::endl;

    char enter_num;

    std::cin >> enter_num;
    switch(enter_num) {
        case 'A': 
            std::cout << "omg! u choose A!!!" << std::endl; 
            break;
        case 'B':
            std::cout << ":0000\n u choose B!!!" << std::endl;  
            break;
        default:
            std::cout << "not A and not B \n ;((" << std::endl;
    }


    // ************************************************************

    // Синтаксический сахар

    if (0) {

    }

    if (1) {

    }
    

    // ************************************************************

    /*
        1 - Чётное или нечётное
        2 - Максимум из двух
        3 - Максимум из трёх
        4 - Делится ли на 3 и на 5
        5 - Оценка по баллам
        6 - Реализуйте калькулятор
    */ 
}

