# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pyrobosim_msgs:msg/TaskAction.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskAction(type):
    """Metaclass of message 'TaskAction'."""

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
                'pyrobosim_msgs.msg.TaskAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_action

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from pyrobosim_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskAction(metaclass=Metaclass_TaskAction):
    """Message class 'TaskAction'."""

    __slots__ = [
        '_robot',
        '_type',
        '_object',
        '_room',
        '_source_location',
        '_target_location',
        '_cost',
        '_has_pose',
        '_pose',
        '_path',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot': 'string',
        'type': 'string',
        'object': 'string',
        'room': 'string',
        'source_location': 'string',
        'target_location': 'string',
        'cost': 'float',
        'has_pose': 'boolean',
        'pose': 'geometry_msgs/Pose',
        'path': 'pyrobosim_msgs/Path',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['pyrobosim_msgs', 'msg'], 'Path'),  # noqa: E501
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
        self.robot = kwargs.get('robot', str())
        self.type = kwargs.get('type', str())
        self.object = kwargs.get('object', str())
        self.room = kwargs.get('room', str())
        self.source_location = kwargs.get('source_location', str())
        self.target_location = kwargs.get('target_location', str())
        self.cost = kwargs.get('cost', float())
        self.has_pose = kwargs.get('has_pose', bool())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from pyrobosim_msgs.msg import Path
        self.path = kwargs.get('path', Path())

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
        if self.robot != other.robot:
            return False
        if self.type != other.type:
            return False
        if self.object != other.object:
            return False
        if self.room != other.room:
            return False
        if self.source_location != other.source_location:
            return False
        if self.target_location != other.target_location:
            return False
        if self.cost != other.cost:
            return False
        if self.has_pose != other.has_pose:
            return False
        if self.pose != other.pose:
            return False
        if self.path != other.path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot(self):
        """Message field 'robot'."""
        return self._robot

    @robot.setter
    def robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot' field must be of type 'str'"
        self._robot = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object' field must be of type 'str'"
        self._object = value

    @builtins.property
    def room(self):
        """Message field 'room'."""
        return self._room

    @room.setter
    def room(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'room' field must be of type 'str'"
        self._room = value

    @builtins.property
    def source_location(self):
        """Message field 'source_location'."""
        return self._source_location

    @source_location.setter
    def source_location(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'source_location' field must be of type 'str'"
        self._source_location = value

    @builtins.property
    def target_location(self):
        """Message field 'target_location'."""
        return self._target_location

    @target_location.setter
    def target_location(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_location' field must be of type 'str'"
        self._target_location = value

    @builtins.property
    def cost(self):
        """Message field 'cost'."""
        return self._cost

    @cost.setter
    def cost(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cost' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cost' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cost = value

    @builtins.property
    def has_pose(self):
        """Message field 'has_pose'."""
        return self._has_pose

    @has_pose.setter
    def has_pose(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_pose' field must be of type 'bool'"
        self._has_pose = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if self._check_fields:
            from pyrobosim_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value
