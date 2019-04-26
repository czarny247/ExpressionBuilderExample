SET(SOURCES 
	horse/Horse.cpp
	horse/HorseBuilder.cpp
	horse/pegasus/Pegasus.cpp
	horse/pegasus/PegasusBuilder.cpp
	horse/unicorn/Unicorn.cpp
	horse/unicorn/UnicornBuilder.cpp)

add_executable(${PROJECT_NAME} 
	main.cpp
	${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE src)