# The name of our project is "HELLO". CMakeLists files in this project can 
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and 
# to the root binary directory of the project as ${HELLO_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.6) 
project (MagicSquare) 


#add_library (magicsquare magicsquare.cpp)
#add_library (ga ga.cpp)

# Add executable called "helloDemo" that is built from the source files 
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found. 
add_executable (magicsquare  magicsquare.cpp ga.cpp main.cpp) 

# Link the executable to the Hello library. 
#target_link_libraries (helloDemo Hello) 
