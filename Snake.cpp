#define SYS_MIN_LENGTH 1
#define SYS_MAX_LENGTH 30

#define UP    0
#define DOWN  1
#define RIGHT 2
#define LEFT  3

class Snake {
private:
    static int minLength;
    static int goalLength;

    int length;
    int direction;
    int position[SYS_MAX_LENGTH][2];

    int tailTrace[2];

public:
    Snake(int length_, int direction_, int x, int y, int minLength_, int goalLength_) {
        length = length_;
        direction = direction_;

        for (int i = 0; i < SYS_MAX_LENGTH; ++i)
            if (i < length)
                switch (direction) {
                case UP:    position[i][0] = x; position[i][1] = y - i; break;
                case DOWN:  position[i][0] = x; position[i][1] = y + i; break;
                case RIGHT: position[i][0] = x - i; position[i][1] = y; break;
                case LEFT:  position[i][0] = x + i; position[i][1] = y; break;
                }

            else position[i][0] = position[i][1] = -1;

        minLength = minLength_;
        goalLength = goalLength_;

        tailTrace[0] = tailTrace[1] = -1;
    }

    void increaseLength() {
        ++length;
        if (length <= goalLength) {
            position[length][0] = tailTrace[0];
            position[length][1] = tailTrace[1];
        }
    }

    void decreaseLength() {
        --length;
        if (length >= minLength)
            position[length][0] = position[length][1] = -1;
    }

    void move() {
        tailTrace[0] = position[length - 1][0];
        tailTrace[1] = position[length - 1][1];

        for (int i = length - 1; i > 0; --i) {
            position[i][0] = position[i - 1][0];
            position[i][1] = position[i - 1][1];
        }

        switch (direction) {
        case UP:    ++position[0][1]; break;
        case DOWN:  --position[0][1]; break;
        case RIGHT: ++position[0][0]; break;
        case LEFT:  --position[0][0]; break;
        }
    }

    int getLength() {
        return length;
    }

    int getDirection() {
        return direction;
    }

    int* getPositionOf(int index = 0) {
        return position[index];
    }

    void setDirectionTo(int direction_) {
        if (0 <= direction_ <= 3)
            direction = direction_;
    }

    void setPositionTo(int x, int y, int index = 0) {
        position[index][0] = x;
        position[index][1] = y;
    }

    void setLimits(int minLength_, int goalLength_) {
        if (length >= SYS_MIN_LENGTH)
            minLength = minLength_;

        if (length <= SYS_MAX_LENGTH)
            goalLength = goalLength_;
    }
};
