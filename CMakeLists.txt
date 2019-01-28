cmake_minimum_required(VERSION 3.12)

project(ExpressionBuilderExample)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC 
		${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/horse)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/horse/pegasus)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/horse/unicorn)