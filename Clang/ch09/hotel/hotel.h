/* hotel.h - ����⠭�� � ������� ��� �ணࠬ�� hotel.c */
#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.00
#define HOTEL3 155.00
#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "****************************"

// �����뢠�� ᯨ᮪ ��������� ��ਠ�⮢
int menu(void);

// �����頥� ������⢮ ��⮪, �� ���஥ १�ࢨ����� �����
int getnights(void);

// ������ �⮨����� � ��⮬ ��䮢 � ������⢠ ��⮪
// � �⮡ࠦ��� १���� ���᫥���
void showprice(double rate, int nights);