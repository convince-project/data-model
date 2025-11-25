// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define NOTIFY_USER_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_notify_user_interfaces_dummy __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_notify_user_interfaces_dummy __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_notify_user_interfaces_dummy __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_notify_user_interfaces_dummy __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_notify_user_interfaces_dummy
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_notify_user_interfaces_dummy ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_notify_user_interfaces_dummy
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_notify_user_interfaces_dummy ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_notify_user_interfaces_dummy
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_notify_user_interfaces_dummy __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_notify_user_interfaces_dummy
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_notify_user_interfaces_dummy __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_notify_user_interfaces_dummy
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // NOTIFY_USER_INTERFACES_DUMMY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
