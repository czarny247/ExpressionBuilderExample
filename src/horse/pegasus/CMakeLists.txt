set(PEGASUS_SOURCES ${CMAKE_CURRENT_LIST_DIR}/Pegasus.cpp
					${CMAKE_CURRENT_LIST_DIR}/Pegasus.hpp
					${CMAKE_CURRENT_LIST_DIR}/PegasusBuilder.cpp
					${CMAKE_CURRENT_LIST_DIR}/PegasusBuilder.hpp
)

source_group("Pegasus" FILES ${PEGASUS_SOURCES})
target_sources(${PROJECT_NAME} PUBLIC ${PEGASUS_SOURCES})