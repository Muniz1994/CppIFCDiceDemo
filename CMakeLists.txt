# Main directory

# Define the cmake requirements
cmake_minimum_required(VERSION 3.20)


# Define the basic info about the project
project(DiceTest)


# Define this necessary flag
add_definitions(-DIFCQUERY_STATIC_LIB)


# Set environment variables
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add library and project directories
add_subdirectory(IfcPlusPlus)
add_subdirectory(IfcParser)