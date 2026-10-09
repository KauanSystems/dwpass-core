# core/src/features/CMakeLists.txt

add_library(${PROJECT_NAME}_lib_logic
	generator/generator.cpp
	compare/compare.cpp
)

# Serve Para Ajustar o Nome da Lib na Hora sa Compilação.
set_target_properties(${PROJECT_NAME}_lib_logic PROPERTIES PREFIX "")

target_include_directories(${PROJECT_NAME}_lib_logic PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/core/include/
	${CMAKE_CURRENT_SOURCE_DIR}/core/include/logic/
)
