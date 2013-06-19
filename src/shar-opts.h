/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (shar-opts.h)
 *
 *  It has been AutoGen-ed  April 12, 2013 at 05:25:28 PM by AutoGen 5.17.4pre4
 *  From the definitions    shar-opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 38:0:13 templates.
 *
 *  AutoOpts is a copyrighted work.  This header file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the shar author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The shar program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 1994-2013 Free Software Foundation, Inc., all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 3 or later <http://gnu.org/licenses/gpl.html>
 *
 *  shar is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  shar is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the shar program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_SHAR_OPTS_H_GUARD
#define AUTOOPTS_SHAR_OPTS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>
#include <stdarg.h>

/**
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 155648
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/**
 *  Enumeration of each option type for shar
 */
typedef enum {
    INDEX_OPT_INTERMIX_TYPE          =  1,
    INDEX_OPT_COMPACTOR              =  2,
    INDEX_OPT_LEVEL_OF_COMPRESSION   =  3,
    INDEX_OPT_BZIP2                  =  4,
    INDEX_OPT_GZIP                   =  5,
    INDEX_OPT_COMPRESS               =  6,
    INDEX_OPT_LEVEL_FOR_GZIP         =  7,
    INDEX_OPT_BITS_PER_CODE          =  8,
    INDEX_OPT_MIXED_UUENCODE         = 10,
    INDEX_OPT_UUENCODE               = 11,
    INDEX_OPT_TEXT_FILES             = 12,
    INDEX_OPT_OUTPUT_PREFIX          = 14,
    INDEX_OPT_WHOLE_SIZE_LIMIT       = 15,
    INDEX_OPT_SPLIT_SIZE_LIMIT       = 16,
    INDEX_OPT_INPUT_FILE_LIST        = 17,
    INDEX_OPT_STDIN_FILE_LIST        = 18,
    INDEX_OPT_ARCHIVE_NAME           = 20,
    INDEX_OPT_SUBMITTER              = 21,
    INDEX_OPT_NET_HEADERS            = 22,
    INDEX_OPT_CUT_MARK               = 23,
    INDEX_OPT_TRANSLATE              = 24,
    INDEX_OPT_NO_CHARACTER_COUNT     = 26,
    INDEX_OPT_NO_MD5_DIGEST          = 27,
    INDEX_OPT_FORCE_PREFIX           = 28,
    INDEX_OPT_HERE_DELIMITER         = 29,
    INDEX_OPT_VANILLA_OPERATION      = 31,
    INDEX_OPT_NO_PIPING              = 32,
    INDEX_OPT_NO_CHECK_EXISTING      = 33,
    INDEX_OPT_QUERY_USER             = 34,
    INDEX_OPT_NO_TIMESTAMP           = 35,
    INDEX_OPT_QUIET_UNSHAR           = 36,
    INDEX_OPT_BASENAME               = 37,
    INDEX_OPT_NO_I18N                = 39,
    INDEX_OPT_PRINT_TEXT_DOMAIN_DIR  = 40,
    INDEX_OPT_QUIET                  = 42,
    INDEX_OPT_SILENT                 = 43,
    INDEX_OPT_VERSION                = 44,
    INDEX_OPT_HELP                   = 45,
    INDEX_OPT_MORE_HELP              = 46,
    INDEX_OPT_SAVE_OPTS              = 47,
    INDEX_OPT_LOAD_OPTS              = 48
} teOptIndex;
/** count of all options for shar */
#define OPTION_CT    49
/** shar version */
#define SHAR_VERSION       "4.13.5"
/** Full shar version text */
#define SHAR_FULL_VERSION  "shar (GNU sharutils) 4.13.5"

/**
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT(COMPRESSION)
 */
