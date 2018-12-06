//Author: Robert DeValentine
#include "student.h"
#include <string>
#include <vector>
// class constructor
student::student()
{
        m_firstName.clear();

        m_lastName.clear();

        m_grades.clear();

        m_score = 0;
}


void student::setName(std::string first, std::string last)
{
        m_firstName = first;

        m_lastName = last;
}


std::string student::fullName()
{
        std::string name;

        name = name + m_firstName;

        name =  name + " ";
        
        name = name + m_lastName;

        return name;
}

void student::addGrade(double grade)
{
    m_grades.push_back(grade);
}

double student::getScore()
{
        for (int i = 0; i < m_grades.size(); i++)
        {

        m_score += m_grades[i];

        }

        if (m_grades.size() > 0)
        {
                m_score /= m_grades.size();

                return m_score;
        }
        else 
        {
                return m_score;
        }
}

