
CC = gcc
AR = ar
CFLAGS = -Wall -Wextra

ifneq ($(DESTDIR),)
INSTALL_PREFIX = $(DESTDIR)
else
INSTALL_PREFIX = /usr/local
endif

# Uncomment to install binaries to $(INSTALL_PREFIX)/$(FIZMO_BIN_DIR).
#FIZMO_BIN_DIR = bin

# -----
# General settings:
ENABLE_OPTIMIZATION = 1
#ENABLE_TRACING = 1
#ENABLE_GDB_SYMBOLS = 1
# -----



# -----
# Settings for fizmo-console
ENABLE_READCHAR_VIA_TERMIOS = 1
# -----

