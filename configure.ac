
# Makefile.am
#
# This file is part of fizmo.
#
# Copyright (c) 2009-2017 Christoph Ender.
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. Neither the name of the copyright holder nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
# IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
# PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
# CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


AC_ARG_ENABLE([tracing],
 [AS_HELP_STRING([--enable-tracing],
                 [enable tracelog for debugging])],
 [],
 [enable_tracing=no])

AC_ARG_ENABLE([readchar-via-termios],
 [AS_HELP_STRING([--disable-readchar-via-termios],
                 [Do not use termios for read-char])],
 [],
 [enable_readchar_via_termios=yes])

AC_INIT(
 [fizmo-console],
 [0.7.14],
 fizmo@spellbreaker.org,
 fizmo-console)

AC_CONFIG_AUX_DIR([.])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_PROG_RANLIB

PKG_CHECK_MODULES([libfizmo], [libfizmo >= 0.7.15])

AM_CONDITIONAL([ENABLE_TRACING],
                [test "$enable_tracing" = "yes"])

m4_include(config-conds.m4)

AC_CONFIG_FILES([Makefile src/fizmo-console/Makefile])
AC_OUTPUT

