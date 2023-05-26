# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Lvwenchao/geek/esp-idf-V4.4/esp-idf/components/bootloader/subproject"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix/tmp"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix/src"
  "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Lvwenchao/geek/esp-idf-V4.4/opencv/simple/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
