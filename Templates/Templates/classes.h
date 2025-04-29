
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

// Функция обмена значений
template <typename T>
void swapValues(T& a, T& b) {
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

// Поиск минимального элемента в массиве
template <typename T>
T findMin(const T arr[], int size) {
    if (size <= 0) {
        throw std::invalid_argument("Array size must be positive");
    }
    return *std::min_element(arr, arr + size);
}

// Сумма элементов массива
template <typename T>
T arraySum(const T arr[], int size) {
    T sum = T();
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Копирование массива
template <typename T>
void copyArray(const T source[], T dest[], int size) {
    std::copy(source, source + size, dest);
}

// Проверка на равенство
template <typename T>
bool areEqual(const T& a, const T& b) {
    return a == b;
}

// Реверс массива
template <typename T>
void reverseArray(T arr[], int size) {
    std::reverse(arr, arr + size);
}

// Поиск элемента в массиве
template <typename T>
int findElement(const T arr[], int size, const T& value) {
    const T* result = std::find(arr, arr + size, value);
    return result != arr + size ? result - arr : -1;
}

// Объединение массивов
template <typename T>
std::vector<T> mergeArrays(const T arr1[], int size1, const T arr2[], int size2) {
    std::vector<T> result;
    result.reserve(size1 + size2);
    result.insert(result.end(), arr1, arr1 + size1);
    result.insert(result.end(), arr2, arr2 + size2);
    return result;
}

// Среднее значение массива
template <typename T>
double arrayAverage(const T arr[], int size) {
    if (size <= 0) {
        throw std::invalid_argument("Array size must be positive");
    }
    return static_cast<double>(arraySum(arr, size)) / size;
}

// Фильтрация массива
template <typename T, typename Predicate>
std::vector<T> filterArray(const T arr[], int size, Predicate pred) {
    std::vector<T> result;
    for (int i = 0; i < size; ++i) {
        if (pred(arr[i])) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

// Поиск второго максимума
template <typename T>
T findSecondMax(const T arr[], int size) {
    if (size < 2) {
        throw std::invalid_argument("Array size must be at least 2");
    }

    T max1 = std::max(arr[0], arr[1]);
    T max2 = std::min(arr[0], arr[1]);

    for (int i = 2; i < size; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max2;
}

// Преобразование массива в вектор
template <typename T>
std::vector<T> arrayToVector(const T arr[], int size) {
    return std::vector<T>(arr, arr + size);
}

// Пересечение массивов
template <typename T>
std::vector<T> arrayIntersection(const T arr1[], int size1, const T arr2[], int size2) {
    std::vector<T> result;
    for (int i = 0; i < size1; ++i) {
        if (std::find(arr2, arr2 + size2, arr1[i]) != arr2 + size2) {
            result.push_back(arr1[i]);
        }
    }
    return result;
}

// Сортировка пузырьком
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

