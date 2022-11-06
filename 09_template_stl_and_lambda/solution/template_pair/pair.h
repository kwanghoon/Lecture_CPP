#ifndef PAIR_H
#define PAIR_H

template <class T>
class Pair {
public:
     Pair ();
     Pair ( T firstValue, T secondValue );
     void setFirst ( T newValue );
     void setSecond ( T newValue );
     T getFirst () const;
     T getSecond () const;
     T addUp () const;
private:
     T first;
     T second;
};

template <class T>
Pair<T>::Pair () {
  // do nothing
}

template <class T>
Pair<T>::Pair (T f, T s) {
      first = f;
      second = s;
}


template <class T>
void Pair<T>::setFirst (T n) {
     first = n;
}

template <class T>
void Pair<T>::setSecond (T n) {
     second = n;
}

template <class T>
T Pair<T>::getFirst () const {
     return first;
}

template <class T>
T Pair<T>::getSecond () const {
     return second;
}

template <class T>
T Pair<T>::addUp() const {
  return first + second;
}


#endif // PAIR_H
