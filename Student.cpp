#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id, char pName[]) {
  studentid = id;
  name = pName;
}


  
}
void Student:: display(){
  cout<<"Student number is "<< studentid<<endl;
  cout<< "Student name is "<< name<<endl;
}