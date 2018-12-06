//Author: Robert DeValentine
#ifndef _STUDENT_H_

#define _STUDENT_H_
#include <string>
#include <iostream>
#include <vector>

class student

{

private:
std::string m_firstName;
std::string m_lastName;
std::vector<double> m_grades;
double m_score;

public:

student();//constructor
 
void setName(std::string, std::string);

std::string fullName();

void addGrade(double);

double getScore();

};

#endif
