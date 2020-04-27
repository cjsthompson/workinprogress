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
    printf("dirname(\"%s\") = ", dpath);
    printf("%s\n", dirname(dpath));
  }
  return 0;
}
