 .#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int fst = 0, snd = 0;
    int num;
    cout << "請輸入商品個數";
    cin >> num;

	int pri[num], gain[num];
	for(int i = 0; i < num; i++){
		cout << "請輸入第"<<i+1<<"個商品的金額";
		cin >> pri[i];
	}
    int e = (int)pow(2,num), chart[num][e];
    
    int k = 0, l = 0;
    for(; k < num; k++){
        for(; l < e; l++){
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
	}
        int total[l] = {0}, p = 0, q = 0;
        for (; p < l; p++){
        	for (; q<k; q++){
        		if (chart[p][q] = 1){
				total[q] += pri[q];
				}
				
			}
		}
		
		int gain = 0, u = 0;
		for (; u < e; u++){
			if (toal[u] > gain){
				gain = total[u]; 
			}
		}
		
		while (gain != total[u]){
			u--;
		}
		
		while (total[u] != )
		
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
/*	int total[e] = {0};
	for(int m = 0; m < e; m++){
		for(int n = 0; n < num; n++){
			if(chart[n][m] == '0'){
				total[m] = total[m] + pri[n];
			}
		}
	}

	for(int o = 0; o < e; o++){
		if(total[o] > 100){
			total[o] = total[o] % 100;
		}
		//cout << total[o] <<endl;
		if(total[o] > 0){
		gain[o] = 100 - total[o];
		}
		cout << gain[o] <<endl;
	}
