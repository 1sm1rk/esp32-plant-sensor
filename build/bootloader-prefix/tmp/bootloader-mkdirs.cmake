# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/sm1rk/esp/esp-idf/components/bootloader/subproject"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/tmp"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/src/bootloader-stamp"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/src"
  "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/sm1rk/projekte/esp32/esp32-plant-sensor/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
