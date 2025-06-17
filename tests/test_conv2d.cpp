#include "../include/conv2d.hpp"
#include <chrono>
#include <iostream>

int main() {
    Matrix input = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Matrix kernel = {
        {1, 0},
        {0, -1}
    };

    auto start = std::chrono::high_resolution_clock::now();
    Matrix output = convolve2D(input, kernel);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Output Matrix:\n";
    printMatrix(output);

    std::chrono::duration<double> diff = end - start;
    std::cout << "Time taken: " << diff.count() << " seconds\n";

    return 0;
}
