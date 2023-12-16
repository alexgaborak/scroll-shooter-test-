cmake_minimum_required(VERSION 3.27)
project(scroll_shooter_test_)

set(CMAKE_CXX_STANDARD 23)

add_executable(scroll_shooter_test_ main.cpp
        config.hpp
        classes.h
        menu.h
        Bullet.hpp
        Bullet.cpp
        Ship.hpp
        Ship.cpp
        LaserBeam.hpp
        LaserBeam.cpp
        Asteroid.hpp
        Asteroid.cpp
        Drop.hpp
        Drop.cpp
        Buff.hpp
        Buff.cpp
        Background.hpp
        Background.cpp
        AboutInfo.hpp
        AboutInfo.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS graphics window network audio REQUIRED)

include_directories(C:/SFML/include)
target_link_libraries(scroll_shooter_test_
        sfml-graphics
        sfml-window
        sfml-network
        sfml-audio)