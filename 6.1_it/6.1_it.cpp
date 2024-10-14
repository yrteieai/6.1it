#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void gen(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i] << " ";
    }
    cout << endl;
}

int CountElements(const int* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0 && i % 13 == 0) {
            count++;
        }
    }
    return count;
}

int SumElements(const int* a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0 && i % 13 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

void Zero(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0 && i % 13 == 0) {
            a[i] = 0;
        }
    }
}

int main() {
    srand((unsigned)time(NULL)); 

    const int size = 25; 
    int a[size]; 
    int Low = 15, High = 94;

    gen(a, size, Low, High);

    cout << "Initial array: ";
    Print(a, size);

    int count = CountElements(a, size);

    int sum = SumElements(a, size);

    Zero(a, size);

    cout << "Count of elements that meet the criterion: " << count << endl;
    cout << "Sum of these elements: " << sum << endl;

    cout << "Modified array: ";
    Print(a, size);

    return 0;
}
