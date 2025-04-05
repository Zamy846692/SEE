
/* ./.libs/lt-t-bug90.c - temporary wrapper executable for .libs/t-bug90.exe
   Generated by ltmain.sh (GNU libtool) 2.2.4 Debian-2.2.4-0ubuntu4

   The t-bug90 program cannot be directly executed until all the libtool
   libraries that it depends on are installed.

   This wrapper executable should never be moved out of the build directory.
   If it is, it will not operate correctly.

   Currently, it simply execs the wrapper *script* "/bin/sh t-bug90",
   but could eventually absorb all of the scripts functionality and
   exec .libs/t-bug90.exe directly.
*/
#include <stdio.h>
#include <stdlib.h>
#ifdef _MSC_VER
# include <direct.h>
# include <process.h>
# include <io.h>
# define setmode _setmode
#else
# include <unistd.h>
# include <stdint.h>
# ifdef __CYGWIN__
#  include <io.h>
# endif
#endif
#include <malloc.h>
#include <stdarg.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>

#if defined(PATH_MAX)
# define LT_PATHMAX PATH_MAX
#elif defined(MAXPATHLEN)
# define LT_PATHMAX MAXPATHLEN
#else
# define LT_PATHMAX 1024
#endif

#ifndef S_IXOTH
# define S_IXOTH 0
#endif
#ifndef S_IXGRP
# define S_IXGRP 0
#endif

#ifdef _MSC_VER
# define S_IXUSR _S_IEXEC
# define stat _stat
# ifndef _INTPTR_T_DEFINED
#  define intptr_t int
# endif
#endif

#ifndef DIR_SEPARATOR
# define DIR_SEPARATOR '/'
# define PATH_SEPARATOR ':'
#endif

#if defined (_WIN32) || defined (__MSDOS__) || defined (__DJGPP__) || \
  defined (__OS2__)
# define HAVE_DOS_BASED_FILE_SYSTEM
# define FOPEN_WB "wb"
# ifndef DIR_SEPARATOR_2
#  define DIR_SEPARATOR_2 '\\'
# endif
# ifndef PATH_SEPARATOR_2
#  define PATH_SEPARATOR_2 ';'
# endif
#endif

#ifndef DIR_SEPARATOR_2
# define IS_DIR_SEPARATOR(ch) ((ch) == DIR_SEPARATOR)
#else /* DIR_SEPARATOR_2 */
# define IS_DIR_SEPARATOR(ch) \
	(((ch) == DIR_SEPARATOR) || ((ch) == DIR_SEPARATOR_2))
#endif /* DIR_SEPARATOR_2 */

#ifndef PATH_SEPARATOR_2
# define IS_PATH_SEPARATOR(ch) ((ch) == PATH_SEPARATOR)
#else /* PATH_SEPARATOR_2 */
# define IS_PATH_SEPARATOR(ch) ((ch) == PATH_SEPARATOR_2)
#endif /* PATH_SEPARATOR_2 */

#ifdef __CYGWIN__
# define FOPEN_WB "wb"
#endif

#ifndef FOPEN_WB
# define FOPEN_WB "w"
#endif
#ifndef _O_BINARY
# define _O_BINARY 0
#endif

#define XMALLOC(type, num)      ((type *) xmalloc ((num) * sizeof(type)))
#define XFREE(stale) do { \
  if (stale) { free ((void *) stale); stale = 0; } \
} while (0)

#undef LTWRAPPER_DEBUGPRINTF
#if defined DEBUGWRAPPER
# define LTWRAPPER_DEBUGPRINTF(args) ltwrapper_debugprintf args
static void
ltwrapper_debugprintf (const char *fmt, ...)
{
    va_list args;
    va_start (args, fmt);
    (void) vfprintf (stderr, fmt, args);
    va_end (args);
}
#else
# define LTWRAPPER_DEBUGPRINTF(args)
#endif

const char *program_name = NULL;

void *xmalloc (size_t num);
char *xstrdup (const char *string);
const char *base_name (const char *name);
char *find_executable (const char *wrapper);
char *chase_symlinks (const char *pathspec);
int make_executable (const char *path);
int check_executable (const char *path);
char *strendzap (char *str, const char *pat);
void lt_fatal (const char *message, ...);

