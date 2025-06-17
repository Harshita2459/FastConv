# FastConv — 2D Convolution in C++

A simple C++ project demonstrating 2D convolution from scratch using matrices, aimed at performance-heavy applications like image processing and AI.

## 📦 Project Structure

FastConv/
├── include/
│ └── conv2d.hpp # Header for convolution functions
├── src/
│ └── conv2d.cpp # Core implementation
├── tests/
│ └── test_conv2d.cpp # Main driver for testing


## 🚀 How to Compile and Run 

Make sure you have `g++` installed.

```bash
g++ -std=c++17 -O2 -I include src/conv2d.cpp tests/test_conv2d.cpp -o test_conv2d.exe
./test_conv2d.exe

```

## Example 

## Input
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

## Kernal
1 0
0 -1

## Output
-5 -5 -5
-5 -5 -5
-5 -5 -5
