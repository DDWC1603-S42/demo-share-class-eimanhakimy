#include <iostream> 
using namespace std;

class csifirdua
{
	int x;
	int y;
     public:
	 void set_val(int,int);
	 int hasilDarabdua()
	 {
	 	return x*y;
	 } 	
};
void csifirdua::set_val(int a,int b)
{
	cout << "Sila Letakkan Nombor Yang Ingin Darab Dua" << endl;

	x=a;
	y=b;
	cout <<" Nombor Pertama : " << endl;
	cin>>x;
	cout << "Nombor Kedua :" << endl;
	cin>>y;
}

 int main()

{
   csifirdua oA1;
   oA1.set_val(5,6);
   cout<<"Hasil Darab Dua   :"<<oA1.hasilDarabdua()<<endl;
}
