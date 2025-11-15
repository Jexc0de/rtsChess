cmake_minimum_required(VERSION 3.16)
project(RTSChess)
set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

include_directories(include)

add_executable( RTSChess 

src/main.cpp

)

target_link_libraries(RTSChess PRIVATE
    sfml-system
    sfml-window
    sfml-graphics
)

