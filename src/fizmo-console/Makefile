
include ../../config.mk

include $(FIZMO_INC_DIR)/fizmo/libfizmo.mk

ifneq ($(ENABLE_TRACING),)
override CFLAGS += -DENABLE_TRACING=
endif

LIB_DIRS = $(LIBFIZMO_LIB_DIRS)
LIBS = $(LIBFIZMO_LIBS)

fizmo-console: fizmo-console.o
	$(CC) $(CFLAGS) $(LIB_DIRS) $(LIBS) fizmo-console.o -o fizmo-console
	#strip fizmo

fizmo-console.o: fizmo-console.c
	$(CC) $(CFLAGS) -I$(FIZMO_INC_DIR) -c fizmo-console.c

clean:
	rm -f *.o

distclean: clean
	rm fizmo-console

