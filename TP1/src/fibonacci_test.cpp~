#include "fibonacci.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupFibonacci){};

TEST(GroupFibonacci, test_fibonacci_recurssif){
  int valFibo = fibonacciRecursif(5);
  CHECK_EQUAL(5, valFibo);
}

TEST(GroupFibonacci, test_fibonacci_iterratif){
  int valFibo = fibonacciIteratif(5);
  CHECK_EQUAL(5, valFibo);
}
