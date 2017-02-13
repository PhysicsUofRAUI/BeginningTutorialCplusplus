#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*make an vector of students, instead of asking the user how many they want to make construct
 a loop that fills up students indefinently until the user says to stop and later
printing it all out*/

struct Student
{
  string name;
  string major;
  int year;
};

Student getInfo()
{
  Student stud;
  
  cout << "What is the student's first name?" << endl;
  cin >> stud.name;

  cout << "What year is the student in?" << endl;
  cin >> stud.year;

  cout << "What is the student's major?" << endl;
  cin >> stud.major;

  return stud;
}

void printStudent(Student stud)
{
  cout << "The student's name is: " << stud.name << endl;
  cout << "The student's major is: " << stud.major << endl;
  cout << "The student is in year: " << stud.year << endl;
}
int main()
{
  char user_choice = 'Y'; //The user decides whether or not to make a new student
  int j = 0; //to count how many students there are
  vector<Student> studArray;

  while(user_choice == 'Y')
    {
      studArray.push_back(getInfo());

      cout << "Do you want to make a new student (enter 'Y' for yes and 'N' for no): ";
      cin >> user_choice;
    }

  for(int i = 0;i < j;i++)
    {
      printStudent(studArray[i]);
    }
  
  return 0;

}
