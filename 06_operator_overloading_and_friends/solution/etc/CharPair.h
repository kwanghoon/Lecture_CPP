#ifndef D_CHARPAIR
#define D_CHARPAIR

class CharPair {
  char first;
  char second;
 public:
  CharPair();
  CharPair(char f, char s);
  char& operator[](int index);
};

#endif // D_CHARPAIR
