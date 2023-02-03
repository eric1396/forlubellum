// ========================================================================= //
//  
// ========================================================================= //

// グローバル変数
static int aaa = 0;

// ------------------------------------------------------------------------- //
// クラス宣言
// ------------------------------------------------------------------------- //
class CSample
{
public:

    // コンストラクタ.
    CSample();

    // CSampleクラスのメンバ関数宣言
    void Execute( int aValue );
    void AttackPoint( int aValue );

    // CSampleクラスのメンバ変数
    int Attack();
    int mBBB;
    int mAttackPoint;
};

// コンストラクタ.
CSample::CSample()
    : mBBB( 0 )
    , mAttackPoint( 0 )
{
}

// 攻撃.
int CSample::Attack()
{
    return mAttackPoint;
}

// 攻撃力設定
void CSample::AttackPoint( int aValue )
{
    mAttackPoint = aValue;
}

// 実行
void CSample::Execute( int aValue )
{
    aaa = 100;
    mBBB = aValue;
}

// グローバル関数
void Challenge001()
{
    aaa = 2;    // グローバル変数 aaa はいくつからいくつ？ 0 → 2

    CSample sample1;
    CSample sample2;
 
    sample1.AttackPoint( 3 ); // sample1の mAttackPoint はいくつからいくつ？ 0 → 3
    sample2.AttackPoint( 5 ); // sample2の mAttackPoint はいくつからいくつ？ 0 → 5

    int damage1 = sample1.Attack(); // 戻り値は 3
    int damage2 = sample2.Attack(); // 戻り値は 5

    sample1.Execute( damage2 ); // aaa は   2 → 100、sample1のmBBB いくつからいくつ？ 0 → 5
    sample2.Execute( damage1 ); // aaa は 100 → 100、sample2のmBBB いくつからいくつ？ 0 → 3
}
