
#include "..\Algorithm\Algorithm.h"


void Algorithm::find_lower_y(std::vector<Point> point_arr) {
	Point temp = point_arr.at(0);
	for (size_t i{0}; i < point_arr.size(); i++) {
		if (temp.get_y() > point_arr.at(i).get_y()) { temp = point_arr.at(i); };
	}
	 Algorithm::first_in_stack=temp;
}
Point Algorithm::second_on_stack(std::stack<Point>& Stack)
{
	Point p = Stack.top(); // Pobranie pierwszego punktu ze stosu.
	Stack.pop();
	Point secound_point = Stack.top(); // Pobranie drugiego punktu ze stosu.
	Stack.push(p);
	return secound_point;
}
int Algorithm::orientation(Point p1, Point p2, Point p3) {
	int temp = Point::orientation_val( p1,p2,p3); // Obliczenie wartoœci orientacji
	 if (temp == Direc::colinear) return Direc::colinear;
	return (temp > 0) ? Direc::clockwise : Direc::anti_clockwise ;
	}
 int Algorithm::compare(const Point& p1, const Point& p2) {

	 int orientation = Algorithm::orientation(Algorithm::first_in_stack,p1, p2);
	 if (orientation == 0) //zwróæ 0 jeœli odleg³oœæ od pierwszego punktu na stosie do drugiego punktu jest wiêksza lub równa
		 return (Algorithm::first_in_stack.distance(p2) >= Algorithm::first_in_stack.distance(p1)) ? 0 : 1; 

	 return (orientation == 2) ? 0 : 1; // 0 dla kierunku przeciwnego do ruchu wskazówek zegara (anti-clockwise), w przeciwnym razie 1.
}