static const char *script_text =
  "#! /bin/sh\n"
  "\n"
  "# t-bug90 - temporary wrapper script for .libs/t-bug90.exe\n"
  "# Generated by ltmain.sh (GNU libtool) 2.2.4 Debian-2.2.4-0ubuntu4\n"
  "#\n"
  "# The t-bug90 program cannot be directly executed until all the libtool\n"
  "# libraries that it depends on are installed.\n"
  "#\n"
  "# This wrapper script should never be moved out of the build directory.\n"
  "# If it is, it will not operate correctly.\n"
  "\n"
  "# Sed substitution that helps us do robust quoting.  It backslashifies\n"
  "# metacharacters that are still active within double-quoted strings.\n"
  "Xsed='/usr/bin/sed -e 1s/^X//'\n"
  "sed_quote_subst='s/\\([`\"$\\\\]\\)/\\\\\\1/g'\n"
  "\n"
  "# Be Bourne compatible\n"
  "if test -n \"${ZSH_VERSION+set}\" && (emulate sh) >/dev/null 2>&1; then\n"
  "  emulate sh\n"
  "  NULLCMD=:\n"
  "  # Zsh 3.x and 4.x performs word splitting on ${1+\"$@\"}, which\n"
  "  # is contrary to our usage.  Disable this feature.\n"
  "  alias -g '${1+\"$@\"}'='\"$@\"'\n"
  "  setopt NO_GLOB_SUBST\n"
  "else\n"
  "  case `(set -o) 2>/dev/null` in *posix*) set -o posix;; esac\n"
  "fi\n"
  "BIN_SH=xpg4; export BIN_SH # for Tru64\n"
  "DUALCASE=1; export DUALCASE # for MKS sh\n"
  "\n"
  "# The HP-UX ksh and POSIX shell print the target directory to stdout\n"
  "# if CDPATH is set.\n"
  "(unset CDPATH) >/dev/null 2>&1 && unset CDPATH\n"
  "\n"
  "relink_command=\"\"\n"
  "\n"
  "# This environment variable determines our operation mode.\n"
  "if test \"$libtool_install_magic\" = \"%%%MAGIC variable%%%\"; then\n"
  "  # install mode needs the following variables:\n"
  "  generated_by_libtool_version='2.2.4'\n"
  "  notinst_deplibs=''\n"
  "else\n"
  "  # When we are sourced in execute mode, $file and $ECHO are already set.\n"
  "  if test \"$libtool_execute_magic\" != \"%%%MAGIC variable%%%\"; then\n"
  "    ECHO=\"echo\"\n"
  "    file=\"$0\"\n"
  "    # Make sure echo works.\n"
  "    if test \"X$1\" = X--no-reexec; then\n"
  "      # Discard the --no-reexec flag, and continue.\n"
  "      shift\n"
  "    elif test \"X`{ $ECHO '\\t'; } 2>/dev/null`\" = 'X\\t'; then\n"
  "      # Yippee, $ECHO works!\n"
  "      :\n"
  "    else\n"
  "      # Restart under the correct shell, and then maybe $ECHO will work.\n"
  "      exec /bin/sh \"$0\" --no-reexec ${1+\"$@\"}\n"
  "    fi\n"
  "  fi\n"
  "\n"
  "  # Find the directory that this script lives in.\n"
  "  thisdir=`$ECHO \"X$file\" | $Xsed -e 's%/[^/]*$%%'`\n"
  "  test \"x$thisdir\" = \"x$file\" && thisdir=.\n"
  "\n"
  "  # Follow symbolic links until we get to the real thisdir.\n"
  "  file=`ls -ld \"$file\" | /usr/bin/sed -n 's/.*-> //p'`\n"
  "  while test -n \"$file\"; do\n"
  "    destdir=`$ECHO \"X$file\" | $Xsed -e 's%/[^/]*$%%'`\n"
  "\n"
  "    # If there was a directory component, then change thisdir.\n"
  "    if test \"x$destdir\" != \"x$file\"; then\n"
  "      case \"$destdir\" in\n"
  "      [\\\\/]* | [A-Za-z]:[\\\\/]*) thisdir=\"$destdir\" ;;\n"
  "      *) thisdir=\"$thisdir/$destdir\" ;;\n"
  "      esac\n"
  "    fi\n"
  "\n"
  "    file=`$ECHO \"X$file\" | $Xsed -e 's%^.*/%%'`\n"
  "    file=`ls -ld \"$thisdir/$file\" | /usr/bin/sed -n 's/.*-> //p'`\n"
  "  done\n"
  "\n"
  "  # Usually 'no', except on cygwin/mingw when embedded into\n"
  "  # the cwrapper.\n"
  "  WRAPPER_SCRIPT_BELONGS_IN_OBJDIR=yes\n"
  "  if test \"$WRAPPER_SCRIPT_BELONGS_IN_OBJDIR\" = \"yes\"; then\n"
  "    # special case for '.'\n"
  "    if test \"$thisdir\" = \".\"; then\n"
  "      thisdir=`pwd`\n"
  "    fi\n"
  "    # remove .libs from thisdir\n"
  "    case \"$thisdir\" in\n"
  "    *[\\\\/].libs ) thisdir=`$ECHO \"X$thisdir\" | $Xsed -e 's%[\\\\/][^\\\\/]*$%%'` ;;\n"
  "    .libs )   thisdir=. ;;\n"
  "    esac\n"
  "  fi\n"
  "\n"
  "  # Try to get the absolute directory name.\n"
  "  absdir=`cd \"$thisdir\" && pwd`\n"
  "  test -n \"$absdir\" && thisdir=\"$absdir\"\n"
  "\n"
  "  program='t-bug90.exe'\n"
  "  progdir=\"$thisdir/.libs\"\n"
  "\n"
  "\n"
  "  if test -f \"$progdir/$program\"; then\n"
  "    # Add the dll search path components to the executable PATH\n"
  "    PATH=:/home/billa/SEE/libsee:$PATH\n"
  "\n"
  "    if test \"$libtool_execute_magic\" != \"%%%MAGIC variable%%%\"; then\n"
  "      # Run the actual program with our arguments.\n"
  "\n"
  "      exec \"$progdir/$program\" ${1+\"$@\"}\n"
  "\n"
  "      $ECHO \"$0: cannot exec $program $*\" 1>&2\n"
  "      exit 1\n"
  "    fi\n"
  "  else\n"
  "    # The program doesn't exist.\n"
  "    $ECHO \"$0: error: \\`$progdir/$program' does not exist\" 1>&2\n"
  "    $ECHO \"This script is just a wrapper for $program.\" 1>&2\n"
  "    echo \"See the libtool documentation for more information.\" 1>&2\n"
  "    exit 1\n"
  "  fi\n"
  "fi\n"
