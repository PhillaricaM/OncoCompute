# CMakeList.txt : CMake project for OncoCompute, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("OncoCompute")

# Add source to this project's executable.
add_executable(OncoCompute
    "OncoCompute.cpp"
    "OncoCompute.h"
    "src/statistics.cpp"
    "src/csv_reader.cpp"
)

# Include our scientific library headers.
target_include_directories(OncoCompute PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
    
# Define the location of our NCI research datasets.
target_compile_definitions(OncoCompute PRIVATE
    "ONCOCOMPUTE_DATA_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/data\""
)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET OncoCompute PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
