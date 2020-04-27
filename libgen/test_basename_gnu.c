#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>

#include "test_paths.h"

int main(void)
{
  int i;

  for (i = 0; i < NUMPATHS; i++)
  {
    printf("basename(\"%s\") = %s\n", paths[i], basename(paths[i]));
  }

  return 0;
}
