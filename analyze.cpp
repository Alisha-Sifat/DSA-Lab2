#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr  << endl;   // the address
    cout << "Value stored   : " << *ptr << endl;   // the int it points to
}

int main() {
    // Part 2a: int on the STACK
    cout << "--- Stack allocation ---" << endl;
    int iValue = 25;
    analyze_pointer(&iValue);      // & gives us its address
    // Part 2b: int on the HEAP
    cout << "\n--- Heap allocation ---" << endl;
    int *hValue = new int;     // new returns an address already
    *hValue = 50;
    analyze_pointer(hValue);       // no & needed, hValue IS an address

    delete hValue;    // single value, so delete (no [])
    hValue = NULL;
    return 0;
}
