// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define BT_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_bt_interfaces_dummy __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_bt_interfaces_dummy __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_bt_interfaces_dummy
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_bt_interfaces_dummy ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_bt_interfaces_dummy ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_bt_interfaces_dummy
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_bt_interfaces_dummy
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_bt_interfaces_dummy __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_bt_interfaces_dummy
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
