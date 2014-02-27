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

AC_CONFIG_HEADERS([src/config.h])
AC_CONFIG_FILES([Makefile src/Makefile tests/Makefile])

AC_OUTPUT
