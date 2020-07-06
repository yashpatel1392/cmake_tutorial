#include <math.h>
#include "TutorialConfig.h"
#include "iostream"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main (int argc, char *argv[])
{
    if (argc < 2) {
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
    << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
    }

  double inputValue = atof(argv[1]);
  double outputValue = 0;

  if(inputValue >= 0)
  {
#ifdef USE_MYMATH
    outputValue = mysqrt(inputValue);
#else
    outputValue = sqrt(inputValue);
#endif
  }
  std::cout<<"The square root of "<< inputValue << " is "<< outputValue <<std::endl;
  return 0;
}
