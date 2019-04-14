#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2D{
    // サブクラスのみアクセスを許す場合，protected
    protected:
        int x;
        int y;
        void init();
    public:
        Vector2D();
        void setValue(int x, int y);
        int getX();
        int getY();
};

#endif