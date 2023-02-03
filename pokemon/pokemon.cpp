#include <iostream>

// ========================================================================= //
//  【モンスター】ピカチュウ.
// ========================================================================= //
class CPicachu
{
public:

    CPicachu();
    virtual ~CPicachu(); // デストラクタには virtual を付ける.

    int Attack();
    void Damage( int aDamagePoint );


private:

    int mLevel;         // レベル.
    int mHitPoint;      // HP.
    int mAttackPoint;   // 攻撃.
    int mDefensePoint;  // 防御.
};

// ------------------------------------------------------------------------- //
//  コンストラクタ.
// ------------------------------------------------------------------------- //
CPicachu::CPicachu()
    : mLevel( 1 ), mHitPoint( 35 ), mAttackPoint( 55 ), mDefensePoint( 40 )
{
    std::cout << "ピカチュウ誕生\n";

    std::cout << mLevel << "レベル\n";        
    std::cout << mHitPoint << "HP\n";
    std::cout << mAttackPoint << "攻撃\n";
    std::cout << mDefensePoint << "防御\n";
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
    std::cout << "10万ボルト！\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  ダメージ.
// ------------------------------------------------------------------------- //
void CPicachu::Damage( int aDamagePoint )
{
    mHitPoint -= aDamagePoint;
    std::cout << "ピカチュウはダメージを受けた！\n";
    std::cout << mHitPoint << "HP\n";
}

// ========================================================================= //
//  【モンスター】ミュウツー.
// ========================================================================= //
class CMewtwo
{
public:

    CMewtwo();
    virtual ~CMewtwo(); // デストラクタには virtual を付ける.

    int Attack();
    void Damage( int aDamagePoint );

private:

    int mLevel;         // レベル.
    int mHitPoint;      // HP.
    int mAttackPoint;   // 攻撃.
    int mDefensePoint;  // 防御.
};

static int a;

// ------------------------------------------------------------------------- //
//  コンストラクタ.
// ------------------------------------------------------------------------- //
CMewtwo::CMewtwo()
    : mLevel( 1 ), mHitPoint( 65 ), mAttackPoint( 105 ), mDefensePoint( 40 )
{
    std::cout << "ミュウツー誕生\n";

    std::cout << mLevel << "レベル\n";        
    std::cout << mHitPoint << "HP\n";
    std::cout << mAttackPoint << "攻撃\n";
    std::cout << mDefensePoint << "防御\n";
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
    std::cout << "サイコキネシス！\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  ダメージ.
// ------------------------------------------------------------------------- //
void CMewtwo::Damage( int aDamagePoint )
{   
    mHitPoint -= aDamagePoint;
    std::cout << "ミュウツーはダメージを受けた！\n";
    std::cout << mHitPoint << "HP\n";
}

// ------------------------------------------------------------------------- //
//  メイン.
// ------------------------------------------------------------------------- //
int main()
{
    CPicachu picachu;
    CMewtwo mewtwo;

    int picachuDamagePoint = picachu.Attack();
    mewtwo.Damage( picachuDamagePoint );

    int mewtwoDamagePoint = mewtwo.Attack();
    picachu.Damage( mewtwoDamagePoint );
}