;
const char * MAGIC_EXE = "%%%MAGIC EXE variable%%%";

int
main (int argc, char *argv[])
{
  char **newargz;
  char *tmp_pathspec;
  char *actual_cwrapper_path;
  char *shwrapper_name;
  intptr_t rval = 127;
  FILE *shwrapper;

  const char *dumpscript_opt = "--lt-dump-script";
  int i;

  program_name = (char *) xstrdup (base_name (argv[0]));
  LTWRAPPER_DEBUGPRINTF (("(main) argv[0]      : %s\n", argv[0]));
  LTWRAPPER_DEBUGPRINTF (("(main) program_name : %s\n", program_name));

  /* very simple arg parsing; don't want to rely on getopt */
  for (i = 1; i < argc; i++)
    {
      if (strcmp (argv[i], dumpscript_opt) == 0)
	{
          setmode(1,_O_BINARY);
	  printf ("%s", script_text);
	  return 0;
	}
    }

  newargz = XMALLOC (char *, argc + 2);
  newargz[0] = (char *) xstrdup ("/bin/sh.exe");
  tmp_pathspec = find_executable (argv[0]);
  if (tmp_pathspec == NULL)
    lt_fatal ("Couldn't find %s", argv[0]);
  LTWRAPPER_DEBUGPRINTF (("(main) found exe (before symlink chase) at : %s\n",
			  tmp_pathspec));

  actual_cwrapper_path = chase_symlinks (tmp_pathspec);
  LTWRAPPER_DEBUGPRINTF (("(main) found exe (after symlink chase) at : %s\n",
			  actual_cwrapper_path));
  XFREE (tmp_pathspec);

  shwrapper_name = (char *) xstrdup (base_name (actual_cwrapper_path));
  strendzap (actual_cwrapper_path, shwrapper_name);

  /* shwrapper_name transforms */
  strendzap (shwrapper_name, ".exe");
  tmp_pathspec = XMALLOC (char, (strlen (shwrapper_name) +
				 strlen ("_ltshwrapperTMP") + 1));
  strcpy (tmp_pathspec, shwrapper_name);
  strcat (tmp_pathspec, "_ltshwrapperTMP");
  XFREE (shwrapper_name);
  shwrapper_name = tmp_pathspec;
  tmp_pathspec = 0;
  LTWRAPPER_DEBUGPRINTF (("(main) libtool shell wrapper name: %s\n",
			  shwrapper_name));
  newargz[1] =
    XMALLOC (char, (strlen (actual_cwrapper_path) +
		    strlen (".libs") + 1 + strlen (shwrapper_name) + 1));
  strcpy (newargz[1], actual_cwrapper_path);
  strcat (newargz[1], ".libs");
  strcat (newargz[1], "/");
  strcat (newargz[1], shwrapper_name);
  {
    char* p;
    while ((p = strchr (newargz[1], '\\')) != NULL)
      {
	*p = '/';
      }
  }
  XFREE (shwrapper_name);
  XFREE (actual_cwrapper_path);

  /* always write in binary mode */
  if ((shwrapper = fopen (newargz[1], FOPEN_WB)) == 0)
    {
      lt_fatal ("Could not open %s for writing", newargz[1]);
    }
  fprintf (shwrapper, "%s", script_text);
  fclose (shwrapper);

  make_executable (newargz[1]);

  for (i = 1; i < argc; i++)
    newargz[i + 1] = xstrdup (argv[i]);
  newargz[argc + 1] = NULL;

  for (i = 0; i < argc + 1; i++)
    {
      LTWRAPPER_DEBUGPRINTF (("(main) newargz[%d]   : %s\n", i, newargz[i]));
    }

  /* execv doesn't actually work on mingw as expected on unix */
  rval = _spawnv (_P_WAIT, "/bin/sh.exe", (const char * const *) newargz);
  if (rval == -1)
    {
      /* failed to start process */
      LTWRAPPER_DEBUGPRINTF (("(main) failed to launch target \"/bin/sh.exe\": errno = %d\n", errno));
      return 127;
    }
  return rval;
}

