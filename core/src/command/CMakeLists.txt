# core/src/command/CMakeLists.txt

add_library(${PROJECT_NAME}_lib_command
	export/export.cpp
	help/help.cpp
	logo/logo.cpp
	version/version.cpp
	system/system.cpp
)

# Serve Para Ajustar o Nome da Lib na Hora sa Compilação.
set_target_properties(${PROJECT_NAME}_lib_command PROPERTIES PREFIX "")

target_include_directories(${PROJECT_NAME}_lib_command PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/core/include/
	${CMAKE_CURRENT_SOURCE_DIR}/core/include/command/
)
