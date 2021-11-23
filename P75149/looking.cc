/** * Universidad de La Laguna
 * * Escuela Superior de Ingeniería y Tecnología
 * * Grado en Ingeniería Informática
 * * Asignatura: Informática Básica
 * * Curso: 1º
 * * Práctica 8 - jutge
 * * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>
#include <vector>

// declaracion de metodos
void SearchForA(const std::string& cadena_usu);

int main() {
  std::string cadena_usu;
  getline(std::cin, cadena_usu);
  SearchForA(cadena_usu);

  return 0;
}

void SearchForA(const std::string& cadena_usu) {
  short int counter = 0;
  char palabra = 'a';
  for (int i = 0; i < cadena_usu.length(); ++i) {
    if (cadena_usu[i] == palabra) {
      ++counter;
    }
  }
  if (counter == 0) {
    std::cout << "no" << std::endl;
  }
  if (counter > 0) {
    std::cout << "yes" << std::endl;
  }
}