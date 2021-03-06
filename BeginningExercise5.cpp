#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*make an vector of students, ask the user how many they want and loop through the vector filling it up and later
printing it all out*/

struct Student
{
  string name;
  string major;
  int year;
};

void getInfo(Student &stud)
{  
  cout << "What is the student's first name?" << endl;
  cin >> stud.name;

  cout << "What year is the student in?" << endl;
  cin >> stud.year;

  cout << "What is the student's major?" << endl;
  cin >> stud.major;
}

void printStudent(Student stud)
{
  cout << "The student's name is: " << stud.name << endl;
  cout << "The student's major is: " << stud.major << endl;
  cout << "The student is in year: " << stud.year << endl;
}
int main()
{
  int j = 0; // for my while loop
  int arraySize;
  vector<Student> studArray;

  cout << "How many students do you want to include: ";
  cin >> arraySize;

  studArray.resize(arraySize); //This makes sure there is enough room in the vector

  for(int i = 0;i < arraySize;i++)
    {
      getInfo(studArray[i]);
    }

  while(j < arraySize)
    {
      printStudent(studArray[j]);
      j++;
    }
  
  return 0;

}
