#include <iostream>

using namespace std;

int main()
{
    int i=4;
    int w_old[3]={0,0,0}, w_new[3];
    int x[3],y, b = 1;

    while(i--){
        for(int i = 0; i < 2;i++){
            cout<<"x"<<i + 1<<" : ";
            cin>>x[i];
        }
        x[2] = b;

        if(x[0] == -1 && x[1] == -1){
            y = -1;
        }else if(x[0] == -1 && x[1] == 1){
            y = -1;
        }else if(x[0] == 1 && x[1] == -1){
            y= -1;
        }else{
            y = 1;
        }

        for(int i = 0;i < 3;i++){
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
        cout<<" ]\n";
    }

    return 0;
}
