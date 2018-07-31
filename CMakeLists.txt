cmake_minimum_required(VERSION 3.2)

project(grasp VERSION 0.0.1)

configure_file(version.h.in version.h)

add_executable(grasp main.cpp)

set_target_properties(grasp PROPERTIES
	CXX_STANDART 14
	CXX_STANDART_REQUIRED ON
	COMPILE_OPTION -Wpedantic -Wall -Wextra
)

install(TARGETS grasp RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT erkinvs@gmail.com)

include(CPack)
