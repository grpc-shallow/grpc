#***************************************************************************
# Project        ___       __ _ _ __ ___  ___ 
#               / __|____ / _` | '__/ _ \/ __|
#              | (_|_____| (_| | | |  __/\__ \
#               \___|     \__,_|_|  \___||___/
#
prefix=@CMAKE_INSTALL_PREFIX@
exec_prefix=${prefix}/@CMAKE_INSTALL_BINDIR@
libdir=${prefix}/@CMAKE_INSTALL_LIBDIR@
includedir=${prefix}/@CMAKE_INSTALL_INCLUDEDIR@

Name: c-ares
URL: https://c-ares.haxx.se/
Description: asynchronous DNS lookup library
Version: @CARES_VERSION@
Requires: 
Requires.private: 
Cflags: -I${includedir} @CPPFLAG_CARES_STATICLIB@
Libs: -L${libdir} -lcares
Libs.private: @CARES_PRIVATE_LIBS@
