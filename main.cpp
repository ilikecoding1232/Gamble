#include <cstdlib>
#include <iostream>
#include <stdint.h>
#include <string>

/// ASCII COLOURS
// Name            FG  BG
// Black           30  40
// Red             31  41
// Green           32  42
// Yellow          33  43
// Blue            34  44
// Magenta         35  45
// Cyan            36  46
// White           37  47
// Bright Black    90  100
// Bright Red      91  101
// Bright Green    92  102
// Bright Yellow   93  103
// Bright Blue     94  104
// Bright Magenta  95  105
// Bright Cyan     96  106
// Bright White    97  107

std::string Red(const std::string& text) {
  return "\033[31m" + text + "\033[0m";
}
std::string Red(int value) {
  return "\033[31m" + std::to_string(value) + "\033[0m"; // overload for intergers
}
std::string Green(const std::string& text) {
  return "\033[32m" + text + "\033[0m";
}
std::string Green(int value) {
  return "\033[32m" + std::to_string(value) + "\033[0m";
}
std::string Blue(const std::string& text) {
  return "\033[34m" + text + "\033[0m";
}
std::string White(const std::string& text) {
  return "\033[37m" + text + "\033[0m";
}
std::string Black(const std::string& text) {
  return "\033[30m" + text + "\033[0m";
}
std::string Bold(const std::string& text) {
  return "\033[1m" + text + "\033[0m";
}

std::string CheckBal(int Bal)
{
  return Green("Current Ballance : ") + Green(Bal); 
}

void choises()
{
  std::cout << "check Ballance : 1" << std::endl; 
  std::cout << "exit : 2" << std::endl;
  std::cout << "roulet : 3";
}

int roulet(int &bal)
{
  char x[1];
  int amount;
  std::cout << "How much u betting?" << std::endl;
  std::cout << "all (y/n) : ";
  std::cin >> x;
  if (x == "y") {
    int random = rand() % 2;
    std::cout << "colour [r]ed or [b]lack (1 or 2) ";
    int y;
    std::cin >> y;
    if (y == 1) {
      if ((y-1) == random)
      {
        std::cout << " it landed on your colour !! \n";
        return bal = (bal*2);
      }
      else {
        std::cout << ":( landed on different colour \n";
        return bal -= bal;
      }
    }
    

  } 
  else {
    std::cout << "amount : ";
    std::cin >> amount;
    
  }
}

int main ()
{
  int Bal = 100;

  std::cout << Red("!!WELCOME TO GENERIC CASINO!!") << std::endl; 
  std::cout << CheckBal(Bal) << std::endl;
  
  while (true)
  {
    int choise;
    choises();
    std::cin >> choise;
    
    switch (choise)
    {
      case 1:
        CheckBal(Bal);
        break;
      case 2:
        return false;
        break;
      case 3:
        roulet(Bal);
        break;
    }

  }


  return 0;
}
