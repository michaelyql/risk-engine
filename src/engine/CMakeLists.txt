set(ENGINE_SOURCES 
    valuationEngine.cpp 
    valuationEngine.h
)

add_library(engine ${ENGINE_SOURCES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
