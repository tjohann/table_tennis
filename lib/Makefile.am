# Makefile.am

noinst_LIBRARIES = libgame.a

libgame_a_SOURCES =  \
	libservice.h	\
	helper.c 	\
	gettext.h

libgame_a_CFLAGS = $(AM_CFLAGS)	\
	$(LIBCONFIG_CFLAGS)     	\
	$(LIBSDL_CFLAGS)     		\
	-DLOCALDIR=\"$(localedir)\"

libgame_a_LIBADD = $(LIBINTL)
