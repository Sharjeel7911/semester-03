#include <iostream>
#include <cstdlib>
using namespace std;

/*
Write a non-returning function searchAndDelete with default arguments
The task is to write a function searchAndDelete that receives an integer array, its size, and an element to search and delete from the array. The function should shrink the array after deletion. The function should have default arguments.
*/

void searchAndDelete(int*& arr, int& size, int element);
void searchDelete() {
    system("cls");
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin.ignore();
	cout << "Enter the element to find" << endl;
	int element = 0;
	cin >> element;
	searchAndDelete(arr, size, element);
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    system("pause");
}
void searchAndDelete(int*& arr, int& size, int element) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        int* newArr = new int[size - 1];

        for (int i = 0, j = 0; i < size; i++) {
            if (i == index) continue;
            newArr[j++] = arr[i];
        }
        delete[] arr;   
        arr = newArr;   
        size--;         

        cout << "Element " << element << " deleted." << endl;
    }
    else cout << "Element " << element << " not found." << endl;
}