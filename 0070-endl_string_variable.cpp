// endl_string_variable.cpp
#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

int main()
{
  std::string user_name = "user"; // Определить переменную.
  std::cout << "Hello, " << user_name << "!" << std::endl;

  user_name = "The Great Whale"; // Изменить значение переменной.
  std::cout << "I am " << user_name;
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}
