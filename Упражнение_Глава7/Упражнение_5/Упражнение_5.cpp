// cardaray.cpp
// класс игральных карт
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit { clubs, diamonds, hearts, spades };
// от 2 до 10 обычные числа
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
/////////////////////////////////////////////////////////////
class card
{
private:
    int number;
    Suit suit;
public:
    card() // конструктор
    { }
    void set(int n, Suit s) // установка значения
    {
        suit = s; number = n;
    }
    void display();          // показ карты
};
/////////////////////////////////////////////////////////////
void card::display()
{
    if (number >= 2 && number <= 10)
        cout << number;
    else
    {
        switch (number)
        {
        case jack: cout << 'J'; break;
        case queen: cout << 'Q'; break;
        case king: cout << 'K'; break;
        case ace: cout << 'A'; break;
        }
    }
    switch (suit)
    {
    case clubs: cout << static_cast<char>(5); break;
    case diamonds: cout << static_cast<char>(4); break;
    case hearts: cout << static_cast<char>(3); break;
    case spades: cout << static_cast<char>(6); break;
    }
}
/////////////////////////////////////////////////////////////
int main()
{
    setlocale(0, "");
    card deck[52];
    int j;
    cout << endl;
    srand(time(NULL));     // инициализируем генератор случайных чисел
    for (j = 0; j < 52; j++)
    {
        int k = rand() % 52;     // выбираем случайную карту
        card temp = deck[j];    // и меняем ее с текущей
        deck[j] = deck[k];
        deck[k] = temp;
    }
    // показываем перемешанную колоду
    cout << "\nПеремешанная колода:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << "  ";
        if (!((j + 1) % 13)) // начинаем новую строку после каждой 13-й карты
            cout << '\n\n';
    }
    card hands[4][13]; // для 13 карт на руки каждого из 4 игроков
    int i;             // второй индекс для двумерного массива
    int n = 0;         // номер карты в колоде

    // раздача карт в бридже происходит по одной каждому из игроков по кругу,
    // то есть всего 13 кругов раздачи по 1 карте каждому из игроков за круг
    for (j = 0; j < 13; j++)    // цикл 13 кругов раздачи карт
        for (i = 0; i < 4; i++) // цикл раздачи по 1 карте каждому из игроков
            hands[i][j] = deck[n++];

    // покажем руки каждого из 4 игроков на экране
    for (i = 0; i < 4; i++)
    {
        wcout << L"\nРука (группа карт) " << i + 1 << L"-го игрока:\n";
        for (j = 0; j < 13; j++)
        {
            hands[i][j].display();
            if (j + 1 < 13) wcout << L' '; else wcout << endl;
        }
    }

    return 0;
}