void *
xmalloc (size_t num)
{
  void *p = (void *) malloc (num);
  if (!p)
    lt_fatal ("Memory exhausted");

  return p;
}

char *
xstrdup (const char *string)
{
  return string ? strcpy ((char *) xmalloc (strlen (string) + 1),
			  string) : NULL;
}

const char *
base_name (const char *name)
{
  const char *base;

#if defined (HAVE_DOS_BASED_FILE_SYSTEM)
  /* Skip over the disk name in MSDOS pathnames. */
  if (isalpha ((unsigned char) name[0]) && name[1] == ':')
    name += 2;
#endif

  for (base = name; *name; name++)
    if (IS_DIR_SEPARATOR (*name))
      base = name + 1;
  return base;
}

int
check_executable (const char *path)
{
  struct stat st;

  LTWRAPPER_DEBUGPRINTF (("(check_executable)  : %s\n",
			  path ? (*path ? path : "EMPTY!") : "NULL!"));
  if ((!path) || (!*path))
    return 0;

  if ((stat (path, &st) >= 0)
      && (st.st_mode & (S_IXUSR | S_IXGRP | S_IXOTH)))
    return 1;
  else
    return 0;
}

int
make_executable (const char *path)
{
  int rval = 0;
  struct stat st;

  LTWRAPPER_DEBUGPRINTF (("(make_executable)   : %s\n",
			  path ? (*path ? path : "EMPTY!") : "NULL!"));
  if ((!path) || (!*path))
    return 0;

  if (stat (path, &st) >= 0)
    {
      rval = chmod (path, st.st_mode | S_IXOTH | S_IXGRP | S_IXUSR);
    }
  return rval;
}

