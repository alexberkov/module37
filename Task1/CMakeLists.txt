cmake_minimum_required(VERSION 3.21)
project(Task37_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Task37_1 main.cpp calculator.ui calculatormainwindow.h)
target_link_libraries(Task37_1
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

