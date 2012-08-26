
AM_CFLAGS = $(libfizmo_CFLAGS)
AM_CPPFLAGS =
LDADD = $(libfizmo_LIBS)

bin_PROGRAMS = fizmo-console
fizmo_console_SOURCES = fizmo-console.c

if ENABLE_TRACING
AM_CFLAGS += -DENABLE_TRACING=
endif

if ENABLE_READCHAR_VIA_TERMIOS
AM_CFLAGS += -DENABLE_READCHAR_VIA_TERMIOS=
endif

