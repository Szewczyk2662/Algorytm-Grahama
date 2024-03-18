#include "..\ImputControl\ImputControl.h"


std::vector<Point> ImputOutput::ReadFile(std::string link) {
    std::vector<Point> point_arr; //Inicjalizacja pustego wektora punktów.
    double i{0}, x{ 0 }, y{ 0 };
    std::ifstream file;
    file.open(link);

    if (!file.is_open()) {  // Sprawdzenie czy uda³o siê otworzyæ plik.
        std::cout << "Error. Sciezka jest niepoprawna";
    }
    std::fstream cin(link);  // Otwarcie pliku do odczytu za pomoc¹ strumienia cin
    cin >> i;
    while (i > 0) {
        cin >> x;
        cin >> y;
        i--;
       
        point_arr.push_back(Point(x, y)); // Dodanie wczytanego punktu do wektora.
    }
    cin.close();
    file.close();
  
    return point_arr; //Zwrócenie wektora punktów.
};

void ImputOutput::PrintResult(std::stack<Point> finale_stack ){
    std::cout << " Punkty tworzace otoczke to :\n";
    std::cout << "[(" << finale_stack.top().get_x() << ", " << finale_stack.top().get_y() << ")";
    finale_stack.pop(); // Usuniêcie pierwszego punktu ze stosu.

    while (!finale_stack.empty())
    {
        std::cout << ", (" << finale_stack.top().get_x() << ", " << finale_stack.top().get_y() << ")";
        finale_stack.pop();//usuwanie kolejnych punktów ze stosa
    }
    std::cout << "]\n";
};