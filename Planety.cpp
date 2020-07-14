#include <iostream>

int main() {
  
  double earthWeight;
  
  std::cout << "What is your weight on Planet Earth?\n" << "Earth Weight: ";
  std::cin >> earthWeight;
  
  int planet;
  
  std::cout << "What is your destination planet? " << "No. of Destination Planet: ";
  std::cin >> planet;
  
  switch (planet) {
    case 1:
      std::cout << "You chose Venus\n" << "Your weight on Venus is: " << earthWeight * 0.78;
      break;
    case 2:
      std::cout << "You chose Mars\n" << "Your weight on Mars is: " << earthWeight * 0.39;
      break;
    case 3:
      std::cout << "You chose Jupiter\n" << "Your weight on Jupiter is: " << earthWeight * 2.65;
      break;
    case 4:
      std::cout << "You chose Saturn\n" << "Your weight on Saturn is: " << earthWeight * 1.17;
      break;
    case 5:
      std::cout << "You chose Uranus\npshh stop laughing\n\n" << "Your weight on Uranus is: " << "ThIS MuCH\n" << "no, seriously now\n\n" << earthWeight * 1.05 << "\n^Yeah, that's it.\nWhat were you expecting? Not great, not terrible\nsome would say";
      break;
    case 6:
      std::cout << "You chose Neptune\n" << "Your weight on Neptune is: " << earthWeight * 1.23;
      break;
    default:
      std::cout << "Wow\nNew planet! " << "What a Legend\nJust incredible\n\n" << "Is it Pluto tho?";
      break;      
  }

  //The END
  std::cout << "\n";
  system("pause");
}