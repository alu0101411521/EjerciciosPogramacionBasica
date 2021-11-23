/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/


#include <iostream>
#include <vector>
#include <string>

//declaracion de metodos 

void EvenPosition(std::vector<int> vec_number) {
  for (int i = 0; i < vec_number.size(); ++i) {
    if (vec_number[i] % 2 == 0) {
      std::cout << i + 1;
      break;
    }
  }
}

int main() {
  std::vector<int> numbers_vec;
  int number{0};
  while(std::cin >> number) {
    numbers_vec.push_back(number);
  } 
  EvenPosition(numbers_vec);
  std::cout << std::endl;
  return 0;
}