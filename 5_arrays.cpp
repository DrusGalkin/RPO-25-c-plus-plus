#include <iostream>

int main() {
    int arr1[4] = {1, 2, 3, 4}; // индексы -> 0 1 2 3 
    int arr2[] = {5, 6, 7, 8};  // индексы -> 0 1 2 3

    arr1[1] = 0;
    arr2[1] = 10;

    int res = 0;

    res = arr1[1];

    arr2[4] = 0;

    char words1[] = {'H', 'e', 'l', 'l', 'o'};
    char words2[] = "Hello";

    std::cout << words2[0] << std::endl;

    words2[0] = '1';

    std::cout << words2[0] << std::endl;
    




    /*
        Бинарный поиск
    */ 


    int total_nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int search_num = 10;

    int arr_double[2][10] = 
    {
        {1,1,1,1,1,3,3,3,4,54},
        {1,1,34,5,2,24,5,5,2,1}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++){
            std::cout << arr_double[i][j];
        }
        std::cout << std::endl;
    }
}