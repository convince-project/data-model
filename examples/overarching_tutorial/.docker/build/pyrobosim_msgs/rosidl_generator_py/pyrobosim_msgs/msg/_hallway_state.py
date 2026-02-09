# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pyrobosim_msgs:msg/HallwayState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HallwayState(type):
    """Metaclass of message 'HallwayState'."""

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
                'pyrobosim_msgs.msg.HallwayState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hallway_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hallway_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hallway_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hallway_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hallway_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HallwayState(metaclass=Metaclass_HallwayState):
    """Message class 'HallwayState'."""

    __slots__ = [
        '_name',
        '_room_start',
        '_room_end',
        '_is_open',
        '_is_locked',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'room_start': 'string',
        'room_end': 'string',
        'is_open': 'boolean',
        'is_locked': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.name = kwargs.get('name', str())
        self.room_start = kwargs.get('room_start', str())
        self.room_end = kwargs.get('room_end', str())
        self.is_open = kwargs.get('is_open', bool())
        self.is_locked = kwargs.get('is_locked', bool())

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
        if self.name != other.name:
            return False
        if self.room_start != other.room_start:
            return False
        if self.room_end != other.room_end:
            return False
        if self.is_open != other.is_open:
            return False
        if self.is_locked != other.is_locked:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def room_start(self):
        """Message field 'room_start'."""
        return self._room_start

    @room_start.setter
    def room_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'room_start' field must be of type 'str'"
        self._room_start = value

    @builtins.property
    def room_end(self):
        """Message field 'room_end'."""
        return self._room_end

    @room_end.setter
    def room_end(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'room_end' field must be of type 'str'"
        self._room_end = value

    @builtins.property
    def is_open(self):
        """Message field 'is_open'."""
        return self._is_open

    @is_open.setter
    def is_open(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_open' field must be of type 'bool'"
        self._is_open = value

    @builtins.property
    def is_locked(self):
        """Message field 'is_locked'."""
        return self._is_locked

    @is_locked.setter
    def is_locked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_locked' field must be of type 'bool'"
        self._is_locked = value
