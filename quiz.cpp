#include<iostream>
using namespace std;
int map[5][5]={
        {0,0,0,0,0},
        {0,0,1,0,0},    //      0---🟩
        {0,1,1,0,0},    //      1---🧱
        {0,0,0,2,0},    //      2---🔥
        {0,0,0,0,0},
    };
void display(void){///      skndf
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout << ((map[i][j]==0)?"🟩":(map[i][j]==1)?"🧱":"🔥");
        }
        cout << endl;
    }
}
void spread(){///       Fire Spread
    int mapp[5][5];
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            mapp[i][j]=map[i][j];
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            if(mapp[i][j]==2){
                for(int k=-1;k<2;k=k+2){
                    if(mapp[i+k][j]!=1){
                        map[i+k][j]=2;
                    }if(mapp[i][j+k]!=1){
                        map[i][j+k]=2;
                    }   
                }
            }
        }
    }
}
bool isDead(){
    bool isAlive=false;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            if(map[i][j]==0){
                isAlive=true;
                // map[i][j]=2;//=============testing
                break;
            }
        }
        if(isAlive)break;
    }
    return !isAlive;
}
int main(){    
    int score=0;
        cout<<"Arrangement"<<endl;
        display();
    for(int i=1;i<=8;i++){
        spread();
        if(isDead()){
            break;
        }
        score=i;
    }
    if(score>=8){
        score=-1;
    }
    cout<<"Score is "<<score;
    return 0;
}