#include "mewtwo.h"
#include <iostream>

// ========================================================================= //
//  【モンスター】ミュウツー (定義).
// ========================================================================= //

// ------------------------------------------------------------------------- //
//  コンストラクタ.
// ------------------------------------------------------------------------- //
CMewtwo::CMewtwo()
    : mLevel( 1 ), mHitPoint( 65 ), mAttackPoint( 105 ), mDefensePoint( 40 )
{
    std::cout << "ミュウツー";
    std::cout << "誕生\n";
    std::cout << "レベル\t= " << mLevel        << "\n";        
    std::cout << "HP\t= "     << mHitPoint     << "\n";
    std::cout << "攻撃\t= "   << mAttackPoint  << "\n";
    std::cout << "防御\t= "   << mDefensePoint << "\n";
    std::cout << "\n";
}

// ------------------------------------------------------------------------- //
//  デストラクタ.
// ------------------------------------------------------------------------- //
CMewtwo::~CMewtwo()
{
}

// ------------------------------------------------------------------------- //
//  攻撃.
// ------------------------------------------------------------------------- //
int CMewtwo::Attack()
{
    std::cout << "ミュウツー" << "の" << "攻撃！";
    std::cout << "サイコキネシス！" << "\n";

    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  ダメージ.
// ------------------------------------------------------------------------- //
void CMewtwo::Damage( int aDamagePoint )
{   
    mHitPoint -= aDamagePoint;

    std::cout << "ミュウツー" << "は" << "攻撃を受けた！";
    std::cout << aDamagePoint << "ダメージ！" << "\n";
    std::cout << "残りHP = " << mHitPoint << "\n";
}
