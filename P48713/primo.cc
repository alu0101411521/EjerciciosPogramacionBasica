/** * Universidad de La Laguna
 * * Escuela Superior de Ingeniería y Tecnología
 * * Grado en Ingeniería Informática
 * * Asignatura: Informática Básica
 * * Curso: 1º
 * * Práctica 8 - jutge
 * * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>
#include <vector>
#include <cmath>


//declaracion de metodos 

bool IsPrime(int& number) {
  int sqrt = std::sqrt(number);
  if (number < 2 || number % 2 == 0 && number != 2) {
    return false;
  }
  
  for (int i = 3; i <= sqrt; i += 2) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

void PrimeDetected(std::vector<int>& kNumber) {
  int counter{0};
  for (int i = 0; i < kNumber.size(); ++i) {
    if (IsPrime(kNumber[i])) {
      std::cout << kNumber[i] << " is prime\n";
    } else {
      std::cout << kNumber[i] << " is not prime\n";
    }
  }
}

int main() {
  int number_primes, primes;
  std::vector<int> prime_vec;
  std::cin >> number_primes;
  for (int j = 0; j < number_primes; ++j) {
    std::cin >> primes;
    prime_vec.push_back(primes);
  }
  PrimeDetected(prime_vec);
  return 0;
}