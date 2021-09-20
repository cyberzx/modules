module;

#include <stdio.h>

export module hello;

export int hello_world() {
  printf("hello modules\n");
  return 2;
}


