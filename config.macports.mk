
CC = gcc -Wall
CFLAGS = -g -O2

INSTALL_PREFIX = $(HOME)/opt/fizmo

FIZMO_INC_DIR = $(INSTALL_PREFIX)/include
FIZMO_LIB_DIR = $(INSTALL_PREFIX)/lib

# Uncomment to fill your harddisk _very_ fast:
#ENABLE_TRACING = 1

# If you have termios.h available, uncomment to enable read_char without Enter:
#ENABLE_READCHAR_VIA_TERMIOS = 1

