/*
   Handle so called 'shell archives'.

   Copyright (C) 1994-2013
      Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see:  http://www.gnu.org/licenses.
*/

#ifndef SHARUTILS_LOCAL_H
#define SHARUTILS_LOCAL_H 1

#include "system.h"
#include <alloca.h>
#include <ctype.h>
#include <getopt.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#include "base64.h"
#include "dirname.h"
#include "error.h"
#include "gettext.h"
#include "idcache.h"
#include "inttostr.h"
#include "locale.h"
#include "md5.h"
#include "pathmax.h"
#include "quotearg.h"
#include "strftime.h"
#include "unlocked-io.h"
#include "xalloc.h"
#include "xgetcwd.h"
#include "xstrtol.h"

#ifdef SHAR_C
# ifdef BINARY_MODE_POPEN
static char const freadonly_mode[]  = "rb";
static char const fwriteonly_mode[] = "wb";
# else
static char const freadonly_mode[]  = "r";
static char const fwriteonly_mode[] = "w";
# endif
#endif

#endif /* SHARUTILS_LOCAL_H */
