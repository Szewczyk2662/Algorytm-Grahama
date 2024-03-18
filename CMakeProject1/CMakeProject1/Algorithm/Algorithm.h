#ifndef	ALGORYTHM_H
#define ALGORYTHM_H
#include <vector>
#include <stack>
#include "..\Point\point.h"

class Algorithm {
 public:
  static int orientation(Point, Point, Point);
  void find_lower_y(std::vector<Point>);
  static Point second_on_stack(std::stack<Point>&); //zwraca drugi punkt na stacku od gory
  static int compare(const Point&, const Point& );  //metooda porownania dla std::sort
  enum Direc // dla jasnosci kodu uzylem enuma( colinear=0 itd)
	  { colinear, clockwise ,anti_clockwise};

private:
	inline static Point first_in_stack;

};




#endif // ALGORYTHM_H