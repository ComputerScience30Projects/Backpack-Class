#include <iostream>
#include <vector>
#include <string>

enum COLOR { RED, BLUE, GREEN, ORANGE, VIOLET, YELLOW, BLACK, WHITE };
enum Size { SMALL, MEDIUM, LARGE };

class Backpack {

public:
    Backpack();
    ~Backpack();

    openBag();
    closeBag();
    putIn(std::string item);
    takeOut(std::string item);

private:
    COLOR _color;
    Size _size;
    std::vector<std::string> _items;
    
    bool open = false;
};

Backpack::Backpack()
{
    _color = RED;
    _size = MEDIUM;
    _items.pushback("Apple")
    _items.pushback("Flashlight")
    _items.pushback("Granola Bar")
}

int main()
{

}