// ConsoleApplication6.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

// Procedural programming

float average(vector<int> numbers) {
  float sum = 0;
  for (auto number : numbers) {
    sum += number;
  }
  return sum / numbers.size();
}

int main() {
  vector<int> numbers = {1, 2, 3, 4, 5};
  cout << "average value\n" << average(numbers) << endl;
  return 0;
}
///////////////////////////////////////////////////////////////

// Object-oriented programming OOP

class Cat {
public:
  string name;
  int age;
  string mood;

  void meow() { cout << name << "myeee" << endl; }

  void feed() {
    mood = "happy";
    cout << name << "fed and now he" << mood << "!" << endl;
  }
};

int main1() {
  Cat cat;
  cat.name = "myrka";
  cat.age = 5;
  cat.mood = "hungry";
  cat.meow();
  cat.feed();
  return 0;
}
