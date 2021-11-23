/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>

//declaracion de metodos 
double Harmonic(const int& kTerms) {
  double result{0};
  for (int i = 1; i <= kTerms; ++i) {
    result += (1 / (i * 1.0));
  }
  return result;
}

int main() {
  int number;
  std::cin >> number;
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);
  std::cout << Harmonic(number) << std::endl;
  return 0;
}