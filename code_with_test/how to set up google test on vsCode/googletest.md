Start with a clean directory:
/home/user/Desktop/projects/cpp/ # your project lives here
Add your cmake file(CMakeLists.txt), your source files, and test file. The directory now looks like this:
└─cpp/
    ├─ CMakeLists.txt
    ├─ myfunctions.h
    └─ mytests.cpp
Clone and add googletest to this directory:
└─cpp/
    ├─ googletest/
    ├─ CMakeLists.txt
    ├─ myfunctions.h
    └─ mytests.cpp
Open your CMakeLists.txt and enter the following:
cmake_minimum_required(VERSION 3.12) # version can be different

project(my_cpp_project) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytests mytests.cpp) # add this executable

target_link_libraries(mytests PRIVATE gtest) # link google test to this executable
Contents of myfunctions.h for the example:
#ifndef _ADD_H
#define _ADD_H

int add(int a, int b)
{
    return a + b;
}

#endif
Contents of mytests.cpp for the example:
#include <gtest/gtest.h>
#include "myfunctions.h"

TEST(myfunctions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
Now you just have to run the tests. There are multiple ways to do that.

In the terminal, create a build/ dir in cpp/:

mkdir build
Your directory should now look like this:

└─cpp/
    ├─ build/
    ├─ googletest/
    ├─ CMakeLists.txt
    ├─ myfunctions.h
    └─ mytests.cpp
Next go into the build directory:

cd build
Then run:

cmake ..
make
./mytests
Alternative way:

Install the CMake Tools extension for VS Code
In the bottom bar, you can see the current target (in square brackets Build [mytest] and Run [mytest])you want to build / run:
Then just click the run button.
enter image description here

Building Google test itself

Using terminal:

Go into the dir /home/user/Desktop/projects/cpp/googletest
Create build/ inside it so that it looks like following:
└─cpp/googletest/
    ├─ build/
    ├─ ...other googletest files
cd build
Run: cmake -Dgtest_build_samples=ON -DCMAKE_BUILD_TYPE=Debug ..
make -j4
./googletest/sample1_unittest
Using VS-Code

Open the googletest folder into VS Code
CMake extension will prompt for configuration, allow it
You will see a .vscode directory. Inside it is settings.json file, open it, and add the following to it:
    "cmake.configureSettings": { "gtest_build_samples": "ON" }
Build and run from the buttons in the bottom bar