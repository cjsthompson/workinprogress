#include <stdio.h>
#include <string.h>

#include "gen.h"
#include "test_paths.h"

int main(void)
{
  char *dpath;

  int i;

  for (i = 0; i < NUMPATHS; i++)
  {
    dpath = strdup(paths[i]);
    printf("basename(\"%s\") = %s\n", dpath, basename(dpath));
  }

  return 0;
}
