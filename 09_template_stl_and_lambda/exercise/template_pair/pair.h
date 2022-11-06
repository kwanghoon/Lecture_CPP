#ifndef PAIR_H
#define PAIR_H

/*  완성하시오  */
class Pair {
public:
     Pair ();
     Pair ( /*  완성하시오  */ firstValue, T secondValue );
     void setFirst ( T newValue );
     void setSecond ( /*  완성하시오  */ newValue );
     T getFirst () const;
     /*  완성하시오  */  getSecond () const;
     T addUp () const;
private:
     T first;
     /*  완성하시오  */ second;
};

template <class T>
Pair<T>::Pair () {
  // do nothing
}

template <class T>
/*  완성하시오  */ Pair (T f, T s) {
      first = f;
      second = s;
}


template <class T>
void Pair<T>::setFirst (T n) {
     first = n;
}

/*  완성하시오  */
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

/*  완성하시오  */
T Pair<T>::addUp() const {
  return first + second;
}


#endif // PAIR_H
