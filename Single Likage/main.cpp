#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void likage_algo(int limit, string name[]);
void single_likage(int limit, string name[]);
string toString(int number);

float cluster[100][100];
int main()
{
    int total;
    cout<<"How many? : ";
    cin>>total;
    total++;

    int X[total], Y[total];
    string name[total];

    cout<<"Name  X  Y\n";
    for(int i = 1; i < total; i++){
        cin>>name[i]>>X[i]>>Y[i];
    }

    for(int i = 1; i < total; i++){
        for(int j = 1; j < total; j++){
            cluster[i][j] = sqrt((abs(X[i] - X[j]) * abs(X[i] - X[j])) + (abs(Y[i] - Y[j]) * abs(Y[i] - Y[j])));
        }
    }

    likage_algo(total, name);
    single_likage(total, name);

    return 0;
}

void single_likage(int limit, string name[]){

    int small = 1000000000;
    string index;

    for(int i = 1; i < limit; i++){
        for(int j = 1; j < limit; j++){
            if((cluster[i][j] != 0) && (cluster[i][j] <= small)){
                small = cluster[i][j];
                index = toString(i);
                index += ", ";
                index +=  toString(j);

                x1 = i;
                y1 = j;
            }
        }
        cout<<index<<endl;
    }

}


void likage_algo(int limit, string name[]){

    cout<<"\t";
    for(int j = 1; j < limit; j++){
        cout<<name[j]<<"\t\t";
    }
    cout<<"\n";
    for(int i = 1; i < limit; i++){
        cout<<name[i]<<"\t";
        for(int j = 1; j < limit; j++){
            cout<<cluster[i][j]<<"\t\t";
        }
        cout<<"\n";
    }

}

string toString(int number){
    string s;
    char buffer[100];
    sprintf(buffer, "%d", number);
    s = buffer;
    return s;
}
