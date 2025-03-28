#include<iostream>
using namespace std;

class Pokemon {
    private:
    string name;
    string type;
    int hp;
    public:
    // void getPokemonDetails(string pokemon_name, string pokemon_type, int pokemon_hp) {
    //     name = pokemon_name;
    //     type = pokemon_type;
    //     hp = pokemon_hp;
    // }
    void getPokemonDetails() {
        cout << "enter pokemon name: " << endl;
        cin >> name;
        cout << "enter pokemon type: " << endl;
        cin >> type;
        cout << "enter pokemon hp: "  << endl;
        cin >> hp;
    }
    void displayPokemonDetails() {
        cout << "pokemon name: " << name << endl;
        cout << "pokemon type: " << type << endl;
        cout << "pokemon health points: " << hp << endl;
    }
};

int main() 
{
Pokemon PokemonDetails[3];
for(int i=0; i <3; i++)
{
   // PokemonDetails[i].getPokemonDetails("Pikachu", "Electric", 100);
   PokemonDetails[i].getPokemonDetails();
}
for(int i=0; i <3; i++)
{
   PokemonDetails[i].displayPokemonDetails();
}
return 0;
}