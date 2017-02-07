#include<iostream>
#include<string>

using namespace std;

/*Now make a struct called student and
make name, major, and year members*/

struct student
{
  string name;
  string major;
  int year;
};

int main()
{
  student me;
  
  cout << "What is your first name?" << endl;
  cin >> me.name;

  cout << "What year are you in?" << endl;
  cin >> me.year;

  cout << "What is your major?" << endl;
  cin >> me.major;

  cout << "Your name is: " << me.name << endl;
  cout << "Your major is: " << me.major << endl;
  cout << "You are in your: " << me.year << " year" << endl;
  
  return 0;

}
