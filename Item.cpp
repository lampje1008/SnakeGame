#include "Constants.h"

using namespace std;

class Item {
public:
    int x;
    int y;

    Item() {
        x = 0;
        y = 0;
    }
};

class GrowthItem : public Item {
public:
    GrowthItem() : Item() { }
};

class PoisonItem : public Item {
public:
    PoisonItem() : Item() { }
};
