# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_place_object_skill_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED place_object_skill_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(place_object_skill_FOUND FALSE)
  elseif(NOT place_object_skill_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(place_object_skill_FOUND FALSE)
  endif()
  return()
endif()
set(_place_object_skill_CONFIG_INCLUDED TRUE)

# output package information
if(NOT place_object_skill_FIND_QUIETLY)
  message(STATUS "Found place_object_skill: 0.0.0 (${place_object_skill_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'place_object_skill' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT place_object_skill_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(place_object_skill_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${place_object_skill_DIR}/${_extra}")
endforeach()
