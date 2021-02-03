/**
 * @file main.cpp
 * @author vmf0min (vlifom@yandex.ru)
 * @brief Задача 3. Метеостанция
 * Для удобства работы сотрудников международной метеостанции каждый день нужно
 * распечатывать различные таблицы соответствия градусов по шкалам Цельсия и
 * Фаренгейта. Напишите программу, которая принимает на вход три целых числа в
 * градусах Цельсия: нижняя граница температуры, верхняя граница температуры и
 * шаг. Программа выводит на экран таблицу соответствия градусов Цельсия
 * градусам Фаренгейта от нижней до верхней границы с указанным шагом.
 * Обеспечьте контроль ввода. Верхняя граница должна печататься, даже если
 * последний шаг «перепрыгнул» её. Известно, что 0 °С соответствует 32 °F, а
 * каждый градус Цельсия эквивалентен 1,8 градусам Фаренгейта.
 * @version 0.1
 * @date 03-02-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>

int main() {
  std::cout << "\e[2JВвод:\nНижняя граница: ";
  int lowerLimit{};
  std::cin >> lowerLimit;

  std::cout << "Верхняя граница: ";
  int upperLimit{};
  std::cin >> upperLimit;

  std::cout << "Шаг: ";
  int step{};
  std::cin >> step;

  std::cout << "Вывод:\nC\t\tF\n";

  for (int i{lowerLimit}; i <= upperLimit; i += step)
    std::cout << i << "\t\t" << i * 1.8 + 32 << "\n";

  return 0;
}
