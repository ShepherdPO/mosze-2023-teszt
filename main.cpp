#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS félre írva
    std::cout << '1-100 ertekek duplazasa' //' használata " helyett, nincs sorzárás
    for (int i = 0;)  //Syntax hiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //végtelen ciklus
    {
        std::cout << "Ertek:" //félkész kiírás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs kezdőérték
    for (int i = 0; i < N_ELEMENTS, i++) //, használata ; helyett
    {
        atlag += b[i] //nincs sorzárás
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
