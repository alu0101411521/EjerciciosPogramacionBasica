/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>
#include <vector>

//delcaracion de metodos 
 int Postion(int& position, std::vector<int>& number) {
   int resultado = number[position - 1];
   return resultado;
}

int main() {
  int line_numbers;
  int position;
  std::vector<int> numbers;
  std::cin >> position;

  while (std::cin >> line_numbers) {
    numbers.push_back(line_numbers);
  }
  std::cout << "At the position " << position << " there is a(n) " << Postion(position, numbers) << ".\n";
  return 0;
}