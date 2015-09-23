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
  // Конструктор
  Queue() : head(NULL), tail(NULL) {}
  // Добавить в конец очереди
  void put(T v) {
    Element* e = new Element; // Создаём новый элемент
    e->value = v; // Присваиваем значение

    // Добавляем элемент в конец очереди
    if(tail == NULL) // Если очередь пуста
      head = e; // Встаём в начало очереди
    else // Если не пуста
      tail->next = e; // Встаём за последним

    tail = e; // Теперь мы в конце очереди
  }
  // Получить из начала очереди
  T get() {
    if(head == NULL && tail == NULL) {
      std::cout << "Queue is empty!" << std::endl;
      throw "Queue is empty!";
    }

    T value = head->value; // Элемент из начала очереди
    Element* e = head; // Сохраняем для удаления
    head = head->next; // Начало сдвигаем на следующий

    if(head == NULL) // Если это был последний
      tail = NULL;

    delete e; // Удаляем элемент
    return value; // Возвращаем значение
  }
};

#endif // QUEUE_H_INCLUDED
