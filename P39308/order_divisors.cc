/** * Universidad de La Laguna
 * * Escuela Superior de Ingeniería y Tecnología
 * * Grado en Ingeniería Informática
 * * Asignatura: Informática Básica
 * * Curso: 1º
 * * Práctica 8 - jutge
 * * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>

//declaracion de metodos 
void Divisors(int& number) {
  std::cout << "divisors of " << number << ':';

    int square_root = 1;
    while (square_root * square_root < number) {
      ++square_root;
    } 

    for (int i = 1; i <= square_root; ++i)
      if (number % i == 0) {
        std::cout << ' ' << i;
      } 

    for (int i = square_root - 1; i >= 1; --i) {
      if ((number % i == 0) && ((number / i) != square_root)) {
        std::cout << ' ' << number / i;
      }
    } 
    std::cout << std::endl;
}



int main() {
  int number;
  while (std::cin >> number) {
    Divisors(number);
  }
  return 0;
}