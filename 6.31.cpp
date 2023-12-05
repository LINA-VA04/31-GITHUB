#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int matrixSize = 5; // Размер матрицы (здесь 5x5, можно изменить)
    int matrix[matrixSize][matrixSize];
    std::srand(std::time(0)); // Используйте современный метод генерации случайных чисел

    // Заполнение матрицы случайными числами
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = std::rand() % 100 + 1; // Задайте нужный диапазон случайных чисел
        }
    }

    // Заполнение главной диагонали суммой элементов строки и столбца
    for (int i = 0; i < matrixSize; i++) {
        int rowSum = 0;
        int colSum = 0;

        for (int j = 0; j < matrixSize; j++) {
            if (i != j) { // Пропустить элементы на главной диагонали
                rowSum += matrix[i][j];
                colSum += matrix[j][i];
            }
        }

        matrix[i][i] = rowSum + colSum;
    }

    // Вывод матрицы
    std::cout << "Матрица с главной диагональю, заполненной суммами:" << std::endl;
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
