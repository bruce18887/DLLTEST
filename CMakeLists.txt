cmake_minimum_required(VERSION 3.24)
project(DLLTEST)
set(CMAKE_CXX_STANDARD 17)
#dll库文件目录
link_directories(cmake-build-debug)


if (true)
    add_library(Transclass SHARED TransclassSource.cpp TransclassObj.cpp)
    #如果有动态库Transclass 将__DLL_API宏赋值为1
    target_compile_definitions(Transclass PUBLIC __DLL_API=1)
endif ()

#配置可执行文件已main.cpp为实例文件
add_executable(test main.cpp)
#链接动态库 需要在配置可执行文件的后面
target_link_libraries(test Transclass)