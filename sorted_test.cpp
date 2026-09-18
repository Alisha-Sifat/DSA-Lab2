#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1])   // equal neighbours are allowed
            return false;}
    return true;
}
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testSortedArray ......... PASSED" << endl;
}
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "testUnsortedArray ....... PASSED" << endl;
}
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues ..... PASSED" << endl;
}
void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
    cout << "testSingleElement ....... PASSED" << endl;
}
void testDescendingArray() {
    int arr[] = {9, 7, 5, 3, 1};
    assert(isSorted(arr, 5) == false);
    cout << "testDescendingArray ..... PASSED" << endl;
}
void testNegativeValues() {
    int arr[] = {-9, -4, 0, 3, 8};
    assert(isSorted(arr, 5) == true);
    cout << "testNegativeValues ...... PASSED" << endl;
}
// some additional test cases
void testAllEqual() {
    int arr[] = {5, 5, 5, 5};
    assert(isSorted(arr, 4) == true);
    cout << "testAllEqual ............ PASSED" << endl;
}
void testLastElementSmaller() {
    int arr[] = {1, 2, 3, 4, 0};
    assert(isSorted(arr, 5) == false);
    cout << "testLastElementSmaller .. PASSED" << endl;
}

void testEmptyArray() {
    int arr[] = {1};
    assert(isSorted(arr, 0) == true);
    cout << "testEmptyArray .......... PASSED" << endl;
}
//calling the functions inside main
int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testLastElementSmaller();
    testEmptyArray();
    cout << "\nAll test cases passed successfully!" << endl;
    return 0;
}
