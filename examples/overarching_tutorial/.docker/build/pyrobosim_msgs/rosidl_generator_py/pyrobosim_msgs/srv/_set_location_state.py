# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pyrobosim_msgs:srv/SetLocationState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLocationState_Request(type):
    """Metaclass of message 'SetLocationState_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pyrobosim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pyrobosim_msgs.srv.SetLocationState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_location_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_location_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_location_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_location_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_location_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLocationState_Request(metaclass=Metaclass_SetLocationState_Request):
    """Message class 'SetLocationState_Request'."""

    __slots__ = [
        '_location_name',
        '_open',
        '_lock',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'location_name': 'string',
        'open': 'boolean',
        'lock': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.location_name = kwargs.get('location_name', str())
        self.open = kwargs.get('open', bool())
        self.lock = kwargs.get('lock', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.location_name != other.location_name:
            return False
        if self.open != other.open:
            return False
        if self.lock != other.lock:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def location_name(self):
        """Message field 'location_name'."""
        return self._location_name

    @location_name.setter
    def location_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'location_name' field must be of type 'str'"
        self._location_name = value

    @builtins.property  # noqa: A003
    def open(self):  # noqa: A003
        """Message field 'open'."""
        return self._open

    @open.setter  # noqa: A003
    def open(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'open' field must be of type 'bool'"
        self._open = value

    @builtins.property
    def lock(self):
        """Message field 'lock'."""
        return self._lock

    @lock.setter
    def lock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lock' field must be of type 'bool'"
        self._lock = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLocationState_Response(type):
    """Metaclass of message 'SetLocationState_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pyrobosim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pyrobosim_msgs.srv.SetLocationState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_location_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_location_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_location_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_location_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_location_state__response

            from pyrobosim_msgs.msg import ExecutionResult
            if ExecutionResult.__class__._TYPE_SUPPORT is None:
                ExecutionResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLocationState_Response(metaclass=Metaclass_SetLocationState_Response):
    """Message class 'SetLocationState_Response'."""

    __slots__ = [
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'result': 'pyrobosim_msgs/ExecutionResult',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['pyrobosim_msgs', 'msg'], 'ExecutionResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from pyrobosim_msgs.msg import ExecutionResult
        self.result = kwargs.get('result', ExecutionResult())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from pyrobosim_msgs.msg import ExecutionResult
            assert \
                isinstance(value, ExecutionResult), \
                "The 'result' field must be a sub message of type 'ExecutionResult'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLocationState_Event(type):
    """Metaclass of message 'SetLocationState_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pyrobosim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pyrobosim_msgs.srv.SetLocationState_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_location_state__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_location_state__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_location_state__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_location_state__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_location_state__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLocationState_Event(metaclass=Metaclass_SetLocationState_Event):
    """Message class 'SetLocationState_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<pyrobosim_msgs/SetLocationState_Request, 1>',
        'response': 'sequence<pyrobosim_msgs/SetLocationState_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['pyrobosim_msgs', 'srv'], 'SetLocationState_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['pyrobosim_msgs', 'srv'], 'SetLocationState_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from pyrobosim_msgs.srv import SetLocationState_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetLocationState_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetLocationState_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from pyrobosim_msgs.srv import SetLocationState_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetLocationState_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetLocationState_Response'"
        self._response = value


class Metaclass_SetLocationState(type):
    """Metaclass of service 'SetLocationState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pyrobosim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pyrobosim_msgs.srv.SetLocationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_location_state

            from pyrobosim_msgs.srv import _set_location_state
            if _set_location_state.Metaclass_SetLocationState_Request._TYPE_SUPPORT is None:
                _set_location_state.Metaclass_SetLocationState_Request.__import_type_support__()
            if _set_location_state.Metaclass_SetLocationState_Response._TYPE_SUPPORT is None:
                _set_location_state.Metaclass_SetLocationState_Response.__import_type_support__()
            if _set_location_state.Metaclass_SetLocationState_Event._TYPE_SUPPORT is None:
                _set_location_state.Metaclass_SetLocationState_Event.__import_type_support__()


class SetLocationState(metaclass=Metaclass_SetLocationState):
    from pyrobosim_msgs.srv._set_location_state import SetLocationState_Request as Request
    from pyrobosim_msgs.srv._set_location_state import SetLocationState_Response as Response
    from pyrobosim_msgs.srv._set_location_state import SetLocationState_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
