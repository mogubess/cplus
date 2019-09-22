#include <vector>
#include <iostream>
#include <string>
#include <thread>
#include <exception>

using namespace std;
void
do_worker1 () {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int
main (int argc, char *argv[]) {
  try {
    std::thread t1(do_worker1);
    t1.join();
  } catch (std::exception &ex) {
    std::cerr << ex.what() << std::endl;
  }
  return (0);
}
