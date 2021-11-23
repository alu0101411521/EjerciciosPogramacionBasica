/** * Universidad de La Laguna
* * Escuela Superior de Ingeniería y Tecnología
* * Grado en Ingeniería Informática
* * Asignatura: Informática Básica
* * Curso: 1º
* * Práctica 8 - jutge
* * Endika Pradera Touzani <alu0101411521@ull.edu.es*/


#include <iostream>
#include <stack>

//declaracion de metodos
bool Verify(const std::string& kInput) {
  char centinel = 'c';
  std::stack<char> stacks;
  stacks.push(centinel);
  for (char x: kInput) {
    if (x == '(') {
      stacks.push('x');
    } else if (x == ')') {
      if (stacks.top() == centinel) {
        return false;
      }
      stacks.pop();
    }
  }
  return stacks.top() == centinel;
}

int main() {
  std::string parentheses("");
  std::cin >> parentheses;
  if (Verify(parentheses)) {
    std::cout << "yes\n";
  } else {
    std::cout << "no\n";
  }
  return 0;
}