#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int len;
    cout << "Enter maximum length of the string: ";
    cin >> len;
    cin.ignore();    // eat the leftover Enter key

    char *str = new char[len + 1]; // +1 for the '\0' terminator
    cout << "Enter a string: ";
    cin.getline(str, len + 1);  // getline so spaces are kept

    int n = strlen(str);

    // Swap first with last, second with second-last, ...
    for (int i = 0; i < n / 2; i++) {
        char temp      = str[i];
        str[i]         = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
    cout << "Reversed string: " << str << endl;

    delete [] str;
    str = NULL;
    return 0;
}
