#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <cstdint>
#include <cstddef>

template <typename T, size_t SIZE>

class CircularBuffer {
public:
   CircularBuffer() : head(0), tail(0), full(false) {}

   bool push(const T& item) {
      buffer[head] = item;
      advanceHead();
      return true;
   }

   bool pop(T& item) {
      if (isEmpty())
         return false;
      item = buffer[tail];
      advanceTail();
      return true;
   }

   bool isFull() const {
     return full;
   }

   bool isEmpty() const {
      return (!full && (head == tail));
   }

   size_t size() const {
      if (full) 
         return SIZE;
      if (head >= tail) 
         return head - tail;
      return SIZE + head - tail;
   }

   constexpr size_t capacity() const {
      return SIZE;
   }

private:
   void advanceHead() {
      head = (head + 1) % SIZE;
      if (full) 
         tail = (tail + 1) % SIZE;

      if (head == tail) 
         full = true;
   }

   void advanceTail() {
      full = false;
      tail = (tail + 1) % SIZE;
   }

   T buffer[SIZE];
   size_t head;
   size_t tail;
   bool full;
};

#endif 
