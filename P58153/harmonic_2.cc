/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/


#include <iostream>
#include <iomanip>

//declaracion de metodos
double Harmonic(int& number, int& second_number) {
  double output{0};
  ++second_number;
  while (second_number <= number) {
    output += (double) 1 / second_number;
    ++second_number;
  }
  return output;
}

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(10);
  int number{0};
  int second_number{0};
  while (std::cin >> number >> second_number) {
    std::cout << Harmonic(number, second_number) << std::endl;
  }
  return 0;
}