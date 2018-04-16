INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_ROI roi)

FIND_PATH(
    ROI_INCLUDE_DIRS
    NAMES roi/api.h
    HINTS $ENV{ROI_DIR}/include
        ${PC_ROI_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    ROI_LIBRARIES
    NAMES gnuradio-roi
    HINTS $ENV{ROI_DIR}/lib
        ${PC_ROI_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(ROI DEFAULT_MSG ROI_LIBRARIES ROI_INCLUDE_DIRS)
MARK_AS_ADVANCED(ROI_LIBRARIES ROI_INCLUDE_DIRS)

