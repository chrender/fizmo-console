
AC_ARG_ENABLE([tracing],
 [AS_HELP_STRING([--enable-tracing],
                 [enable tracelog for debugging])],
 [],
 [enable_tracing=no])

AC_ARG_ENABLE([readchar-via-termios],
 [AS_HELP_STRING([--disable-readchar-via-termios],
                 [Don't use termios for read-char])],
 [],
 [enable_readchar_via_termios=yes])


AC_INIT([fizmo-console], [0.7.4])

AC_CONFIG_AUX_DIR([.])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_PROG_RANLIB

PKG_CHECK_MODULES([libfizmo], [libfizmo >= 0.7.4])

AM_CONDITIONAL([ENABLE_TRACING],
                [test "$enable_tracing" = "yes"])

AM_CONDITIONAL([ENABLE_READCHAR_VIA_TERMIOS],
                [test "$enable_readchar_via_termios" != "no"])

AC_CONFIG_FILES([Makefile src/fizmo-console/Makefile])
AC_OUTPUT

