#include <cmath>
#include "point.h"

double Point::distance(Point p2) const {
	return (std::pow(this->get_x() - p2.get_x(), 2) + std::pow(this->get_y() - p2.get_y(), 2));
}
int Point::orientation_val(Point p1 , Point p2, Point p3){
	return (p2.get_y() - p1.get_y()) * (p3.get_x() - p2.get_x()) - (p2.get_x() - p1.get_x()) * (p3.get_y() - p2.get_y());
}
double Point::get_y()const {
	return m_y;
}
double Point::get_x()const {
	return m_x;
}
