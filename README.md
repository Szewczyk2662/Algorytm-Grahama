# Algorytm otoczki wypukłej

## Opis

Ten projekt implementuje algorytm znajdowania otoczki wypukłej dla zbioru punktów w przestrzeni dwuwymiarowej. Algorytm wykorzystuje metodę skaningu Grahama do znalezienia otoczki wypukłej dla podanych punktów.

## Struktura projektu

Projekt składa się z następujących plików i klas:

- **point.h, point.cpp**: Klasa reprezentująca punkt w przestrzeni dwuwymiarowej.
- **algorithm.h, algorithm.cpp**: Klasa implementująca algorytm znajdowania otoczki wypukłej.
- **imputcontrol.h, imputcontrol.cpp**: Klasa odpowiedzialna za wczytywanie danych wejściowych i wyświetlanie wyników.

## Funkcje algorytmu

1. **find_lower_y**: Metoda znajduje punkt o najniższej wartości współrzędnej y wśród podanych punktów i ustawia go jako pierwszy punkt na stosie. Jest to krok wstępny do sortowania punktów względem kąta tworzonego z osią x przez ten punkt.

2. **second_on_stack**: Metoda zwraca drugi punkt na stosie, pozostawiając stos bez zmian. Wykorzystywana jest do porównywania kątów między punktami.

3. **orientation**: Funkcja oblicza orientację trzech punktów (czy są one ustawione zgodnie z ruchem wskazówek zegara, przeciwnie do ruchu wskazówek zegara, lub są współliniowe).

## Instrukcja użycia

1. **Uruchomienie programu**:
   - Po uruchomieniu programu użytkownik zostanie poproszony o podanie ścieżki do pliku zawierającego współrzędne punktów.
   - Program wczyta punkty z pliku, znajdzie otoczkę wypukłą i wyświetli wynik w konsoli.

2. **Wymagania**:
   - Współrzędne punktów powinny być zapisane w osobnych liniach w pliku tekstowym.
   - Współrzędne punktów powinny być oddzielone spacją lub przecinkiem.

## Zależności

Projekt nie wymaga dodatkowych zależności poza standardową biblioteką C++.

## Autorzy

Projekt został stworzony przez Mateusz Szewczyk.
