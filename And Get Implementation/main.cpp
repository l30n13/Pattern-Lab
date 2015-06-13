#include <iostream>

using namespace std;

int main()
{
    int i=4,x[4][3],y, b = 1, w[2]={0,0};
    int w_old[3]={0,0,0}, w_new[3];

    while(i--){
        cout<<"x1 x2\n";
        for(int i =0; i < 4; i++){
            for(int j = 0; j < 2;j++){
            cin>>x[i][j];
            }
            x[i][2] = b;
        }

        for(int j = 0; j < 2; j++){
            for(int i = 3; i >= 0; i--){
                w[j] -= x[i][j];
            }
        }

        /*for(int i = 0;i < 3;i++){
            w_new[i] = x[i] * y;
        }
        for(int i = 0;i < 3;i++){
            w_new[i] = w_old[i] + w_new[i];
            w_old[i] = w_new[i];
        }

        cout<<"Weight is [ ";
        for(int i = 0;i < 3;i++){
            cout<<w_new[i]<<" ";
        }
        cout<<" ]\n";*/
    }

    return 0;
}
