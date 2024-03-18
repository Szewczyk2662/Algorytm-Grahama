
#include "..\App\App.h"


void App::start(){
    std::vector<Point> point_arr;
    std::stack<Point> stack_final;
    std::cout << "Dzien dobry podaj link do pliku\n->";
    std::string link;
    std::cin >> link;
    Algorithm graham = Algorithm();// Obiekt algorytmu
    point_arr=ImputOutput::ReadFile(link); //Odczytanie punktów z pliku i zapisanie ich do wektora
    graham.find_lower_y(point_arr);// Znalezienie punktu o najni¿szej wartoœci y 
    std::sort(point_arr.begin(), point_arr.end(), Algorithm::compare);  // Posortowanie punktów wzglêdem k¹ta za pomoca metody compare
    stack_final.push(point_arr[point_arr.size()-1]);
    stack_final.push(point_arr[point_arr.size() - 2]);
    stack_final.push(point_arr[point_arr.size() - 3]);

    for (int i = point_arr.size() - 3; i >= 0; i--)
    {
        //Dopóki kierunek obrotu punktów nie jest przeciwny do ruchu zegara usuwaj z stacka
        while (graham.orientation(Algorithm::second_on_stack(stack_final), stack_final.top(), point_arr[i]) != Algorithm::Direc::anti_clockwise){stack_final.pop();}
            stack_final.push(point_arr[i]);   // Dodaj punkt na stos
    }
    ImputOutput::PrintResult(stack_final);   // Wyœwietlenie wyniku 
   

  
}