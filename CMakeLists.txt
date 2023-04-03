cmake_minimum_required(VERSION 3.16)
project(first_u)

set(CMAKE_CXX_STANDARD 14)

include_directories(Document)
include_directories(EMail)
include_directories(Person)

add_executable(first_u
        Document/Document.cpp
        Document/Document.h
        EMail/EMail.cpp
        EMail/EMail.h
        Person/Person.cpp
        Person/Person.h
        main.cpp)
