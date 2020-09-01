#include "SinhVien.h"
istream& operator>> (istream& i, SinhVien& sv)
{
	cout<< "nhap vao ho ten sinh vien\n";
	getline(cin, sv.hoTen);
	cout << "nhap vao diem Toan,Ly,Hoa\n";
	i >> sv.diemToan >> sv.diemLy >>sv. diemHoa;
	return i;
}
ostream& operator <<(ostream& o, SinhVien sv)
{
	o << sv.hoTen << endl;
	o << "Diem Toan= " << sv.diemToan << endl;
	o << "Diem Ly= " << sv.diemLy << endl;
	o << "Diem Hoa= " << sv.diemHoa << endl;
	o << "Diem TB= " << sv.diemTB() << endl;
	return o;
}
float SinhVien::diemTB()
{
	return (diemToan + diemLy + diemHoa) / 3;
}