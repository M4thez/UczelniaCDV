#include <iostream>

//houses
int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;

//invidual answers
int answer1 = 0;
int answer2 = 0;
int answer3 = 0;
int answer 4 = 0;

//final variables
int max = 0;
std::string house;

void question1()
{

  std::cout << "Q1) When I'm dead, I want people to remember me as: "
            << "\n\n";
  //answers
  std::cout << "1) The Good"
            << "\n";
  std::cout << "2) The Great"
            << "\n";
  std::cout << "3) The Wise"
            << "\n";
  std::cout << "4) The Bold"
            << "\n\n";
  //user answer
  std::cin >> answer1;
  //adding points
  if (answer1 == 1)
    hufflepuff++;
  else if (answer1 == 2)
    slytherin++;
  else if (answer1 == 3)
    ravenclaw++;
  else if (answer1 == 4)
    gryffindor++;
  else
  {
    std::cout << "Invalid input"
              << "\n\n";
    question1();
  }
}

void question2()
{

  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n\n";

  std::cin >> answer2;

  if (answer2 == 1)
  {
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2)
  {
    hufflepuff++;
    slytherin++;
  }
  else
  {
    std::cout << "Invalid input\n\n";
    question2();
  }
}

void question3()
{

  std::cout << "Q3) Which kind of instrument most pleases your ear?"
            << "\n\n";
  //answers
  std::cout << "1) The violin"
            << "\n";
  std::cout << "2) The trumpet"
            << "\n";
  std::cout << "3) The piano"
            << "\n";
  std::cout << "4) The drum"
            << "\n\n";
  //user answer
  std::cin >> answer3;

  if (answer3 == 1)
    slytherin++;
  else if (answer3 == 2)
    hufflepuff++;
  else if (answer3 == 3)
    ravenclaw++;
  else if (answer3 == 4)
    gryffindor++;
  else
  {
    std::cout << "Invalid input\n\n";
    question3();
  }
}

void question4()
{

  std::cout << "Q4) Which road tempts you most?"
            << "\n\n";
  //answers
  std::cout << "1) The wide, sunny grassy lane"
            << "\n";
  std::cout << "2) The narrow, dark, lantern-lit alley"
            << "\n";
  std::cout << "3) The twisting, leaf-strewn path through woods"
            << "\n";
  std::cout << "4) The cobbled street lined (ancient buildings)"
            << "\n\n";
  //user answer
  std::cin >> answer4;

  if (answer4 == 1)
    hufflepuff++;
  else if (answer4 == 2)
    slytherin++;
  else if (answer4 == 3)
    gryffindor++;
  else if (answer4 == 4)
    ravenclaw++;
  else
  {
    std::cout << "Invalid input\n\n";
    question4();
  }
}

int main()
{

  //start of the quiz
  std::cout << "The Sorting Hat Quiz!"
            << "\n\n";

  //let's ask some questions
  question1();
  std::cout << "\n";
  question2();
  std::cout << "\n";
  question3();
  std::cout << "\n";
  question4();

  //final verdict
  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << "\nYour House is " << house << "!\n\n";

  // The END
  system("pause");
}