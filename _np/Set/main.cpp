#include <iostream>
#include <set>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    // default constructor
    Person():name(""), age(0){};

    // main constructor
    Person (string pName, int pAge):name(pName), age(pAge){};

    // copy constructor
    Person(const Person &other):name(other.name), age(other.age){};

    //bool operator==(Person other){
    //    return (name == other.name);
    //}
    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return (age < other.age);
        }
        return (name < other.name);
    }

    // declaring ostream operator<< as friend so it can access private members
    friend std::ostream& operator<<(ostream& out, const Person &someone);
};

std::ostream& operator<<(ostream& out, const Person &someone){
    return out << someone.name << ": " << someone.age << flush;
}

int main()
{
    set<int> lotto;
    lotto.insert(10);
    lotto.insert(13);
    lotto.insert(25);
    lotto.insert(53);
    lotto.insert(25);

    // although we tried to insert five numbers, lotto only contains 4 unique elements
    cout << "lotto has " << lotto.size() << " numbers " << endl;
    for (auto number: lotto)
    {
        cout << number << endl;
    }

    set<string> things;
    things.insert("couch");
    things.insert("tv");
    things.insert("couch");
    cout << "things has size = " << things.size() << endl;

    set<Person> people;
    people.insert(Person("Rob", 23));
    people.insert(Person("Mike", 33));
    people.insert(Person("Rob", 88));
    people.insert(Person("Julie", 77));
    people.insert(Person("Julie", 77));
    people.insert(Person("Julie", 77));
    cout << "people has size = " << people.size() << endl;

    for (auto person: people)
    {
        cout << person << endl;
    }

    Person Julie("Julie", 77);
    auto it = people.find(Julie);
    if (it != people.end())
    {
        cout << "Found " << *it << endl;
        cout << "In total there is " << people.count(Julie) << " person named " << *it << endl;
    }
    else
    {
        cout << "Julie not found" << endl;
    }


    return 0;
}
