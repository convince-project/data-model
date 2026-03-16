#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bt_nodes::bt_nodes" for configuration ""
set_property(TARGET bt_nodes::bt_nodes APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(bt_nodes::bt_nodes PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbt_nodes.a"
  )

list(APPEND _cmake_import_check_targets bt_nodes::bt_nodes )
list(APPEND _cmake_import_check_files_for_bt_nodes::bt_nodes "${_IMPORT_PREFIX}/lib/libbt_nodes.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
