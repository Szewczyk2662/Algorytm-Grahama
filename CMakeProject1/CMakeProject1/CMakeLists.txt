# CMakeList.txt: projekt CMake dla elementu CMakeProject1, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (CMakeProject1 "main.cpp" "CMakeProject1.h" "Point/point.h" "Point/point.cpp" "ImputControl/ImputControl.h" "ImputControl/ImputControl.cpp" "App/App.h" "App/App.cpp" "Algorithm/algorithm.cpp" "Algorithm/algorithm.h"  )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
