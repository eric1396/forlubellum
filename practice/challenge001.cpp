// ========================================================================= //
//  
// ========================================================================= //

// �O���[�o���ϐ�
static int aaa = 0;

// ------------------------------------------------------------------------- //
// �N���X�錾
// ------------------------------------------------------------------------- //
class CSample
{
public:

    // �R���X�g���N�^.
    CSample();

    // CSample�N���X�̃����o�֐��錾
    void Execute( int aValue );
    void AttackPoint( int aValue );

    // CSample�N���X�̃����o�ϐ�
    int Attack();
    int mBBB;
    int mAttackPoint;
};

// �R���X�g���N�^.
CSample::CSample()
    : mBBB( 0 )
    , mAttackPoint( 0 )
{
}

// �U��.
int CSample::Attack()
{
    return mAttackPoint;
}

// �U���͐ݒ�
void CSample::AttackPoint( int aValue )
{
    mAttackPoint = aValue;
}

// ���s
void CSample::Execute( int aValue )
{
    aaa = 100;
    mBBB = aValue;
}

// �O���[�o���֐�
void Challenge001()
{
    aaa = 2;    // �O���[�o���ϐ� aaa �͂������炢���H 0 �� 2

    CSample sample1;
    CSample sample2;
 
    sample1.AttackPoint( 3 ); // sample1�� mAttackPoint �͂������炢���H 0 �� 3
    sample2.AttackPoint( 5 ); // sample2�� mAttackPoint �͂������炢���H 0 �� 5

    int damage1 = sample1.Attack(); // �߂�l�� 3
    int damage2 = sample2.Attack(); // �߂�l�� 5

    sample1.Execute( damage2 ); // aaa ��   2 �� 100�Asample1��mBBB �������炢���H 0 �� 5
    sample2.Execute( damage1 ); // aaa �� 100 �� 100�Asample2��mBBB �������炢���H 0 �� 3
}
