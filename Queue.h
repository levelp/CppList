#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

// Очередь, реализованная через
// динамический список
template <class T> // T - тип элементов в стеке
class Queue {
  struct Element {
    T value; // Значение
    Element* next; // Следующий элемент
    Element() : next(NULL) {}
  };
  Element* head,// Начало очереди
           *tail; // Конец (хвост) очереди
 public:
  Queue() : head(NULL), tail(NULL) {}
  // Добавить в конец очереди
  void put(T v) {
    // TODO: реализовать
  }
  // Получить из начала очереди
  T get() {
    if(head == NULL && tail == NULL) {
      std::cout << "Queue is empty!" << std::endl;
      throw "Queue is empty!";
    }

    T value;
    // 5. Возвращаем значение
    return value;
  }
};

#endif // QUEUE_H_INCLUDED
