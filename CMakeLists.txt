cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurment) 

add_subdirectory(googletest) 

include_directories(googletest/include) 

add_executable(executeTests 
                main/model/Unit.h 
                main/model/Unit.cpp 
                main/model/Quantity.h 
                main/model/Quantity.cpp 
                main/enums/UnitCategory.cpp
                test/QuantityMeasurementTest.cpp) 
                
target_link_libraries(executeTests PRIVATE gtest)