INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_COSTAS costas)

FIND_PATH(
    COSTAS_INCLUDE_DIRS
    NAMES costas/api.h
    HINTS $ENV{COSTAS_DIR}/include
        ${PC_COSTAS_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    COSTAS_LIBRARIES
    NAMES gnuradio-costas
    HINTS $ENV{COSTAS_DIR}/lib
        ${PC_COSTAS_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(COSTAS DEFAULT_MSG COSTAS_LIBRARIES COSTAS_INCLUDE_DIRS)
MARK_AS_ADVANCED(COSTAS_LIBRARIES COSTAS_INCLUDE_DIRS)

