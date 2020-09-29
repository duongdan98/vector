#include"Time.h"
int main()
{
	Time t1(1, 25, 40), t(15, 6, 50);6++++
	t1.HienThi();
	t.HienThi();
	Time t2= Cong(t1,t);
	Time t3=t1.cong(3600);
	Time t4 = Cong(t1, 15000);
	t2.HienThi();
	t3.HienThi();
	t4.HienThi();
	return 0;
}