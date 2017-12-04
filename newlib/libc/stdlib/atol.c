/*
 * Andy Wilson, 2-Oct-89.
 */

#include <stdlib.h>
#include <_ansi.h>

#ifndef _REENT_ONLY
long
_DEFUN (atol, (s), const char *s)
{
  return strtol (s, NULL, 10);
}
#endif /* !_REENT_ONLY */

long
_DEFUN (_atol_r, (ptr, s), struct _reent *ptr, const char *s)
{
  return _strtol_r (ptr, s, NULL, 10);
}

