#include <iostream>
using namespace std;

void removeSpaces(char str[]){

   int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
           str[j++] = str[i];
        i++;
    }
    str[j] = '\0';

}

int main(){


    char input[1000000];
    cin.getline(input, 1000000);
    removeSpaces(input);
    cout << input << endl;
  
  
  
}
