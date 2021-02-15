#include <iostream>
#include <string>

//using namespace std;
using std::cout; //using only the cout name from std

//example of a user-defined namespace
namespace one {
  void jack();
}

namespace two {
  void jack();
}

//example of an unnamed namespace
namespace {
  void jack();
}

//all of the code in this file (unless otherwise noted)
//is part of the global namespace
int main() {
  int temp = 5;

  //cout and endl are both from the std namespace

  cout << "temp is " << temp << std::endl;
  cout << "this is a test" << std::endl;

  {
      using namespace one;
      ::jack();
  }

  jack();

  two::jack();

  return 0;
}

namespace one {
  void jack() {
    cout << "Hi Jack W! It's nice that you were willing to help" << std::endl;
  }
}

namespace two {
    void jack() {
      cout << "Hi Jack from other class" << std::endl;
    }
}

namespace {
  void jack() {
    cout << "Hi Jack U! It's nice that you were willing to help" << std::endl;
  }
}