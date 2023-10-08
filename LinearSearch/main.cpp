/*
    ADELIA PUTRI WIDYASARI
    A11.2022.14426 | A11.4212
    Dian Nuswantoro University
    2023.06.26 Semarang
*/

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    auto start = high_resolution_clock::now();
    int index = linearSearch(arr, n, target);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    cout << "Time taken by linear search: " << duration.count() << " microseconds" << endl;

    return 0;
}
