#include <iostream>
int main() {
    int m;
    std::cout << "Enter the size of the array: ";
    std::cin >> m;
    int *A = new int[m];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++) {
        std::cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (A[i] == A[j]) {
                count++;
                break;
            }
        }
    }
    std::cout << "The number of different elements in the array: " << m - count << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    std::cout << "The array after sorting: ";
    for (int i = 0; i < m; i++) {
        std::cout << A[i] << " ";
    }
    delete[] A;
    return 0;
}