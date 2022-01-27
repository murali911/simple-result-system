#ifndef ADMIN_H
#define ADMIN_H

#include<fstream>
#include "teacher.h"
#include "student.h"
#include<iostream>

using namespace std;
class admin
{
public:
  void addstudent()
  {
    ofstream fout;
    student S;
    fout.open("student.dat",ios::in|ios::app);

    cout<<"\n\nEnter the details of the student to be added: ";
    S.input();
    fout.write((char*)&S, sizeof(S));
    cout<<"\n\nThe student is added";

    fout.close();
  }

  void addteacher()
  {
    ofstream fout;
    teacher T;
    fout.open("teacher.dat",ios::in|ios::app);

    cout<<"\n\nEnter the details of the teacher to be added: ";
    T.input();
    fout.write((char*)&T, sizeof(T));
    cout<<"\n\nThe teacher is added";

    fout.close();
  }
};

#endif
