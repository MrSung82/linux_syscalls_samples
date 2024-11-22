#include <dlfcn.h>

#include <stdio.h>
#include <iostream>

#include "world.h"

static void mytest_hw()
{

  h_world();
  g_world();
}

static int print_addr(const void* p)
{
  Dl_info dl_info;

  int ret_code = dladdr(p, &dl_info);

  if (ret_code)
  {
    printf("dl_info:\n"
           "  dli_fname = %s\n"
           "  dli_fbase = %p\n"
           "  dli_sname = %s\n"
           "  dli_saddr = %p\n"
           "  \n",
           dl_info.dli_fname,
           dl_info.dli_fbase,
           dl_info.dli_sname,
           dl_info.dli_saddr);
  }
  else
  {
    printf("Error: %d\n", ret_code);
  }
  return ret_code;
}

int sample_dladdr01()
{
  mytest_hw();

  int ret_code = print_addr((const void*)h_world);

  if (!ret_code)
  {
    return ret_code;
  }

  ret_code = print_addr((const void*)g_world);

  if (!ret_code)
  {
    return ret_code;
  }

  return ret_code;
}
