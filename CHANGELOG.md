


   **Version 0.7.7 — March 3, 2014**

 - Added missing license/copyright information.

---


   **Version 0.7.6 — June 5, 2013**

 - Removed non-POSIX-flag ECHOPRT from tcsetattr for readchar opcode.
 - Adapted to libfizmo's new “fizmo_register_screen_interface” and “fizmo_start” functions.

---


   **Version 0.7.5 — November 30, 2012**

 - Fixed include statement in “configure.ac”.
 - Updates for manpage, docs, comments.

---


   **Version 0.7.4 — September 17, 2012**

 - Adapted to new autoconf/automake build system.

---


   **Version 0.7.3 — August 1, 2012**

 - Adapted to new fizmo screen-interface.

---


   **Version 0.7.2 — March 9, 2012**

 - Fixed missing $(DESTDIR) variable – should already have been present since version 0.7.1.

---


   **Version 0.7.1 — November 6, 2011**

 - Fixed missing “override” statments for CFLAGS in Makefiles.
 - Fixed $(DESTDIR) evaluation in config.[default|macports].mk.
 - Changed manpage install dir from “man” to “share/man”.
 - Adapted Makefiles and configuration to use standard GNU Makefile variables instead of INSTALL_PATH and FIZMO_BIN_DIR.
 - Respect LD_FLAGS for linking.

---


   **Version 0.7.0 — September 18, 2011**

 - The “simple-c” interface has been renamed to “fizmo-console” and is now a stand-alone frontend.
 - Re-implemented the entire build process. Libraries may now be compiled and installed on their own, pkg-config is used whereever possible to ease compilation and installation.

---


   **Version 0.6.3 — April 26, 2009**

 - Added license information to every file.

---


   **Version 0.6.1 — March 30, 2009**

 - Added FIZMO_BIN_DIR variable to Makefile.

---


   **Version 0.5.3 — March 11, 2009**

 - Re-wrote Makefile system. Releveant module defaults are now kept in separate .mk-files.
 - Added “-Wextra” flag to CFLAGS and cleaned up new warnings caused by the new flag.

---


   **Version 0.4.1 — November 14, 2007**

 - Separated code in core, interface, c and cpp interfaces.


