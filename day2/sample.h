// 条件コンパイル
// ifndef endif
// マクロが定義済みのみ真となる
#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class Sample
{
    public:
        void set(int num);
        int get();
    private:
        int m_num;
};
#endif