/* Searches for the full path of the wrapper.  Returns
   newly allocated full path name if found, NULL otherwise
   Does not chase symlinks, even on platforms that support them.
*/
char *
find_executable (const char *wrapper)
{
  int has_slash = 0;
  const char *p;
  const char *p_next;
  /* static buffer for getcwd */
  char tmp[LT_PATHMAX + 1];
  int tmp_len;
  char *concat_name;

  LTWRAPPER_DEBUGPRINTF (("(find_executable)   : %s\n",
			  wrapper ? (*wrapper ? wrapper : "EMPTY!") : "NULL!"));

  if ((wrapper == NULL) || (*wrapper == '\0'))
    return NULL;

  /* Absolute path? */
#if defined (HAVE_DOS_BASED_FILE_SYSTEM)
  if (isalpha ((unsigned char) wrapper[0]) && wrapper[1] == ':')
    {
      concat_name = xstrdup (wrapper);
      if (check_executable (concat_name))
	return concat_name;
      XFREE (concat_name);
    }
  else
    {
#endif
      if (IS_DIR_SEPARATOR (wrapper[0]))
	{
	  concat_name = xstrdup (wrapper);
	  if (check_executable (concat_name))
	    return concat_name;
	  XFREE (concat_name);
	}
#if defined (HAVE_DOS_BASED_FILE_SYSTEM)
    }
#endif

  for (p = wrapper; *p; p++)
    if (*p == '/')
      {
	has_slash = 1;
	break;
      }
  if (!has_slash)
    {
      /* no slashes; search PATH */
      const char *path = getenv ("PATH");
      if (path != NULL)
	{
	  for (p = path; *p; p = p_next)
	    {
	      const char *q;
	      size_t p_len;
	      for (q = p; *q; q++)
		if (IS_PATH_SEPARATOR (*q))
		  break;
	      p_len = q - p;
	      p_next = (*q == '\0' ? q : q + 1);
	      if (p_len == 0)
		{
		  /* empty path: current directory */
		  if (getcwd (tmp, LT_PATHMAX) == NULL)
		    lt_fatal ("getcwd failed");
		  tmp_len = strlen (tmp);
		  concat_name =
		    XMALLOC (char, tmp_len + 1 + strlen (wrapper) + 1);
		  memcpy (concat_name, tmp, tmp_len);
		  concat_name[tmp_len] = '/';
		  strcpy (concat_name + tmp_len + 1, wrapper);
		}
	      else
		{
		  concat_name =
		    XMALLOC (char, p_len + 1 + strlen (wrapper) + 1);
		  memcpy (concat_name, p, p_len);
		  concat_name[p_len] = '/';
		  strcpy (concat_name + p_len + 1, wrapper);
		}
	      if (check_executable (concat_name))
		return concat_name;
	      XFREE (concat_name);
	    }
	}
      /* not found in PATH; assume curdir */
    }
  /* Relative path | not found in path: prepend cwd */
  if (getcwd (tmp, LT_PATHMAX) == NULL)
    lt_fatal ("getcwd failed");
  tmp_len = strlen (tmp);
  concat_name = XMALLOC (char, tmp_len + 1 + strlen (wrapper) + 1);
  memcpy (concat_name, tmp, tmp_len);
  concat_name[tmp_len] = '/';
  strcpy (concat_name + tmp_len + 1, wrapper);

  if (check_executable (concat_name))
    return concat_name;
  XFREE (concat_name);
  return NULL;
}

char *
chase_symlinks (const char *pathspec)
{
#ifndef S_ISLNK
  return xstrdup (pathspec);
#else
  char buf[LT_PATHMAX];
  struct stat s;
  char *tmp_pathspec = xstrdup (pathspec);
  char *p;
  int has_symlinks = 0;
  while (strlen (tmp_pathspec) && !has_symlinks)
    {
      LTWRAPPER_DEBUGPRINTF (("checking path component for symlinks: %s\n",
			      tmp_pathspec));
      if (lstat (tmp_pathspec, &s) == 0)
	{
	  if (S_ISLNK (s.st_mode) != 0)
	    {
	      has_symlinks = 1;
	      break;
	    }

	  /* search backwards for last DIR_SEPARATOR */
	  p = tmp_pathspec + strlen (tmp_pathspec) - 1;
	  while ((p > tmp_pathspec) && (!IS_DIR_SEPARATOR (*p)))
	    p--;
	  if ((p == tmp_pathspec) && (!IS_DIR_SEPARATOR (*p)))
	    {
	      /* no more DIR_SEPARATORS left */
	      break;
	    }
	  *p = '\0';
	}
      else
	{
	  char *errstr = strerror (errno);
	  lt_fatal ("Error accessing file %s (%s)", tmp_pathspec, errstr);
	}
    }
  XFREE (tmp_pathspec);

  if (!has_symlinks)
    {
      return xstrdup (pathspec);
    }

  tmp_pathspec = realpath (pathspec, buf);
  if (tmp_pathspec == 0)
    {
      lt_fatal ("Could not follow symlinks for %s", pathspec);
    }
  return xstrdup (tmp_pathspec);
#endif
}

char *
strendzap (char *str, const char *pat)
{
  size_t len, patlen;

  assert (str != NULL);
  assert (pat != NULL);

  len = strlen (str);
  patlen = strlen (pat);

  if (patlen <= len)
    {
      str += len - patlen;
      if (strcmp (str, pat) == 0)
	*str = '\0';
    }
  return str;
}

static void
lt_error_core (int exit_status, const char *mode,
	       const char *message, va_list ap)
{
  fprintf (stderr, "%s: %s: ", program_name, mode);
  vfprintf (stderr, message, ap);
  fprintf (stderr, ".\n");

  if (exit_status >= 0)
    exit (exit_status);
}

void
lt_fatal (const char *message, ...)
{
  va_list ap;
  va_start (ap, message);
  lt_error_core (EXIT_FAILURE, "FATAL", message, ap);
  va_end (ap);
}
