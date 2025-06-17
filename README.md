# FastConv — 2D Convolution in C++

Designed and implemented a lightweight C++
library for 2D convolution, optimized using SIMD instructions (SSE/AVX) and multithreading to boost performance
— inspired by use cases in AI models like Convolutional Neural Networks (CNNs).
A project demonstrating 2D convolution from scratch using matrices, aimed at performance-heavy applications like image processing and AI.


## 🚀 How to Compile and Run 

Make sure you have `g++` installed.

```bash
g++ -std=c++17 -O2 -I include src/conv2d.cpp tests/test_conv2d.cpp -o test_conv2d.exe
./test_conv2d.exe

```

## Example 

## Input
{1 2 3 4},
{5 6 7 8},
{9 10 11 12},
{13 14 15 16}

## Kernel
{1 0},
{0 -1}

## Output
{-5 -5 -5},
{-5 -5 -5},
{-5 -5 -5}
