set(UNICORN_SOURCES ${CMAKE_CURRENT_LIST_DIR}/Unicorn.cpp
					${CMAKE_CURRENT_LIST_DIR}/Unicorn.hpp
					${CMAKE_CURRENT_LIST_DIR}/UnicornBuilder.cpp
					${CMAKE_CURRENT_LIST_DIR}/UnicornBuilder.hpp
)

source_group("Unicorn" FILES ${UNICORN_SOURCES})
target_sources(${PROJECT_NAME} PUBLIC ${UNICORN_SOURCES})