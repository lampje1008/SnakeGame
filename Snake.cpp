#define MIN_LENGTH 3
#define MAX_LENGTH 30

#define UP    0
#define DOWN  1
#define RIGHT 2
#define LEFT  3

class Snake {
private:
    int length;
    int direction;
    int position[MAX_LENGTH][2];

    int tailTrace[2];

    void setLengthTo(const int length) {
        if (length >= MIN_LENGTH &&
            length <= MAX_LENGTH)
            this->length = length;
    }

    void setPositionOf(const int index, const int x, const int y) {
        position[index][0] = x;
        position[index][1] = y;
    }

public:
    Snake(const int length, const int direction, const int x, const int y) {
        setLengthTo(length);
        setDirectionTo(direction);
        for (int index = 0; index < MAX_LENGTH; ++index)
            if (index < length)
                switch (direction) {
                case UP:    setPositionOf(index, x, y - index); break;
                case DOWN:  setPositionOf(index, x, y + index); break;
                case RIGHT: setPositionOf(index, x - index, y); break;
                case LEFT:  setPositionOf(index, x + index, y); break;
                }
            else setPositionOf(index, -1, -1);
        tailTrace[0] = tailTrace[1] = -1;
    }

    void increaseLength() {
        ++length;
        position[length][0] = tailTrace[0];
        position[length][1] = tailTrace[1];
    }

    void decreaseLength() {
        --length;
        if (length >= MIN_LENGTH)
            position[length][0] = position[length][1] = -1;
    }

    void move() {
        tailTrace[0] = position[length - 1][0];
        tailTrace[1] = position[length - 1][1];
        for (int index = length - 1; index > 0; --index) {
            position[index][0] = position[index - 1][0];
            position[index][1] = position[index - 1][1];
        }
        switch (direction) {
        case UP:    ++position[0][1]; break;
        case DOWN:  --position[0][1]; break;
        case RIGHT: ++position[0][0]; break;
        case LEFT:  --position[0][0]; break;
        }
    }

    int const getLength() {
        return length;
    }

    int const getDirection() {
        return direction;
    }

    int* const getPositionOf(const int index) {
        return position[index];
    }

    void setDirectionTo(const int direction) {
        if (direction >= 0 &&
            direction <= 3)
            this->direction = direction;
    }

    void setPositionTo(const int x, const int y) {
        setPositionOf(0, x, y);
    }
};
