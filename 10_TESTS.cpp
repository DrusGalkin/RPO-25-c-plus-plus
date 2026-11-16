#include <iostream>
int main ()
{
   char chars [4][5] = {
    "aaaa", "rust", "c++", "go",
   };
    int count = 0; 
    char choos {};
    std::cin >> choos;
    for(int i = 0; i < 4; i++)
    {
        for (int j=0; j<5; j++){
            if (chars [i][j] == choos)
                    count++;
        }
        
    }
   std::cout << count; 
    
}
