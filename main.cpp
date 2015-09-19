#include <iostream>

using namespace std;

// Стек, реализованный через
// динамический список
class Stack {
  class Element {
    int value; // Значение
    Element* next; // Ссылка на следующий
  };
  Element* root = NULL; // Корень стека
 public:
  // Положить значение на вершину стека
  void push(int v) {
    // TODO: реализовать
  }
  // Получить значение с вершины стека
  int pop() {
    // TODO: реализовать
  }
};

int main() {
  Stack s; // Объявление переменной s
  s.push(2);
  cout << s.pop() << endl;
  return 0;
}
