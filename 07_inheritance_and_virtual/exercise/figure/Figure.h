#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
  virtual void draw() = 0;
  void center();

protected:
  double x, y;   // Screen size: 640 x 480
                 // The center is (320,240)
};

#endif // FIGURE_H
