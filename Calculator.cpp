#include <iostream>
int add(int x, int y) {
  return x + y;
}
int multiply(int x, int y) {
  return (x * y);
}
int subtraction(int x, int y) {
  return (x - y);
}
int divide(int x, int y) {
  if (x != 0 && y != 0) {
    return (x / y);
  }
  return -1;
}
int main() {
  int first, second, operation;
  operation = first = second = 0;
  while (operation > 4 || operation < 1) {
    std::cout << "Type the number of the function you wish to preform\n";
    std::cout << " 1: Add\n 2: Multiply\n 3: Subtract\n 4: Divide" << '\n';
    std::cin >> operation;
}
  switch (operation) {
    case 1:
    std::cout << "Enter the two numbers you wish to Add" << '\n';
    std::cin >> first;
    std::cin >> second;
    std::cout << "The sum of " << first << " + " << second << " is "
    << add(first, second)<< '\n';
    break;

    case 2:
    std::cout << "Enter the two numbers you wish to Multiply" << '\n';
    std::cin >> first;
    std::cin >> second;
    std::cout << "The product of " << first << " * " << second << " is "
    << multiply(first, second) << '\n';
    break;

    case 3:
    std::cout << "Enter the two numbers you wish to Subtract" << '\n';
    std::cin >> first;
    std::cin >> second;
    std::cout << "The difference of " << first << " - " << second << " is "
    << subtraction(first, second) << '\n';
    break;

    case 4:
    std::cout << "Enter the two numbers you wish to Divide" << '\n';
    std::cin >> first;
    std::cin >> second;
    std::cout << "The quotient of " << first << " / " << second << " is "
    << divide(first, second) << '\n';
    break;
  }



  return 0;
}
