# /IfcParser
cmake_minimum_required(VERSION 3.20)


# Each folder was defined as a project
project(IfcParser)


# Determine the creation of the executable
add_executable(IfcParser main.cpp)


# link libraries
target_link_libraries(IfcParser PRIVATE IfcPlusPlus)


# Set header directories
target_include_directories(IfcParser
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/ifcpp/IFC4X3/include
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/glm
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/Carve/include
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/Carve/src
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/Carve/src/include
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/Carve/src/common
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/Carve/build/src
    ${DiceTest_SOURCE_DIR}/IfcPlusPlus/src/external/glm
)
