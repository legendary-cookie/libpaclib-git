#include <array>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

bool installOffline(std::string path) {
  std::string command = "pacman -U " + path;
  int ret = std::system(command.c_str());
  if (WEXITSTATUS(ret) == 0)
    return true;
  else
    return false;
}

void __attribute__((constructor)) initLibrary(void) {
  //
  // Function is called when the library is loaded
  //
}
void __attribute__((destructor)) cleanUpLibrary(void) {
  //
  // Function is called when the library is »closed«.
  //
}
