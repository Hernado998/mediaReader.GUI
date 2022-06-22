cmake_minimum_required (VERSION 2.8)

project(some/ip)

set (CMAKE_CXX_FLAGS "-g -std=c++0x -fext-numeric-literals")
set (VSOMEIP_NAME vsomeip3)
set (VSOMEIP_COMPAT_NAME vsomeip)

set (VSOMEIP_MAJOR_VERSION 3)
set (VSOMEIP_MINOR_VERSION 1)

set(VSOMEIP_CONFIGURATION
    "../someip_client.json"
)

find_package( Boost 1.71 COMPONENTS system thread log REQUIRED )

include_directories (
    ${Boost_INCLUDE_DIR}
    ${VSOMEIP_INCLUDE_DIRS}
)


add_executable(someip_client someip_client.cpp main.cpp communication_interface.cpp)
target_link_libraries(someip_client ${VSOMEIP_NAME} ${Boost_LIBRARIES} ${DL_LIBRARY})

