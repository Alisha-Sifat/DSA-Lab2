#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] >= arr[i + 1])    // strict comparison
            return false;
    }
    return true;
}
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues passed" << endl;
}
int main() {
    testDuplicateValues();
    return 0;
}
