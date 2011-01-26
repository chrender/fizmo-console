
include ../../config.mk

include $(FIZMO_INC_DIR)/fizmo/libfizmo.mk

ifneq ($(ENABLE_TRACING),)
override CFLAGS += -DENABLE_TRACING=
endif

ifneq ($(ENABLE_READCHAR_VIA_TERMIOS),)
override CFLAGS += -DENABLE_READCHAR_VIA_TERMIOS=
endif

LIB_DIRS = $(LIBFIZMO_LIB_DIRS)
LIBS = $(LIBFIZMO_LIBS)

fizmo-console: fizmo-console.o
	$(CC) $(CFLAGS) $(LIB_DIRS) fizmo-console.o -o fizmo-console $(LIBS)
	#strip fizmo

fizmo-console.o: fizmo-console.c
	$(CC) $(CFLAGS) -I$(FIZMO_INC_DIR) -c fizmo-console.c

clean:
	rm -f *.o

distclean: clean
	rm -f fizmo-console

