#
# Makefile.am
#

if ENABLE_DEBUG_INFO
AM_CFLAGS = ${my_CFLAGS} \
	${my_DEBUG_CFLAGS}
else
AM_CFLAGS = ${my_CFLAGS}
endif
AM_LDFLAGS = -Wl,--gc-sections -Wl,--as-needed

bin_PROGRAMS = table_tennis

table_tennis_SOURCES =        	\
	main.c    	        \
	gettext.h

table_tennis_CFLAGS = $(AM_CFLAGS)	\
	$(LIBCONFIG_CFLAGS)     	\
	$(LIBSDL_CFLAGS)     		\
	-DLOCALEDIR=\"$(localedir)\" -I$(srcdir)/../lib

table_tennis_LDFLAGS = $(AM_LDFLAGS)

table_tennis_LDADD =  		\
	$(LIBCONFIG_LIBS)   	\
	$(LIBSDL_LIBS)      	\
	$(LIBINTL) ../lib/libgame.a
