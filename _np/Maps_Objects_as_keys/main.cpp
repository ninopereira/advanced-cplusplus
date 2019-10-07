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
        //cout << "Copy constructor" << endl;
        name = other.name;
        age = other.age;
    }

    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }
        else
        {
            return name < other.name;
        }
    }
    // declaring ostream operator<< as friend so it can access private members
    friend std::ostream& operator<<(std::ostream& out, const Person& pers);
};

std::ostream& operator<<(std::ostream& out, const Person& pers)
{
   return out << pers.name << '\t' << pers.age ;
}

int main()
{
    Person Nino("Nino", 43);
    Person Rui("Rui", 44);
    //cout << Nino << endl << Rui << endl;

    map<Person, int> people;
    people[Nino] = 1;
    people[Rui] = 5;
    people[Person("Ana", 37)] = 4;
    // this won't be inserted as the key already exists
    people.insert(make_pair(Person(Nino),4));
    // This would be inserted as the key is different
    people.insert(make_pair(Person("Nino", 39),4));
    people.insert(make_pair(Person("Catty",56),6));
    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
