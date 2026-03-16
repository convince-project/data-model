# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pyrobosim_msgs:msg/ExecutionResult.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecutionResult(type):
    """Metaclass of message 'ExecutionResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': -1,
        'SUCCESS': 0,
        'PRECONDITION_FAILURE': 1,
        'PLANNING_FAILURE': 2,
        'EXECUTION_FAILURE': 3,
        'POSTCONDITION_FAILURE': 4,
        'INVALID_ACTION': 5,
        'CANCELED': 6,
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
                'pyrobosim_msgs.msg.ExecutionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__execution_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__execution_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__execution_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__execution_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__execution_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'PRECONDITION_FAILURE': cls.__constants['PRECONDITION_FAILURE'],
            'PLANNING_FAILURE': cls.__constants['PLANNING_FAILURE'],
            'EXECUTION_FAILURE': cls.__constants['EXECUTION_FAILURE'],
            'POSTCONDITION_FAILURE': cls.__constants['POSTCONDITION_FAILURE'],
            'INVALID_ACTION': cls.__constants['INVALID_ACTION'],
            'CANCELED': cls.__constants['CANCELED'],
            'STATUS__DEFAULT': -1,
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ExecutionResult.__constants['UNKNOWN']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_ExecutionResult.__constants['SUCCESS']

    @property
    def PRECONDITION_FAILURE(self):
        """Message constant 'PRECONDITION_FAILURE'."""
        return Metaclass_ExecutionResult.__constants['PRECONDITION_FAILURE']

    @property
    def PLANNING_FAILURE(self):
        """Message constant 'PLANNING_FAILURE'."""
        return Metaclass_ExecutionResult.__constants['PLANNING_FAILURE']

    @property
    def EXECUTION_FAILURE(self):
        """Message constant 'EXECUTION_FAILURE'."""
        return Metaclass_ExecutionResult.__constants['EXECUTION_FAILURE']

    @property
    def POSTCONDITION_FAILURE(self):
        """Message constant 'POSTCONDITION_FAILURE'."""
        return Metaclass_ExecutionResult.__constants['POSTCONDITION_FAILURE']

    @property
    def INVALID_ACTION(self):
        """Message constant 'INVALID_ACTION'."""
        return Metaclass_ExecutionResult.__constants['INVALID_ACTION']

    @property
    def CANCELED(self):
        """Message constant 'CANCELED'."""
        return Metaclass_ExecutionResult.__constants['CANCELED']

    @property
    def STATUS__DEFAULT(cls):
        """Return default value for message field 'status'."""
        return -1


class ExecutionResult(metaclass=Metaclass_ExecutionResult):
    """
    Message class 'ExecutionResult'.

    Constants:
      UNKNOWN
      SUCCESS
      PRECONDITION_FAILURE
      PLANNING_FAILURE
      EXECUTION_FAILURE
      POSTCONDITION_FAILURE
      INVALID_ACTION
      CANCELED
    """

    __slots__ = [
        '_status',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int32',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.status = kwargs.get(
            'status', ExecutionResult.STATUS__DEFAULT)
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
