#include <iostream>

using namespace std;

int main()
{
    int i=2;
    int w_old[10]= {0,0,0,0,0,0,0,0,0,0}, w_new[10];
    int x[10],y, b = 1;

    while(i--)
    {
        for(int i = 0; i < 9; i++)
        {
            cout<<"x"<<i + 1<<" : ";
            cin>>x[i];
        }
        x[9] = b;

        if(x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == -1 && x[4] == 1 && x[5] == -1 && x[6] == -1 && x[7] == 1 && x[8] == -1){
            y = 1;
        }else{
            y = -1;
        }

        for(int i = 0; i < 10; i++)
        {
            w_new[i] = x[i] * y;
        }
        for(int i = 0; i < 10; i++)
        {
            w_new[i] = w_old[i] + w_new[i];
            w_old[i] = w_new[i];
        }

        cout<<"Weight is [ ";
        for(int i = 0; i < 10; i++)
        {
            cout<<w_new[i]<<" ";
        }
        cout<<" ]\n";
    }
    return 0;
}
