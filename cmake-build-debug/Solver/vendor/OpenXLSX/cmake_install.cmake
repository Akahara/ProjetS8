# Install script for directory: /Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/Solver/vendor/OpenXLSX/OpenXLSX-Exports.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCell.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCellIterator.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCellRange.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCellReference.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCellValue.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLColor.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLColumn.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLCommandQuery.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLConstants.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLContentTypes.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLDateTime.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLDocument.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLException.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLFormula.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLIterator.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLProperties.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLRelationships.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLRow.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLRowData.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLSharedStrings.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLSheet.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLWorkbook.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLXmlData.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLXmlFile.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLXmlParser.hpp"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/headers/XLZipArchive.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX" TYPE FILE FILES "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/OpenXLSX.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lib" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/output/libOpenXLSXd.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSXd.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSXd.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libOpenXLSXd.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/Solver/vendor/OpenXLSX/OpenXLSXConfig.cmake"
    "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/Solver/vendor/OpenXLSX/OpenXLSX/OpenXLSXConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake"
         "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/Solver/vendor/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/Solver/vendor/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "/Users/thomasraymond/Documents/Etudes/DI4/S8/Projet collectif/Projet S8/cmake-build-debug/Solver/vendor/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets-debug.cmake")
  endif()
endif()

