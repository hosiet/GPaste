## This file is part of GPaste.
##
## Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>

nodist_systemduserunit_DATA =                   \
	%D%/systemd/org.gnome.GPaste.service    \
	%D%/systemd/org.gnome.GPaste.Ui.service \
	$(NULL)

if ENABLE_APPLET
nodist_systemduserunit_DATA +=                      \
	%D%/systemd/org.gnome.GPaste.Applet.service \
	$(NULL)
endif

if ENABLE_UNITY
nodist_systemduserunit_DATA +=                            \
	%D%/systemd/org.gnome.GPaste.AppIndicator.service \
	$(NULL)
endif

SUFFIXES += .service .systemd.in
.systemd.in.service:
	@ $(MKDIR_P) $(@D)
	$(AM_V_GEN) $(SED)                                \
	    -e 's,[@]pkglibexecdir[@],$(pkglibexecdir),g' \
	    <$< >$@

EXTRA_DIST +=                                               \
	$(nodist_systemduserunit_DATA:.service=.systemd.in) \
	$(NULL)

CLEANFILES +=                          \
	$(nodist_systemduserunit_DATA) \
	$(NULL)
