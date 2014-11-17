cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(pp6calculator)

include(CheckCXXCompilerFlag)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
check_cxx_compiler_flag(-std=c++11 HAS_GNUSTYLE_CPP11)
if(HAS_GNUSTYLE_CPP11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
endif()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors -Wall -Wextra -Werror -Wfatal-errors -Wwrite-strings -Woverloaded-virtual -fno-gnu-keywords -fstrict-aliasing")
endif()

include_directories(PP6Lib FileReader)

add_subdirectory(PP6Lib)
add_subdirectory(FileReader)
add_subdirectory(FourVec)

add_executable(pp6calculator pp6calculator.cpp)

target_link_libraries(pp6calculator pp6lib FileReader FourVec)

install(TARGETS pp6calculator DESTINATION bin)

include(CPack)
