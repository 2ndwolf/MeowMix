cmake_minimum_required(VERSION 3.16)
set(PROJ_NAME "MeowMix")

project(${PROJ_NAME})

# string(TOLOWER ${PROJECT_NAME} EXECUTABLE)

set(CMAKE_CXX_STANDARD 17)

include_directories(
		${PROJECT_SOURCE_DIR}/include
		${PROJECT_SOURCE_DIR}/dependencies
    .
)

# add_subdirectory(./dependencies/SDL2/bin)

 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}../bin)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB NESTEDSOURCES ${PROJECT_SOURCE_DIR}/src/*/*.cpp)
file(GLOB NESTEDSOURCES2 ${PROJECT_SOURCE_DIR}/src/*/*/*.cpp)
file(GLOB HEADERS ${PROJECT_SOURCE_DIR}/include/*.h)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ ${CMAKE_CXX_STANDARD_LIBRARIES}")


#set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

find_library(SDL2_LIBRARY 
    NAMES SDL2 
    PATHS ${PROJECT_SOURCE_DIR}/dependencies/SDL2_32/lib/x86
    NO_CMAKE_PATH
    NO_CMAKE_ENVIRONMENT_PATH
    NO_SYSTEM_ENVIRONMENT_PATH
    NO_CMAKE_SYSTEM_PATH
)

# find_library(SDL2_MIXER 
#     NAMES SDL2_mixer
#     PATHS ${PROJECT_SOURCE_DIR}/dependencies/SDL2_mixer-dev/bin
#     NO_CMAKE_PATH
#     NO_CMAKE_ENVIRONMENT_PATH
#     NO_SYSTEM_ENVIRONMENT_PATH
#     NO_CMAKE_SYSTEM_PATH
# )

add_executable(${PROJ_NAME} ${SOURCES} ${NESTEDSOURCES} ${NESTEDSOURCES2} ${HEADERS})
# set_target_properties(${PROJ_NAME} PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

target_link_libraries(${PROJ_NAME} ${SDL2_LIBRARY})
