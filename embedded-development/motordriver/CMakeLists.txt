file(GLOB_RECURSE MOTORDRIVER_SOURCES "src/*.*")


add_library(motordriver "${MOTORDRIVER_SOURCES}")
target_include_directories(motordriver PUBLIC include)

