cmake_minimum_required(VERSION 3.10)
project(paclib VERSION 1.0.0 DESCRIPTION "interface for pacman in C++")
include(GNUInstallDirs)
add_library(paclib SHARED pacman.cpp)
set_target_properties(paclib PROPERTIES 
	VERSION ${PROJECT_VERSION}
	SOVERSION 1
	PUBLIC_HEADER pacman.h
	)
target_include_directories(paclib PRIVATE .)
install(TARGETS paclib
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
	)
configure_file(paclib.pc.in paclib.pc @ONLY)
install(FILES ${CMAKE_BINARY_DIR}/paclib.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
