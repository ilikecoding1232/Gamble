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

std::string choises()
{
  
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
  }


  return 0;
}
