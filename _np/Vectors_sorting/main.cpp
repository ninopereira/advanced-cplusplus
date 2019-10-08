#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Pokemon{
private:
    string name;
    int strength;
public:
    // default constructor
    Pokemon(){}

    // main constructor
    Pokemon(string pName, int pStrength):name(pName),strength(pStrength){}

    // copy constructor
    Pokemon (const Pokemon &other)
    {
        name = other.name;
        strength = other.strength;
    }

    bool operator<(const Pokemon& other) const
    {
        return strength < other.strength;
    }

    friend ostream& operator<<(ostream& os, const Pokemon& pokemon);
    friend bool CompareName(const Pokemon& pokA, const Pokemon& pokB);
};

ostream& operator<<(ostream& os, const Pokemon& pokemon)
{
    return os << pokemon.name << ": " << pokemon.strength << flush;
}

bool CompareName(const Pokemon& pokA, const Pokemon& pokB)
{
    return pokA.name < pokB.name;
}

int main()
{
    vector<Pokemon> pokemons;
    pokemons.push_back(Pokemon("Mighty", 300));
    pokemons.push_back(Pokemon("Wizard", 3400));
    pokemons.push_back(Pokemon("Lilly", 200));
    pokemons.push_back(Pokemon("Julio", 1200));

    cout << "==== Unsorted vector ====" << endl;
    for (auto pokemon: pokemons)
    {
        cout << pokemon << endl;
    }

    sort(pokemons.begin(), pokemons.end());

    cout << "==== Sorted vector ====" <<  endl;
    for (auto pokemon: pokemons)
    {
        cout << pokemon << endl;
    }

    cout << "==== Sorted by name ====" <<  endl;
    sort(pokemons.begin(), pokemons.end(),CompareName);
    for (auto pokemon: pokemons)
    {
        cout << pokemon << endl;
    }
    return 0;
}
