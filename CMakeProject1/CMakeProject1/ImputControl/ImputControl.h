#ifndef IMPUTCONTROL_H
#define IMPUTCONTROL_H

#include <vector>
#include <fstream>
#include <iostream>
#include <stack>
#include <string>
#include "..\Point\point.h"

class ImputOutput {
public:
	static std::vector<Point> ReadFile(std::string); //funkcja czytaj z pliku
	static void PrintResult(std::stack<Point>);    //funkcja wypisujaca finalne punkty

};

#endif // IMPUTCONTROL_H