file(GLOB_RECURSE MASTER_SOURCES "src/*.*")

get_target_property(MOTORDRIVER_INCLUDE_DIRS motordriver INCLUDE_DIRECTORIES)
add_executable(master "${MASTER_SOURCES}")
target_include_directories(master PUBLIC include "${MOTORDRIVER_INCLUDE_DIRS}")
target_link_libraries(master motordriver)
