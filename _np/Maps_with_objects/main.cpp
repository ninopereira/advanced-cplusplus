#include <iostream>
#include <map>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    // default constructor
    Person():name(""),age(0){}

    // constructor
    Person(string pName, int pAge)
    {
        name = pName;
        age = pAge;
    }

    // copy constructor
    Person(const Person &other)
    {
        cout << "Copy constructor" << endl;
        name = other.name;
        age = other.age;
    }

    string getName()const {return name;}
    int getAge()const {return age;}
};

std::ostream& operator<<(std::ostream& out, const Person& pers)
{
   return out << pers.getName() << '\t' << pers.getAge() ;
}

int main()
{
    Person Nino("Nino", 43);
    Person Rui("Rui", 44);
    cout << Nino << endl << Rui << endl;

    map<int, Person> people;
    people[1] = Nino;
    people[5] = Rui;
    people[3] = Person("Ana", 37);
    people.insert(make_pair(4, Person(Nino)));
    people.insert(make_pair(6, Person("Catty",56)));
    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
