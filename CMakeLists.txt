cmake_minimum_required(VERSION 3.10)

# 项目信息
project(
    SimpleApp
    VERSION 1.0.0
    DESCRIPTION "A simple C++ project using CMake"
    LANGUAGES CXX
)

# 设置 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 添加可执行文件
add_executable(${PROJECT_NAME} src/main.cpp)

# 设置目标属性（可选）
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    OUTPUT_NAME "simple-app"
)

# 添加包含目录（如果需要其他头文件）
# include_directories(include)

# 链接库（如果需要）
# find_package(Boost REQUIRED)
# target_link_libraries(${PROJECT_NAME} Boost::boost)

# 安装规则（可选）
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)