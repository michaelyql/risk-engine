set(LOADER_SOURCES 
    marketDataLoader.h
    marketDataLoaderImpl.cpp
    marketDataLoader.h
)

add_library(loader ${LOADER_SOURCES})

target_include_directories(loader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
