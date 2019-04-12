TARGET = tp_data_math_utils
TEMPLATE = lib

DEFINES += TP_DATA_MATH_UTILS_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tp_data_math_utils/Globals.h

#-- Members ----------------------------------------------------------------------------------------
SOURCES += src/members/PolygonsMember.cpp
HEADERS += inc/tp_data_math_utils/members/PolygonsMember.h

SOURCES += src/members/FloatsMember.cpp
HEADERS += inc/tp_data_math_utils/members/FloatsMember.h

SOURCES += src/members/PointsMember.cpp
HEADERS += inc/tp_data_math_utils/members/PointsMember.h

SOURCES += src/members/RegionsMember.cpp
HEADERS += inc/tp_data_math_utils/members/RegionsMember.h

SOURCES += src/members/Mat4Member.cpp
HEADERS += inc/tp_data_math_utils/members/Mat4Member.h

SOURCES += src/members/Vec3Member.cpp
HEADERS += inc/tp_data_math_utils/members/Vec3Member.h
