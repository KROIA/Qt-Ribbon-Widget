


qtRibbonPath = $$PWD
qtRibbonInc = $$qtRibbonPath/inc
qtRibbonSrc = $$qtRibbonPath/src
qtRibbonUI = $$qtRibbonPath/forms
qtRibbonRes = $$qtRibbonPath
message("PWD="$$PWD)

INCLUDEPATH += $$qtRibbonInc

SOURCES +=  $$qtRibbonSrc/ribbon.cpp \
            $$qtRibbonSrc/ribbonButtonGroup.cpp \
            $$qtRibbonSrc/ribbontabcontent.cpp \

HEADERS +=  $$qtRibbonInc/ribbon.h \
            $$qtRibbonInc/ribbonButtonGroup.h \
            $$qtRibbonInc/ribbontabcontent.h \
			
FORMS += \
    $$qtRibbonUI/ribbonbuttongroup.ui \
    $$qtRibbonUI/ribbontabcontent.ui

RESOURCES += \
    $$qtRibbonRes/resource.qrc
