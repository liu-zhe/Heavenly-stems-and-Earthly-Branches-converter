//v1.1
#include <iostream>
using namespace std;

int main()
{
	int year {};
	bool done {false};
	const char* sky[] {"癸", "甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬"};
	const char* land[] {"亥", "子", "丑" ,"寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌"};
	do
	{
		cout<<"输入公元年：";
		cin>>year;
		if (year < 4)
		{
			cout<<"您输入的时间太早了！"<<endl;
			break;
		}else
			done = false;

		int&& years {abs(year % 60 - 3)};
		int&& sky_years {years % 10};
		int&& land_years {years % 12};

		cout<<"公元"
			<<year
			<<"年是农历"
			<<sky[sky_years]
			<<land[land_years]
			<<"年"
			<<endl;

		char dc {};
		cout<<"是否退出？(y/n):";
		cin>>dc;
		done = (dc=='n' || dc =='N');
		cout<<endl;

	}while (done);
	return 0;
}
