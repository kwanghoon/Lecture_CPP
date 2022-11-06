#ifndef SWAP_H
#define SWAP_H

template <class T>
void swap(T& var1, T& var2) {
  T temp;
  temp = var1;
  var1 = var2;
  var2 = temp;
}

#endif // SWAP_H
