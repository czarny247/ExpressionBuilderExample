set(HORSE_SOURCES 	${CMAKE_CURRENT_LIST_DIR}/Horse.cpp
					${CMAKE_CURRENT_LIST_DIR}/Horse.hpp
					${CMAKE_CURRENT_LIST_DIR}/HorseBuilder.cpp
					${CMAKE_CURRENT_LIST_DIR}/HorseBuilder.hpp
					${CMAKE_CURRENT_LIST_DIR}/IHorseBuilder.cpp
					${CMAKE_CURRENT_LIST_DIR}/IHorseBuilder.hpp
)

source_group("Horse" FILES ${HORSE_SOURCES})
target_sources(${PROJECT_NAME} PUBLIC ${HORSE_SOURCES})