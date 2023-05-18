#include <iostream>
using namespace std;

int last_day_of_month(int month);

int main(){
	string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int month, tmp;
	int total =0;
	cin>>month>>total;
	if (month == 1){
		cout<<days[total%7];
		return 0;
	}
	for(int i = 0 ; i <month-1;i++){
		total+=last_day_of_month(i+1);
	}
	cout<<days[total%7];

	return 0;
}

int last_day_of_month(int month){
	int last_day;
	switch(month){
		case 2:
			last_day = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			last_day = 30;
			break;
		default :
			last_day = 31;
			break;
	}

	return last_day;
}