#include <iostream>
using namespace std;

int prize_money(int dice1, int dice2, int dice3, int dice4);

int main(){
	int n, d1, d2, d3, d4, tmp, max_prize=0;
	cin>>n;

	for(int i =0; i<n; i++){
		cin>>d1>>d2>> d3>> d4;
		tmp = prize_money(d1, d2, d3, d4);
		if (max_prize <tmp){
			max_prize = tmp;
		}
	}

	cout<<max_prize<<endl;

	return 0;
}

int prize_money(int dice1, int dice2, int dice3, int dice4){
	int money;
	int dice_count[] = {0,0,0,0,0,0};
	int freq = 0;
	int sec_freq = 0;
	int max_freq_num;
	int sec_freq_num;
	dice_count[dice1-1]++;
	dice_count[dice2-1]++;
	dice_count[dice3-1]++;
	dice_count[dice4-1]++;

	for(int i =0; i<6 ; i++){
		if (freq<=dice_count[i]){
			sec_freq = freq;
			sec_freq_num = max_freq_num;
			freq = dice_count[i];
			max_freq_num = i+1;
		}
	}

	switch(freq){
		case 4:
			money = max_freq_num*5000 + 50000;
			break;
		case 3:
			money = max_freq_num*1000 + 10000;
			break;
		case 2:
			if(sec_freq==2){
				money = max_freq_num*500 + sec_freq_num*500 + 2000;
			}else{
				money = max_freq_num*100 + 1000 ;
			}
			break;
		case 1:
			money = max_freq_num*100;
			break;
	}
/*
	cout<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"max_freq_num : "<<max_freq_num<< " freq : "<<freq<<endl;
	cout<<"sec_freq_num : "<<sec_freq_num<< " sec_req : " <<sec_freq<<endl;
	cout<<"money : "<<money<<endl;
	cout<<"-------------------------------"<<endl;
*/
	return money;
}