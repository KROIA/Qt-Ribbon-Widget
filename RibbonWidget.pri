


qtRibbonPath = $$PWD
qtRibbonInc = $$qtRibbonPath/inc
qtRibbonSrc = $$qtRibbonPath/src
qtRibbonUI = $$qtRibbonPath/forms
qtRibbonRes = $$qtRibbonPath



INCLUDEPATH += $$qtRibbonInc \
               $$qtRibbonInc\Buttons

SOURCES +=  $$qtRibbonSrc/ribbon.cpp \
            $$qtRibbonSrc/ribbonButtonGroup.cpp \
            $$qtRibbonSrc/ribbontabcontent.cpp \
            $$qtRibbonSrc/Buttons/InformativeToolButton.cpp \
            $$qtRibbonSrc/Buttons/loadingCircle.cpp \
            $$qtRibbonSrc/Buttons/progressBar.cpp

HEADERS +=  $$qtRibbonInc/ribbon.h \
            $$qtRibbonInc/ribbonButtonGroup.h \
            $$qtRibbonInc/ribbontabcontent.h \
            $$qtRibbonInc/Buttons/InformativeToolButton.h \
            $$qtRibbonInc/Buttons/loadingCircle.h \
            $$qtRibbonInc/Buttons/progressBar.h
			
FORMS += \
    $$qtRibbonUI/ribbonbuttongroup.ui \
    $$qtRibbonUI/ribbontabcontent.ui

# RESOURCES += \
#     $$qtRibbonRes/resource.qrc
