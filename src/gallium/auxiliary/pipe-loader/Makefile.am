include Makefile.sources
include $(top_srcdir)/src/gallium/Automake.inc

# XXX: check if we need the gallium/winsys include
AM_CFLAGS = \
	-I$(top_srcdir)/src/loader \
	-I$(top_srcdir)/src/gallium/winsys \
	$(GALLIUM_PIPE_LOADER_DEFINES) \
	$(GALLIUM_CFLAGS) \
	$(VISIBILITY_CFLAGS)

noinst_LTLIBRARIES = \
	libpipe_loader_static.la \
	libpipe_loader_dynamic.la

libpipe_loader_static_la_CFLAGS = \
	$(AM_CFLAGS) \
	-DGALLIUM_STATIC_TARGETS=1

libpipe_loader_dynamic_la_CFLAGS = \
	$(AM_CFLAGS) \
	-DPIPE_SEARCH_DIR=\"$(libdir)/gallium-pipe\"

libpipe_loader_static_la_SOURCES = \
	$(COMMON_SOURCES)

libpipe_loader_dynamic_la_SOURCES = \
	$(COMMON_SOURCES)

if HAVE_LIBDRM2
AM_CFLAGS += \
	$(LIBDRM2_CFLAGS)

libpipe_loader_static_la_SOURCES += \
	$(DRM2_SOURCES)

libpipe_loader_dynamic_la_SOURCES += \
	$(DRM2_SOURCES)

endif

libpipe_loader_static_la_LIBADD = \
	$(top_builddir)/src/loader/libloader.la

libpipe_loader_dynamic_la_LIBADD = \
	$(top_builddir)/src/loader/libloader.la

EXTRA_DIST = SConscript
