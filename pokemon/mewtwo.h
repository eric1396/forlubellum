// ========================================================================= //
//  �y�����X�^�[�z�~���E�c�[ (�錾).
// ========================================================================= //
class CMewtwo
{
public:

    CMewtwo();
    virtual ~CMewtwo(); // �f�X�g���N�^�ɂ� virtual ��t����.

    int Attack();
    void Damage( int aDamagePoint );

private:

    int mLevel;         // ���x��.
    int mHitPoint;      // HP.
    int mAttackPoint;   // �U��.
    int mDefensePoint;  // �h��.
};
