cmake_minimum_required(VERSION 3.0.0)
project(kircformer)

set(SRCS main.cpp)
set(CMAKE_PREFIX_PATH  C:\\SFML\\lib\\cmake\\SFML\\)
set(CMAKE_MODULE_PATH FindSFML.cmake)
add_executable(kircformer ${SRCS})

find_package(SFML
  COMPONENTS 
    system window graphics network audio REQUIRED
  )

include_directories(headers /usr/include C:\\SFML\\include)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window)