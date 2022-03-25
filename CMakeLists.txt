# Copyright (C) 2021 GPL 3 and higher by Ingo Höft,  <Ingo@Hoeft-online.de>
# Redistribution only with this Copyright remark. Last modified: 2022-03-25

cmake_minimum_required(VERSION 3.18)
project(build-on-macos VERSION 0.1
                DESCRIPTION "Test how to build on github action for macOS"
                HOMEPAGE_URL "https://github.com/ingo-h/build-on-macos.git")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE=Release)

add_executable(build-macos
        main.cpp
)
