#ifndef CONV2D_HPP
#define CONV2D_HPP

#include <vector>

using Matrix = std::vector<std::vector<float>>;

Matrix convolve2D(const Matrix& input, const Matrix& kernel);
void printMatrix(const Matrix& matrix);

#endif
