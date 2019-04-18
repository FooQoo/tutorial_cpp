#ifndef _COUNTER_H_
#define _COUNTER_H_
 
//  カウンタークラス
class Counter{
    private:
        //  カウント
        int num;
    public:
        //  コンストラクタ
        Counter();
        //  カウンタをリセット
        void reset();
        //  カウントされた回数を取得
        int getCount();
        //  1ずつカウント
        void count();
        void count(int num);
};
 
#endif // _COUNTER_H_