#ifndef HUMAN_H
#define HUMAN_H
#include <bits/stdc++.h>
#include <enums.h>
using namespace std;

class human
{
private:
    string name;
    string surname;
    int age;

    Position position;
    Color color;

public:
    human (string n, string s, int a, Position p)
    {
        name = n;
        surname = s;
        age = a;
        position = p;

        if (p == STUDENT) color = GREEN;
        if (p == PROFESSOR) color = YELLOW;
        if (p == LABEMPLOYEE) color = YELLOW;
        if (p == DIRECTOR) color = RED;
        if (p == ADMIN) color = RED;
    }

    string getName()
    {
        return name;
    }

    string getSurname()
    {
        return surname;
    }

    int getAge()
    {
        return age;
    }

    Position getPosition()
    {
        return position;
    }

    Color getColor()
    {
        return color;
    }
};

#endif // HUMAN_H
