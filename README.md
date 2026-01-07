# cmake-cpp-project-demo
c++ demo
In this demo, I will show you how to use cmake to build an executable app

## Usage

- Write the CMakeLists.txt file
- Please be noticed the following requirements
  - the name should not be changed and the name should always be CMakeLists.txt
  - the cmake minimal version
    ```shell
    cmake_minimum_required(VERSION 3.10)
    ```
  - project name
    ```shell
    project(
    SimpleApp
    )

  - add executable file
    ```shell
    add_executable(${PROJECT_NAME} src/main.cpp)
    ```

- Create a build directory
  ```shell
  mkdir build
  cd build
  ```
- Configure with CMake
  ```shell
  cmake ..
  ```
    - .. is the file path is the CMakeLists.txt file

- Build the project
  ```shell
  make
  ```
- Run the executable file
  ```shell
  ./bin/simple-app
  ```
  
