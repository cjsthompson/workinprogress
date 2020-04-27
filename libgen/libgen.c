#include <stdio.h>
#include <string.h>

/* POSIX versions of basename() and dirname() */

char *
dirname (char *path)
{
  char *dir;
  int last;

  last = strlen (path) - 1;

  if (last == 0 && path[0] == '/')
    return path;

  while (last > 0 && path[last] == '/')
    path[last--] = '\0';

  dir = rindex (path, '/');

  if (dir == NULL)
  {
    path[0] = '.';
    path[1] = '\0';
    return path;
  }

  while (dir > path && *dir == '/')
    --dir;

  dir[1] = '\0';

  return path;
}

char *
basename (char *path)
{
  static char def = '.';
  char *base;
  int last;

  last = strlen (path) - 1;

  if (last == -1)
    return &def;

  if (last == 0 && path[0] == '/')
    return path;

  while (last > 0 && path[last] == '/')
    path[last--] = '\0';

  base = rindex (path, '/');

  if (base != NULL)
      return base + 1;

  return path;
}
