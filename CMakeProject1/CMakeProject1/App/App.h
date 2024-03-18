#ifndef APP_H
#define APP_H

#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
#include "..\Point\point.h"
#include "..\ImputControl\ImputControl.h"
#include "..\Algorithm\algorithm.h"




class App {
public :
	static void start(); 
	static std::stack<Point> final_stack;
    
};

#endif // APP_H