#include <iostream>

using namespace std;

int main()
{
    int row;
    cout<<"How many row : ";
    cin>>row;
    int distance[row], rank[row], x1[row], x2[row], K, X1, X2;
    string decision[row], classification[row];

    cout<<"Enter the values\nx1  x2  classification\n";

    for (int i = 0; i < row; i++){
        cin>>x1[i]>>x2[i]>>classification[i];
    }

    cout<<"Give the value of X1, X2 and K\n";
    cout<<"X1 : ";
    cin>>X1;
    cout<<"X2 : ";
    cin>>X2;
    cout<<"K : ";
    cin>>K;

    for(int i = 0; i < row; i++){
        distance[i] = ((x1[i]-X1) * (x1[i]-X1)) + ((x2[i] - X2) * (x2[i] - X2));
        rank[i] = i + 1;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row - 1; j++){
            if(distance[j] > distance[j + 1]){
                int temp = distance[j];
                distance[j] = distance[j + 1];
                distance[j + 1] = temp;

                temp = x1[j];
                x1[j] = x1[j + 1];
                x1[j + 1] = temp;

                temp = x2[j];
                x2[j] = x2[j + 1];
                x2[j + 1] = temp;


                string temp_s = classification[j];
                classification[j] = classification[j + 1];
                classification[j + 1] = temp_s;
            }
        }
    }
    for(int i = 0; i < row; i++){
        if(rank[i] <= K){
            decision[i] = "YES";
        }
        else{
            decision[i] = "NO";
            classification[i] = "x";
        }
    }

    int good = 0, bad = 0;
    for(int i = 0; i < row; i++){
        if(classification[i] == "Good"){
                good++;
        }
        else if(classification[i] == "Bad"){
            bad++;
        }
    }

    cout<<"x1\tx2\tDistance\tRank\tDecision\tClassification\n";
    for (int i = 0; i < row; i++){
        cout<<x1[i]<<"\t"<<x2[i]<<"\t"<<distance[i]<<"\t\t"<<rank[i]<<"\t"<<decision[i]<<"\t\t"<<classification[i]<<"\n";
    }
    string ans;
    ans = (good > bad)? "Good" : "Bad";
    cout<<"\n\nAnswer is "<< ans;

    return 0;
}

