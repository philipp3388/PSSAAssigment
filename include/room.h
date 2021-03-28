#ifndef ROOM_H
#define ROOM_H
#include <bits/stdc++.h>
#include <enums.h>
#include <human.h>
using namespace std;

class room
{
private:
    int number;
    Room name;
    Color color;

public:
    room(int num, Room n)
    {
        number = num;
        name = n;

        if (n == CLASS) color = GREEN;
        if (n == LECTURE) color = NO_LEVEL;
        if (n == CONFERENCE) color = YELLOW;
        if (n == CABINET) color = YELLOW;
        if (n == DIRECTORCABINET) color = RED;
    }

    Room getRoom()
    {
        return name;
    }

    Color getColor()
    {
        return color;
    }

    bool isAvailable(human h)
    {
        return h.getColor() >= color;
    }
};

#endif // ROOM_H
