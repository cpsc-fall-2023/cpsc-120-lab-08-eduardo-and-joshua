// Eduardo Tostado
// eduardotostado@csu.fullerton.edu
// @Eduardo-Tostado
// Partners: @WuniorAyo
//
// Date Difference 2
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguements\n";
    return 1;
  }
  std::string protein = arguments.at(1);
  std::string bread = arguments.at(2);
  std::string condiment_input = arguments.at(3);
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment_input << ".\n";

  return 0;
}
