# Project Info
cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
cmake_policy(VERSION 3.7)
project(VulkanSeed)
enable_language(C)
enable_language(CXX)

# CMake Settings
set(CMAKE_SUPPRESS_REGENERATION true)

# Dependencies
find_path(VULKAN_INCLUDE_DIR NAMES vulkan/vulkan.h HINTS
    "$ENV{VULKAN_SDK}/Include"
    "$ENV{VK_SDK_PATH}/Include")
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    find_library(VULKAN_LIBRARY NAMES vulkan-1 HINTS
        "$ENV{VULKAN_SDK}/Lib"
        "$ENV{VULKAN_SDK}/Bin"
        "$ENV{VK_SDK_PATH}/Bin")
else()
    find_library(VULKAN_LIBRARY NAMES vulkan-1 HINTS
        "$ENV{VULKAN_SDK}/Lib32"
        "$ENV{VULKAN_SDK}/Bin32"
        "$ENV{VK_SDK_PATH}/Bin32")
endif()
include_directories(${VULKAN_INCLUDE_DIR})
add_subdirectory(external/Vulkan-WSIWindow/WSIWindow)
include_directories(external/glm)

# Sources
include_directories(
    ${PROJECT_SOURCE_DIR}/src
    )

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    )

# Finish Dependencies
target_link_libraries(
    ${PROJECT_NAME}
    ${VULKAN_LIBRARY}
    WSIWindow
    )