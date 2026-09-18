#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of employees: ";
    cin >> size;

    // Allocate the array on the HEAP at runtime
    int *salArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    // Free the heap memory
    delete [] salArray;
    salArray = NULL;      // avoids a dangling pointer
    return 0;
}
