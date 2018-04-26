#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int fst = 0, snd = 0;
    int num;
    cout << "請輸入商品個數";
    cin >> num;

/*	int pri[num], gain[num];
	for(int i = 0; i < num; i++){
		cout << "請輸入第"<<i+1<<"個商品的金額";
		cin >> pri[i];
	}*/
    int chart[num][(int)pow(2,num)];
    for(int k = 0; k < num; k++){
        for(int l = 0; l < (int)pow(2,num); l++){
            if(k == 0){
                if((l % 2) == 0){
                    chart[k][l] = 0;
                }else if((l % 2 ) == 1){
                    chart[k][l] = 1;
                }
            }else if(k != 0){
                for(int m = 1; m <= k; m++){
                    if ((l / (int)pow(2,m)) % 2 == 0){
                        chart[k][l] = 0;
                    }
                    else{
                        chart[k][l] = 1;
                    }
                }
            }

            cout << chart[k][l];

        }
        cout << endl;
        s
    }
/*
	0	1	k
0	0	0
1	1	1
2	0
3	1

l














	*/
    /*之後用掉
    int k = 0,l = 0;
    for (int q = 0; q <a; q++){
        cout << chart[k][l];
        k++;
        if (q>num){
            cout <<"\n";
            l++;
        }
    }
    */
/*	int total[(int)pow(2,num)] = {0};
	for(int m = 0; m < (int)pow(2,num); m++){
		for(int n = 0; n < num; n++){
			if(chart[n][m] == '0'){
				total[m] = total[m] + pri[n];
			}
		}
	}

	for(int o = 0; o < (int)pow(2,num); o++){
		if(total[o] > 100){
			total[o] = total[o] % 100;
		}
		//cout << total[o] <<endl;
		if(total[o] > 0){
		gain[o] = 100 - total[o];
		}
		cout << gain[o] <<endl;
	}*/




}
/*
	1	2	3	4	5
a
b



00000
00001
00010
00011
00100

*/