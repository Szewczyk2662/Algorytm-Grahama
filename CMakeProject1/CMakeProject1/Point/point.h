#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
public:

	Point() = default;
	Point(double x, double y) : m_x{ x }, m_y{ y } {};
	static int orientation_val(Point, Point, Point);
	double distance(Point)const;
	double get_y()const;
	double get_x()const;
	
	

private:
	double m_x{ 0 };
	double m_y{ 0 };
};

#endif // POINT_H

