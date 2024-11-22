#ifdef C_STYLE_IO
# include <stdio.h>
# include <conio.h>
#else
# include <iostream>
#endif // C_STYLE_IO


#ifdef WAIT_FOR_A_KEY_C_STYLE_KEY_GET
#include <conio.h>
#endif // WAIT_FOR_A_KEY_C_STYLE_KEY_GET


#include "sample__dladdr.h"

void waitForAKey(const char* comment = "")
{
#ifdef C_STYLE_IO
  if (comment[0])
    printf("%s\n", comment);
  printf("Press any key to quit...\n");
#else
  if (comment[0])
    std::cout << comment << std::endl;
  std::cout << "Press any key to quit..." << std::endl;
#endif // C_STYLE_IO

#ifdef WAIT_FOR_A_KEY_C_STYLE_KEY_GET
  getch();
#else

  std::string q;

  std::cin >> q;
#endif // WAIT_FOR_A_KEY_C_STYLE

}

int main(int argc, char** argv)
{
  sample_dladdr01();
  waitForAKey();
  return 0;
}


