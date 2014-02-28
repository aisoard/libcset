AC_INIT([Complementary Set Library],[0.0],[alexandre.isoard@gmail.com],[libcset],[https://github.com/surfmaths/libcset])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([silent-rules foreign -Wall])
AM_SILENT_RULES([yes])

AC_PROG_CXX([clang++ g++ c++])
AM_PROG_AR
LT_INIT

AX_CXX_COMPILE_STDCXX_11([noext],[mandatory])
AX_CXXFLAGS_WARN_ALL

DX_INIT_DOXYGEN([$PACKAGE_NAME],[doc/doxygen.cfg],[doc])
DX_DOXYGEN_FEATURE([ON])
DX_DOT_FEATURE([ON])
DX_HTML_FEATURE([ON])
DX_PDF_FEATURE([ON])

AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_FILES([Makefile include/Makefile src/Makefile tests/Makefile doc/Makefile])
AC_CONFIG_FILES([doc/doxygen.cfg])

AC_OUTPUT
