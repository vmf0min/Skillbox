/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Solving the Fibonacci number by the recurrent and iterative method
 * @version   0.1
 * @date      18-03-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>

#include "Timer.h"

using std::cin;
using std::cout;
using std::endl;

int fib(const int16_t& n) {
  int fibonacci{}, fibonacciFirst{0}, fibonacciSecond{1};
  for (size_t i{}; i < n - 1; ++i) {
    fibonacci = fibonacciFirst + fibonacciSecond;
    fibonacciFirst = fibonacciSecond;
    fibonacciSecond = fibonacci;
  }
  return fibonacci;
}

int fibRecursive(int16_t n) {
  if (0 == n) return 0;
  if (1 == n) return 1;
  return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
  cout << "\x1b[2J";
  int16_t n;
  do {
    cout << "Enter the number of the fibonacci sequence: ";
    cin >> n;
  } while (n > 46);

  {
    cout << "Iteration fibonacci:\t";
    Timer t;
    cout << fib(n) << endl;
    cout << "Time elapsed: " << t.elapsed() << endl;
  }
  cout << endl;
  {
    cout << "Recursive fibonacci:\t";
    Timer t;
    cout << fibRecursive(n) << endl;
    cout << "Time elapsed: " << t.elapsed() << endl;
  }
  return 0;
}
