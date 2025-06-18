cmake_minimum_required(VERSION 3.27)

project(RiskEngine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add directories
add_subdirectory(app)
add_subdirectory(engine)
add_subdirectory(loader)

# Main executable
add_executable(main main.cpp)

# Link submodules to the executable
target_link_libraries(main PRIVATE app engine loader)
