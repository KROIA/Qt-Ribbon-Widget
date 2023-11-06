#pragma once
// Version 00.00.01
#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(RIBBONWIDGET_LIB)
#  define RIBBONWIDGET_EXPORT Q_DECL_EXPORT
# else
#  define RIBBONWIDGET_EXPORT Q_DECL_IMPORT
# endif
#else
# define RIBBONWIDGET_EXPORT
#endif
