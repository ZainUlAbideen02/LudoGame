cmake_minimum_required(VERSION 3.10)

project(LudoGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML package
set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add your source files here
add_executable(LudoGame
    Ai.cpp
    Board.cpp
    Button.cpp
    ColorSelectButton.cpp
    Dial.cpp
    Game.cpp
    InitialMenu.cpp
    LeaderBoard.cpp
    Ludo.cpp
    Menu.cpp
    MenuConfirmButton.cpp
    Pawn.cpp
    Random.cpp
    Team.cpp
    Tile.cpp
    TossButton.cpp
)

# Link SFML libraries
target_link_libraries(LudoGame sfml-graphics sfml-window sfml-system)
