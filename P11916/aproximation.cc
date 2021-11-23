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
double Factorial(int numero_terminos) {
  double factorial{1};
  for(double i = 0; i < numero_terminos; i++) {
    if(i == 0) {
      factorial = 1;
    }
    else{
      factorial = i * factorial;
    }
  }
  return factorial;
}

int main() {
  int numero_terminos;
  double factorial{1};
  double e;
  while(std::cin >> numero_terminos) { 
    e = 0;
    std::cout << std::fixed << std::setprecision(10);
    for(double i = 1; i <= numero_terminos; i++) {
      e += 1 / Factorial(i);
    }
    std::cout << "With " << numero_terminos << " term(s) we get " << e << ".\n";
  }
  return 0;
}