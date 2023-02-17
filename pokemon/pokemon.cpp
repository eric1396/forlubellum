#include "picachu.h"
#include "mewtwo.h"
#include <iostream>

// 宣言
void Battle( CPicachu * picachu, CMewtwo * mewtwo );

// ------------------------------------------------------------------------- //
//  バトル.
// ------------------------------------------------------------------------- //
void Battle( CPicachu * picachu, CMewtwo * mewtwo )
{
    int picachuDamagePoint = picachu->Attack();
    mewtwo->Damage( picachuDamagePoint );

    int mewtwoDamagePoint = mewtwo->Attack();
    picachu->Damage( mewtwoDamagePoint );
}

// ------------------------------------------------------------------------- //
//  メイン.
// ------------------------------------------------------------------------- //
int main()
{
    // インスタンス作る.
    CPicachu picachu;
    CMewtwo mewtwo;

    std::cout << "--- バトル開始 ---\n";

    // 作ったインスタンス同士を戦わせる.
    Battle( &picachu, &mewtwo );

    std::cout << "--- バトル終了 ---\n";
}
