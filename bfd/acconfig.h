
/* Name of package.  */
#undef PACKAGE

/* Version of package.  */
#undef VERSION

/* Whether strstr must be declared even if <string.h> is included.  */
#undef NEED_DECLARATION_STRSTR

/* Whether malloc must be declared even if <stdlib.h> is included.  */
#undef NEED_DECLARATION_MALLOC

/* Whether realloc must be declared even if <stdlib.h> is included.  */
#undef NEED_DECLARATION_REALLOC

/* Whether free must be declared even if <stdlib.h> is included.  */
#undef NEED_DECLARATION_FREE

/* Whether getenv must be declared even if <stdlib.h> is included.  */
#undef NEED_DECLARATION_GETENV
@TOP@

/* Do we need to use the b modifier when opening binary files?  */
#undef USE_BINARY_FOPEN

/* Name of host specific header file to include in trad-core.c.  */
#undef TRAD_HEADER

/* Define only if <sys/procfs.h> is available *and* it defines prstatus_t.  */
#undef HAVE_SYS_PROCFS_H

/* Define if <sys/procfs.h> has prstatus_t */
#undef HAVE_PRSTATUS_T

/* Define if <sys/procfs.h> has prstatus_t.pr_who */
#undef HAVE_PRSTATUS_T_PR_WHO

/* Define if <sys/procfs.h> has pstatus_t */
#undef HAVE_PSTATUS_T

/* Define if <sys/procfs.h> has prpsinfo_t */
#undef HAVE_PRPSINFO_T

/* Define if <sys/procfs.h> has psinfo_t */
#undef HAVE_PSINFO_T

/* Define if <sys/procfs.h> has lwpstatus_t */
#undef HAVE_LWPSTATUS_T

/* Define if <sys/procfs.h> has lwpstatus_t.pr_context */
#undef HAVE_LWPSTATUS_T_PR_CONTEXT

/* Define if <sys/procfs.h> has lwpstatus_t.pr_reg */
#undef HAVE_LWPSTATUS_T_PR_REG

/* Do we really want to use mmap if it's available?  */
#undef USE_MMAP

/* Define to 1 if NLS is requested.  */
#undef ENABLE_NLS

/* Define as 1 if you have catgets and don't want to use GNU gettext.  */
#undef HAVE_CATGETS

/* Define as 1 if you have gettext and don't want to use GNU gettext.  */
#undef HAVE_GETTEXT

/* Define as 1 if you have the stpcpy function.  */
#undef HAVE_STPCPY

/* Define if your locale.h file contains LC_MESSAGES.  */
#undef HAVE_LC_MESSAGES
