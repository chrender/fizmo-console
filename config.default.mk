
CC = gcc
AR = ar
override CFLAGS += -Wall -Wextra

INSTALL_PREFIX = $(DESTDIR)/usr/local

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