#define         DESC(n) (sharOptions.pOptDesc[INDEX_OPT_## n])
/** 'true' if an option has been specified in any way */
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
/** The string argument to an option. The argument type must be "string". */
#define      OPT_ARG(n) (DESC(n).optArg.argString)
/** Mask the option state revealing how an option was specified.
 *  It will be one and only one of \a OPTST_SET, \a OPTST_PRESET,
 * \a OPTST_DEFINED, \a OPTST_RESET or zero.
 */
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
/** Count of option's occurrances *on the command line*. */
#define    COUNT_OPT(n) (DESC(n).optOccCt)
/** mask of \a OPTST_SET and \a OPTST_DEFINED. */
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
/** 'true' if \a HAVE_OPT would yield 'false'. */
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
/** 'true' if OPTST_DISABLED bit not set. */
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
/** number of stacked option arguments.
 *  Valid only for stacked option arguments. */
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
/** stacked argument vector.
 *  Valid only for stacked option arguments. */
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
/** Reset an option. */
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ((DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Enumeration of shar exit codes
 */
typedef enum {
    SHAR_EXIT_SUCCESS               = 0,
    SHAR_EXIT_OPTION_ERROR          = 1,
    SHAR_EXIT_FILE_NOT_FOUND        = 2,
    SHAR_EXIT_CANNOT_OPENDIR        = 3,
    SHAR_EXIT_FAILED                = 4,
    SHAR_EXIT_BUG                   = 63,
    SHAR_EXIT_USAGE_ERROR           = 64,
    SHAR_EXIT_NO_CONFIG_INPUT       = 66,
    SHAR_EXIT_LIBOPTS_FAILURE       = 70
} shar_exit_code_t;
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Interface defines for specific options.
 * @{
 */
#define VALUE_OPT_INTERMIX_TYPE  'p'
#define VALUE_OPT_COMPACTOR      'C'

#define SET_OPT_COMPACTOR(a)   STMTS( \
        DESC(COMPACTOR).optActualIndex = 2; \
        DESC(COMPACTOR).optActualValue = VALUE_OPT_COMPACTOR; \
        DESC(COMPACTOR).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(COMPACTOR).fOptState |= OPTST_SET; \
        DESC(COMPACTOR).optArg.argString = (a); \
        (*(DESC(COMPACTOR).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 2); )
#define VALUE_OPT_LEVEL_OF_COMPRESSION 'g'

#define OPT_VALUE_LEVEL_OF_COMPRESSION (DESC(LEVEL_OF_COMPRESSION).optArg.argInt)
#define VALUE_OPT_BZIP2          'j'
#define VALUE_OPT_GZIP           'z'
#define VALUE_OPT_COMPRESS       'Z'
#define VALUE_OPT_LEVEL_FOR_GZIP 7
#define VALUE_OPT_BITS_PER_CODE  'b'
#define VALUE_OPT_MIXED_UUENCODE 'M'

/** Define the option value mixed-uuencode is equivalenced to */
#define WHICH_OPT_MIXED_UUENCODE (DESC(MIXED_UUENCODE).optActualValue)
/** Define the index of the option mixed-uuencode is equivalenced to */
#define WHICH_IDX_MIXED_UUENCODE (DESC(MIXED_UUENCODE).optActualIndex)
#define SET_OPT_MIXED_UUENCODE   STMTS( \
        DESC(MIXED_UUENCODE).optActualIndex = 10; \
        DESC(MIXED_UUENCODE).optActualValue = VALUE_OPT_MIXED_UUENCODE; \
        DESC(MIXED_UUENCODE).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(MIXED_UUENCODE).fOptState |= OPTST_SET; \
        (*(DESC(MIXED_UUENCODE).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 10); )
#define VALUE_OPT_UUENCODE       'B'
#define VALUE_OPT_TEXT_FILES     'T'

#define SET_OPT_TEXT_FILES   STMTS( \
        DESC(MIXED_UUENCODE).optActualIndex = 12; \
        DESC(MIXED_UUENCODE).optActualValue = VALUE_OPT_TEXT_FILES; \
        DESC(MIXED_UUENCODE).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(MIXED_UUENCODE).fOptState |= OPTST_SET | OPTST_EQUIVALENCE; \
        (*(DESC(TEXT_FILES).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + INDEX_OPT_MIXED_UUENCODE); )
#define VALUE_OPT_OUTPUT_PREFIX  'o'

#define SET_OPT_OUTPUT_PREFIX(a)   STMTS( \
        DESC(OUTPUT_PREFIX).optActualIndex = 14; \
        DESC(OUTPUT_PREFIX).optActualValue = VALUE_OPT_OUTPUT_PREFIX; \
        DESC(OUTPUT_PREFIX).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(OUTPUT_PREFIX).fOptState |= OPTST_SET; \
        DESC(OUTPUT_PREFIX).optArg.argString = (a); \
        (*(DESC(OUTPUT_PREFIX).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 14); )
#define VALUE_OPT_WHOLE_SIZE_LIMIT 'l'

#define OPT_VALUE_WHOLE_SIZE_LIMIT (DESC(WHOLE_SIZE_LIMIT).optArg.argInt)
/** Define the option value whole-size-limit is equivalenced to */
#define WHICH_OPT_WHOLE_SIZE_LIMIT (DESC(WHOLE_SIZE_LIMIT).optActualValue)
/** Define the index of the option whole-size-limit is equivalenced to */
#define WHICH_IDX_WHOLE_SIZE_LIMIT (DESC(WHOLE_SIZE_LIMIT).optActualIndex)
#define VALUE_OPT_SPLIT_SIZE_LIMIT 'L'

#define OPT_VALUE_SPLIT_SIZE_LIMIT (DESC(WHOLE_SIZE_LIMIT).optArg.argInt)
#define VALUE_OPT_INPUT_FILE_LIST 'I'

#define SET_OPT_INPUT_FILE_LIST(a)   STMTS( \
        DESC(INPUT_FILE_LIST).optActualIndex = 17; \
        DESC(INPUT_FILE_LIST).optActualValue = VALUE_OPT_INPUT_FILE_LIST; \
        DESC(INPUT_FILE_LIST).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(INPUT_FILE_LIST).fOptState |= OPTST_SET; \
        DESC(INPUT_FILE_LIST).optArg.argString = (a); \
        (*(DESC(INPUT_FILE_LIST).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 17); )
#define VALUE_OPT_STDIN_FILE_LIST 'S'
#define VALUE_OPT_ARCHIVE_NAME   'n'
#define VALUE_OPT_SUBMITTER      's'

#define SET_OPT_SUBMITTER(a)   STMTS( \
        DESC(SUBMITTER).optActualIndex = 21; \
        DESC(SUBMITTER).optActualValue = VALUE_OPT_SUBMITTER; \
        DESC(SUBMITTER).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SUBMITTER).fOptState |= OPTST_SET; \
        DESC(SUBMITTER).optArg.argString = (a); \
        (*(DESC(SUBMITTER).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 21); )
#define VALUE_OPT_NET_HEADERS    'a'
#define VALUE_OPT_CUT_MARK       'c'
#define VALUE_OPT_TRANSLATE      't'
#define VALUE_OPT_NO_CHARACTER_COUNT 26

#define SET_OPT_NO_CHARACTER_COUNT   STMTS( \
        DESC(NO_CHARACTER_COUNT).optActualIndex = 26; \
        DESC(NO_CHARACTER_COUNT).optActualValue = VALUE_OPT_NO_CHARACTER_COUNT; \
        DESC(NO_CHARACTER_COUNT).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(NO_CHARACTER_COUNT).fOptState |= OPTST_SET; \
        (*(DESC(NO_CHARACTER_COUNT).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 26); )
#define VALUE_OPT_NO_MD5_DIGEST  'D'

#define SET_OPT_NO_MD5_DIGEST   STMTS( \
        DESC(NO_MD5_DIGEST).optActualIndex = 27; \
        DESC(NO_MD5_DIGEST).optActualValue = VALUE_OPT_NO_MD5_DIGEST; \
        DESC(NO_MD5_DIGEST).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(NO_MD5_DIGEST).fOptState |= OPTST_SET; \
        (*(DESC(NO_MD5_DIGEST).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 27); )
#define VALUE_OPT_FORCE_PREFIX   'F'

#define SET_OPT_FORCE_PREFIX   STMTS( \
        DESC(FORCE_PREFIX).optActualIndex = 28; \
        DESC(FORCE_PREFIX).optActualValue = VALUE_OPT_FORCE_PREFIX; \
        DESC(FORCE_PREFIX).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(FORCE_PREFIX).fOptState |= OPTST_SET; \
        (*(DESC(FORCE_PREFIX).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 28); )
#define VALUE_OPT_HERE_DELIMITER 'd'
#define VALUE_OPT_VANILLA_OPERATION 'V'
#define VALUE_OPT_NO_PIPING      'P'

#define SET_OPT_NO_PIPING   STMTS( \
        DESC(NO_PIPING).optActualIndex = 32; \
        DESC(NO_PIPING).optActualValue = VALUE_OPT_NO_PIPING; \
        DESC(NO_PIPING).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(NO_PIPING).fOptState |= OPTST_SET; \
        (*(DESC(NO_PIPING).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 32); )
#define VALUE_OPT_NO_CHECK_EXISTING 'x'
#define VALUE_OPT_QUERY_USER     'X'
#define VALUE_OPT_NO_TIMESTAMP   'm'

#define SET_OPT_NO_TIMESTAMP   STMTS( \
        DESC(NO_TIMESTAMP).optActualIndex = 35; \
        DESC(NO_TIMESTAMP).optActualValue = VALUE_OPT_NO_TIMESTAMP; \
        DESC(NO_TIMESTAMP).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(NO_TIMESTAMP).fOptState |= OPTST_SET; \
        (*(DESC(NO_TIMESTAMP).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 35); )
#define VALUE_OPT_QUIET_UNSHAR   'Q'
#define VALUE_OPT_BASENAME       'f'
#define VALUE_OPT_NO_I18N        135

#define SET_OPT_NO_I18N   STMTS( \
        DESC(NO_I18N).optActualIndex = 39; \
        DESC(NO_I18N).optActualValue = VALUE_OPT_NO_I18N; \
        DESC(NO_I18N).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(NO_I18N).fOptState |= OPTST_SET; \
        (*(DESC(NO_I18N).pOptProc))(&sharOptions, \
                sharOptions.pOptDesc + 39); )
#define VALUE_OPT_PRINT_TEXT_DOMAIN_DIR 136
#define VALUE_OPT_QUIET          'q'
#define VALUE_OPT_SILENT         139
/** option flag (value) for " (get "val-name") " option */
#define VALUE_OPT_HELP          'h'
/** option flag (value) for " (get "val-name") " option */
#define VALUE_OPT_MORE_HELP     '!'
/** option flag (value) for " (get "val-name") " option */
#define VALUE_OPT_VERSION       'v'
/** option flag (value) for " (get "val-name") " option */
#define VALUE_OPT_SAVE_OPTS     'R'
/** option flag (value) for " (get "val-name") " option */
#define VALUE_OPT_LOAD_OPTS     'r'
#define SET_OPT_SAVE_OPTS(a)   STMTS( \
        DESC(SAVE_OPTS).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SAVE_OPTS).fOptState |= OPTST_SET; \
        DESC(SAVE_OPTS).optArg.argString = (char const*)(a))
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS(sharOptions.fOptSet &= ~OPTPROC_ERRSTOP)
#define ERRSTOP_OPTERR  STMTS(sharOptions.fOptSet |= OPTPROC_ERRSTOP)
#define RESTART_OPT(n)  STMTS( \
                sharOptions.curOptIdx = (n); \
                sharOptions.pzCurOpt  = NULL)
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*sharOptions.pUsageProc)(&sharOptions, c)
/* extracted from opthead.tlib near line 538 */

#ifdef  __cplusplus
extern "C" {
#endif
/*
 *  global exported definitions
 */
#include "local.h"
char const * const program_name;

extern bool initialization_done;
extern int optidx;

extern void vusage_message(char const * fmt, va_list ap);
extern void usage_message(char const * fmt, ...);


/* * * * * *
 *
 *  Declare the shar option descriptor.
 */
extern tOptions sharOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
#   ifndef HAVE_GETTEXT
      extern char * gettext(char const *);
#   else
#     include <libintl.h>
#   endif

static inline char* aoGetsText(char const* pz) {
    if (pz == NULL) return NULL;
    return (char*)gettext(pz);
}
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(sharOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(sharOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(sharOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(sharOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

extern void vdie( int exit_code, char const * fmt, va_list);
extern void die(  int exit_code, char const * fmt, ...);
extern void fserr(int exit_code, char const * op, char const * fname);

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_SHAR_OPTS_H_GUARD */
/* shar-opts.h ends here */
