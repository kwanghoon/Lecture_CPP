#ifndef D_FUNCTION
#define D_FUNCTION

class A {
  int a;
 public:
  A(int a);
  int get();
};

class B {
  int b;
 public:
  B(int b);
  int get();
};


class Function {
 public:
  A operator() (B b);
};

#endif // D_FUNCTION
