#include "../include/conv2d.hpp"
#include <iostream>
#include <chrono>
#include <immintrin.h> // For AVX

Matrix convolve2D(const Matrix& input, const Matrix& kernel) {
    int n = input.size(), m = input[0].size();
    int k = kernel.size(), l = kernel[0].size();
    int outRows = n - k + 1;
    int outCols = m - l + 1;

    Matrix output(outRows, std::vector<float>(outCols, 0));

    for (int i = 0; i < outRows; ++i) {
        for (int j = 0; j < outCols; ++j) {
            float sum = 0;
            for (int ki = 0; ki < k; ++ki) {
                for (int kj = 0; kj < l; ++kj) {
                    sum += input[i + ki][j + kj] * kernel[ki][kj];
                }
            }
            output[i][j] = sum;
        }
    }

    return output;
}

void printMatrix(const Matrix& matrix) {
    for (auto& row : matrix) {
        for (float val : row)
            std::cout << val << " ";
        std::cout << "\n";
    }
}
