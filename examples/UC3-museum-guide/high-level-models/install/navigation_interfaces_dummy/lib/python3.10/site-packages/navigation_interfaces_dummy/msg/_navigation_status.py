# generated from rosidl_generator_py/resource/_idl.py.em
# with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationStatus(type):
    """Metaclass of message 'NavigationStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAVIGATION_STATUS_IDLE': 0,
        'NAVIGATION_STATUS_PREPARING_BEFORE_MOVE': 1,
        'NAVIGATION_STATUS_MOVING': 2,
        'NAVIGATION_STATUS_WAITING_OBSTACLE': 3,
        'NAVIGATION_STATUS_GOAL_REACHED': 4,
        'NAVIGATION_STATUS_ABORTED': 5,
        'NAVIGATION_STATUS_FAILING': 6,
        'NAVIGATION_STATUS_PAUSED': 7,
        'NAVIGATION_STATUS_THINKING': 8,
        'NAVIGATION_STATUS_ERROR': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('navigation_interfaces_dummy')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navigation_interfaces_dummy.msg.NavigationStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAVIGATION_STATUS_IDLE': cls.__constants['NAVIGATION_STATUS_IDLE'],
            'NAVIGATION_STATUS_PREPARING_BEFORE_MOVE': cls.__constants['NAVIGATION_STATUS_PREPARING_BEFORE_MOVE'],
            'NAVIGATION_STATUS_MOVING': cls.__constants['NAVIGATION_STATUS_MOVING'],
            'NAVIGATION_STATUS_WAITING_OBSTACLE': cls.__constants['NAVIGATION_STATUS_WAITING_OBSTACLE'],
            'NAVIGATION_STATUS_GOAL_REACHED': cls.__constants['NAVIGATION_STATUS_GOAL_REACHED'],
            'NAVIGATION_STATUS_ABORTED': cls.__constants['NAVIGATION_STATUS_ABORTED'],
            'NAVIGATION_STATUS_FAILING': cls.__constants['NAVIGATION_STATUS_FAILING'],
            'NAVIGATION_STATUS_PAUSED': cls.__constants['NAVIGATION_STATUS_PAUSED'],
            'NAVIGATION_STATUS_THINKING': cls.__constants['NAVIGATION_STATUS_THINKING'],
            'NAVIGATION_STATUS_ERROR': cls.__constants['NAVIGATION_STATUS_ERROR'],
        }

    @property
    def NAVIGATION_STATUS_IDLE(self):
        """Message constant 'NAVIGATION_STATUS_IDLE'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_IDLE']

    @property
    def NAVIGATION_STATUS_PREPARING_BEFORE_MOVE(self):
        """Message constant 'NAVIGATION_STATUS_PREPARING_BEFORE_MOVE'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_PREPARING_BEFORE_MOVE']

    @property
    def NAVIGATION_STATUS_MOVING(self):
        """Message constant 'NAVIGATION_STATUS_MOVING'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_MOVING']

    @property
    def NAVIGATION_STATUS_WAITING_OBSTACLE(self):
        """Message constant 'NAVIGATION_STATUS_WAITING_OBSTACLE'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_WAITING_OBSTACLE']

    @property
    def NAVIGATION_STATUS_GOAL_REACHED(self):
        """Message constant 'NAVIGATION_STATUS_GOAL_REACHED'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_GOAL_REACHED']

    @property
    def NAVIGATION_STATUS_ABORTED(self):
        """Message constant 'NAVIGATION_STATUS_ABORTED'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_ABORTED']

    @property
    def NAVIGATION_STATUS_FAILING(self):
        """Message constant 'NAVIGATION_STATUS_FAILING'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_FAILING']

    @property
    def NAVIGATION_STATUS_PAUSED(self):
        """Message constant 'NAVIGATION_STATUS_PAUSED'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_PAUSED']

    @property
    def NAVIGATION_STATUS_THINKING(self):
        """Message constant 'NAVIGATION_STATUS_THINKING'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_THINKING']

    @property
    def NAVIGATION_STATUS_ERROR(self):
        """Message constant 'NAVIGATION_STATUS_ERROR'."""
        return Metaclass_NavigationStatus.__constants['NAVIGATION_STATUS_ERROR']


class NavigationStatus(metaclass=Metaclass_NavigationStatus):
    """
    Message class 'NavigationStatus'.

    Constants:
      NAVIGATION_STATUS_IDLE
      NAVIGATION_STATUS_PREPARING_BEFORE_MOVE
      NAVIGATION_STATUS_MOVING
      NAVIGATION_STATUS_WAITING_OBSTACLE
      NAVIGATION_STATUS_GOAL_REACHED
      NAVIGATION_STATUS_ABORTED
      NAVIGATION_STATUS_FAILING
      NAVIGATION_STATUS_PAUSED
      NAVIGATION_STATUS_THINKING
      NAVIGATION_STATUS_ERROR
    """

    __slots__ = [
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.status = kwargs.get('status', int())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value
