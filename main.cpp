#include <iostream>
#include <vector>
#include <string>

enum COLOR { RED, BLUE, GREEN, ORANGE, VIOLET, YELLOW, BLACK, WHITE };
enum SIZE { SMALL, MEDIUM, LARGE };

class Backpack {

public:
    Backpack();
    Backpack(COLOR color, SIZE size);
    ~Backpack();

    void openBag();
    void closeBag();
    void putIn(std::string item);
    void takeOut(std::string item);

private:
    bool _open = false;
    COLOR _color;
    SIZE _size;
    std::vector<std::string> _items;
    std::string getColorString();
    std::string getSizeString();
};

Backpack::Backpack()
{
    _color = RED;
    _size = MEDIUM;
}

Backpack::Backpack(COLOR color, SIZE size)
{
    _color = color;
    _size = size;
}

std::string Backpack::getColorString()
{
    switch (_color)
    {
        case RED:
            return "Red";
            break;

        case BLUE:
            return "Blue";
            break;

        case GREEN:
            return "Green";
            break;

        case ORANGE:
            return "Orange";
            break; 

        case VIOLET:
            return "Violet";
            break;

        case YELLOW:
            return "Yellow";
            break;

        case BLACK:
            return "Black";
            break;

        case WHITE:
            return "White";
            break;
    }
}

std::string Backpack::getSizeString()
{
    switch (_size)
    {
        case SMALL:
            return "Small";
            break;

        case MEDIUM:
            return "Medium";
            break;

        case LARGE:
            return "Large";
            break;
    }
}

void Backpack::openBag()
{
    std::string color = getColorString();
    std::string size = getSizeString();

    _open = true;

    std::cout << "The " << color << " " << size << "sized bag has been opened. This bag contains:\n";

    for(size_t i = 0; i < _items.size(); i++)
    {
        std::cout << _items[i] << std::endl;
    }
}

void Backpack::closeBag()
{
    std::string color = getColorString();
    std::string size = getSizeString();

    _open = false;

    std::cout << "The " << color << " " << size << "sized bag has been opened. This bag contains:\n";
    
    for(size_t i = 0; i < _items.size(); i++)
    {
        std::cout << _items[i] << std::endl;
    }
}

void Backpack::putIn(std::string item)
{
    _items.push_back(item);
    std::cout << item << " was added!" << std::endl;
}

void Backpack::takeOut(std::string item)
{
    for(size_t i = 0; i < _items.size(); i++)
    {
        if (_items[i] == item)
        {
            _items.erase(_items.begin() + i);
            std::cout << _items[i] << " was removed!" << std::endl;
        }
    }
}

int main()
{
}