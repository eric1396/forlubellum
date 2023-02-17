#include "picachu.h"
#include <iostream>

// ========================================================================= //
//  【モンスター】ピカチュウ (定義).
// ========================================================================= //

// ------------------------------------------------------------------------- //
//  コンストラクタ.
// ------------------------------------------------------------------------- //
CPicachu::CPicachu()
    : mLevel( 1 ), mHitPoint( 35 ), mAttackPoint( 55 ), mDefensePoint( 40 )
{
    std::cout << "ピカチュウ誕生\n";
    std::cout << "レベル\t= " << mLevel        << "\n";        
    std::cout << "HP\t= "     << mHitPoint     << "\n";
    std::cout << "攻撃\t= "   << mAttackPoint  << "\n";
    std::cout << "防御\t= "   << mDefensePoint << "\n";
    std::cout << "\n";
}

// ------------------------------------------------------------------------- //
//  デストラクタ.
// ------------------------------------------------------------------------- //
CPicachu::~CPicachu()
{
}

// ------------------------------------------------------------------------- //
//  攻撃.
// ------------------------------------------------------------------------- //
int CPicachu::Attack()
{
    std::cout << "ピカチュウ" << "の" << "攻撃！";
    std::cout << "１０万ボルト！" << "\n";

    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  ダメージ.
// ------------------------------------------------------------------------- //
void CPicachu::Damage( int aDamagePoint )
{
    mHitPoint -= aDamagePoint;

    std::cout << "ピカチュウ" << "は" << "攻撃を受けた！";
    std::cout << aDamagePoint << "ダメージ！" << "\n";
    std::cout << "残りHP = " << mHitPoint << "\n";
}
