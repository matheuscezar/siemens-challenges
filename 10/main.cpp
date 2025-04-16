#include <iostream>
using namespace std;

int str_len(char str[]){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[1000];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 1000); 

    length = str_len(str);
    cout << "String Length = " << length << endl;

    return 0;
}
