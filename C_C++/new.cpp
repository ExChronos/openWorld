#include <iostream>
#include <cstdlib> // Для использования функции rand()
#include <ctime> // Для использования функции time()

using namespace std;

void generateRandomMatrix(int** matrix, int rows, int cols) {
    srand(time(0)); // Устанавливаем seed для генерации псевдослучайных чисел

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 - 50; // Генерируем случайное число от -50 до 49
        }
    }
}

void countPositiveElements(int** matrix, int rows, int cols) {
    int* count = new int[cols]; // Создаем массив для хранения количества положительных элементов в каждом столбце

    for (int j = 0; j < cols; j++) {
        count[j] = 0; // Инициализируем счетчик количества положительных элементов

        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] > 0) {
                count[j]++;
            }
        }

        cout << "Количество положительных элементов в столбце " << j + 1 << ": " << count[j] << endl;
    }

    delete[] count; // Освобождаем память
}

int main() {
    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;

    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** A = new int*[rows]; // Создаем массив указателей на строки

    for (int i = 0; i < rows; i++) {
        A[i] = new int[cols]; // Создаем каждую строку массива
    }

    generateRandomMatrix(A, rows, cols);

    cout << "Матрица: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    countPositiveElements(A, rows, cols);

    // Освобождаем память
    for (int i = 0; i < rows; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}