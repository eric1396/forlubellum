// ========================================================================= //
//  【モンスター】ピカチュウ (宣言).
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
