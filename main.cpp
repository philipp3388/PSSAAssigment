#include <iostream>
#include <human.h>
#include <enums.h>
#include <room.h>

using namespace std;

int main()
{
    //Director
    human director("Kirill", "Semenihin", 43, DIRECTOR);

    //Admins
    human admin1("Petr", "Petrov", 22, ADMIN);
    human admin2("Ivan", "Ivanov", 24, ADMIN);

    //Professors
    human professor1("Eugene", "Zuev", 60, PROFESSOR);
    human professor2("Nikolay", "Shilov", 60, PROFESSOR);
    human professor3("Adil", "Khan", 50, PROFESSOR);
    human professor4("Ivan", "Konuhov", 25, PROFESSOR);

    //Employees
    human employee1("Alexandr", "Alexandrov", 25, LABEMPLOYEE);
    human employee2("Alexandr", "Vasiliev", 26, LABEMPLOYEE);
    human employee3("Alexandr", "Egorov", 27, LABEMPLOYEE);
    human employee4("Alexandr", "Petrov", 28, LABEMPLOYEE);
    human employee5("Alexandr", "Sidorov", 29, LABEMPLOYEE);
    human employee6("Alexandr", "Ivanov", 30, LABEMPLOYEE);
    human employee7("Alexandr", "Nikolaev", 31, LABEMPLOYEE);
    human employee8("Alexandr", "Gorodetsky", 32, LABEMPLOYEE);

    //Students
    human student1("Alexandr", "Alexandrov", 18, STUDENT);
    human student2("Alexandr", "Vasiliev", 18, STUDENT);
    human student3("Alexandr", "Egorov", 18, STUDENT);
    human student4("Alexandr", "Petrov", 18, STUDENT);
    human student5("Alexandr", "Sidorov", 19, STUDENT);
    human student6("Alexandr", "Ivanov", 19, STUDENT);
    human student7("Alexandr", "Nikolaev", 20, STUDENT);
    human student8("Alexandr", "Gorodetsky", 20, STUDENT);
    human student9("Alexandr", "Ponasenkov", 20, STUDENT);
    human student10("Alexandr", "Kirillin", 21, STUDENT);
    human student11("Alexandr", "Plehanov", 21, STUDENT);
    human student12("Alexandr", "Lenin", 21, STUDENT);
    human student13("Alexandr", "Romanov", 21, STUDENT);
    human student14("Alexandr", "Bronshtein", 22, STUDENT);
    human student15("Alexandr", "Vlasov", 22, STUDENT);
    human student16("Alexandr", "Kalinin", 22, STUDENT);

    //Rooms
    room class1(312, CLASS);
    room class2(313, CLASS);
    room class3(314, CLASS);

    room lecture1(106, LECTURE);
    room lecture2(107, LECTURE);
    room lecture3(108, LECTURE);

    room conference1(410, CONFERENCE);
    room conference2(411, CONFERENCE);
    room conference3(412, CONFERENCE);

    room cabinet1(404, CABINET);
    room cabinet2(405, CABINET);
    room cabinet3(406, CABINET);

    room directorCabinet(505, DIRECTORCABINET);

    //test
    //Student trying to enter class
    if (class1.isAvailable(student1)) cout << student1.getName() << ' ' << student1.getSurname() << ' ' << "can enter the room" << endl;
    else cout << student1.getName() << ' ' << student1.getSurname() << ' ' << "can't enter the room" << endl;
    //Student trying to enter lecture room
    if (lecture1.isAvailable(student2)) cout << student2.getName() << ' ' << student2.getSurname() << ' ' << "can enter the room" << endl;
    else cout << student2.getName() << ' ' << student2.getSurname() << ' ' << "can't enter the room" << endl;
    //Student trying to enter conference room
    if (conference1.isAvailable(student3)) cout << student3.getName() << ' ' << student3.getSurname() << ' ' << "can enter the room" << endl;
    else cout << student3.getName() << ' ' << student3.getSurname() << ' ' << "can't enter the room" << endl;

    //Professor trying enter class
    if (class1.isAvailable(professor4)) cout << professor4.getName() << ' ' << professor4.getSurname() << ' ' << "can enter the room" << endl;
    else cout << professor4.getName() << ' ' << professor4.getSurname() << ' ' << "can't enter the room" << endl;
    //Professor trying enter cabinet
    if (cabinet1.isAvailable(professor1)) cout << professor1.getName() << ' ' << professor1.getSurname() << ' ' << "can enter the room" << endl;
    else cout << professor1.getName() << ' ' << professor1.getSurname() << ' ' << "can't enter the room" << endl;

    //Director trying enter director cabinet
    if (directorCabinet.isAvailable(director)) cout << director.getName() << ' ' << director.getSurname() << ' ' << "can enter the room" << endl;
    else cout << director.getName() << ' ' << director.getSurname() << ' ' << "can't enter the room" << endl;

    return 0;
}
