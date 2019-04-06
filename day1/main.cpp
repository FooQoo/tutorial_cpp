// ヘッダーファイル
// クラスを利用できるようになる
#include <iostream>
// 名前空間
// stdはcoutを定義している
// クラスの上位版?
using namespace std;
 
/*
coutはオブジェクト
<< >> は入出力ストリーム
coutを通じて出力ストリームにhello worldを送る
endlは改行
*/

int main(){

    // 出力の例
    cout << "HelloWorld." << endl;
    std::cout << "HelloWorld!!" << std::endl;

    // 入力の例
    int a;
    cin >> a;
    cout << "a=" << a << endl;
    
    return 0;
}