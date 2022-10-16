#ifndef D_INTPAIR
#define D_INTPAIR

class IntPair {
  int first, second;
 public:
  IntPair(int f, int s);
  IntPair operator++();
  IntPair operator++(int);
  int getFirst() { return this->first; }
  int getSecond() { return this->second; }
};

#endif // D_INTPAIR
