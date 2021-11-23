/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/

#include <iostream>
#include <string>
#include <vector>

//declaracion de metodos 
void Reverse(const std::vector<std::string>& kWords) {
  const int kZero{0};
  for (int i = kWords.size() - 1; i >= kZero; --i) {
    if (i != 0) {
      std::cout << kWords[i] << " ";
    } else {
      std::cout << kWords[i];
    }  
  }
  std::cout << std::endl;
}

int main() {
  std::vector<std::string> words;
  std::string word_aux;
  const int kNumberWords{3};
  for (int i= 0; i < kNumberWords; ++i) {
    std::cin >> word_aux;
    words.push_back(word_aux);    
  } 

  Reverse(words);
  return 0;
}