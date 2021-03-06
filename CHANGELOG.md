


   **Version 0.7.14 — Febuary 23, 2019**

 - Fixed underscores in markdown files.

---


   **Version 0.7.13 — September 3, 2017**

 - Added “-ai” or “--autosave-inputfile”, resp. and “-ao” or “--autosave-outputfile”, resp. commandline parameters. With both set, this allows processing of a single command from stdin for each invocation of fizmo-console.
 - Adapted to updated screen interface, allowing screen dimensions > 255.
 - Renamed copyright files to “license” for github license detection compatibility, see [Github's “Licensing a repository”](https://help.github.com/articles/licensing-a-repository/) for further reference.
 - Added missing contributor phrasing to BSD-3 clause. The resulting license now exactly matches the wording used on Github and so also makes the license detection work.
 - Updated man page.

---


   **Version 0.7.12 — April 9, 2017**

 - Updated man page.

---


   **Version 0.7.11 — October 9, 2016**

 - Adapted to new, split-library builds.

---


   **Version 0.7.10 — August 31, 2016**

 - Use tiny-xml-doc-tools for documentation.

---


   **Version 0.7.9 — July 28, 2016**

 - Minor Manpage, copyright and version 0.7.9 update.

---


   **Version 0.7.8 — October 9, 2015**

 - Minor autoconf-related changes for fizmo-dist-0.7.10-compatibility.

---


   **Version 0.7.7 — March 19, 2014**

 - Added missing license/copyright information.

---


   **Version 0.7.6 — June 5, 2013**

 - Removed non-POSIX-flag ECHOPRT from tcsetattr for readchar opcode.
 - Adapted to libfizmo's new “fizmo\_register\_screen\_interface” and “fizmo\_start” functions.

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
 - Adapted Makefiles and configuration to use standard GNU Makefile variables instead of INSTALL\_PATH and FIZMO\_BIN\_DIR.
 - Respect LD\_FLAGS for linking.

---


   **Version 0.7.0 — September 18, 2011**

 - The “simple-c” interface has been renamed to “fizmo-console” and is now a stand-alone frontend.
 - Re-implemented the entire build process. Libraries may now be compiled and installed on their own, pkg-config is used whereever possible to ease compilation and installation.

---


   **Version 0.6.3 — April 26, 2009**

 - Added license information to every file.

---


   **Version 0.6.1 — March 30, 2009**

 - Added FIZMO\_BIN\_DIR variable to Makefile.

---


   **Version 0.5.3 — March 11, 2009**

 - Re-wrote Makefile system. Releveant module defaults are now kept in separate .mk-files.
 - Added “-Wextra” flag to CFLAGS and cleaned up new warnings caused by the new flag.

---


   **Version 0.4.1 — November 14, 2007**

 - Separated code in core, interface, c and cpp interfaces.


