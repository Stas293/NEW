/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class UFO{
    public:
    int height;
    int width;
    int weight;
    int speed;
    int area;
    UFO(int UFO_height, int UFO_width, int UFO_weight, int UFO_speed, int UFO_area){
        setSizes(UFO_height, UFO_width, UFO_weight, UFO_speed, UFO_area);
    }
    void setSizes(int UFO_height, int UFO_width, int UFO_weight, int UFO_speed, int UFO_area){
        height=UFO_height;
        width=UFO_width;
        weight=UFO_weight;
        speed=UFO_speed;
        area=UFO_area;
    }
    void message(){
        cout<<"Our UFO is: height "<<height<<", width "<<width<<", weight "<<weight<<", speed "<<speed<<endl;
};
};

class COW{
    public:
    string input{};
    int heightC;
    int speed;
    int speedC;
    int hole;
    COW(int COW_heightC, int COW_speedC, int COW_hole){
        setSpecs(COW_heightC, COW_speedC, COW_hole);
    }
    void setSpecs(int COW_heightC, int COW_speedC, int COW_hole){
        heightC=COW_heightC;
        speedC=COW_speedC;
        hole=COW_hole;
    }
    void answers(){
    cout<<"Please, intput height and speed of our cow"<<endl;
    cin>>heightC>>speedC;
    cout<<"So, do you think, that UFO will catch our COW, or it will not? Y/N"<<endl;
    cin>>input;
    if(input=="N"){
        if(heightC>hole||speedC>speed){
            cout<<"You are right. :)";
        }
        else{
            cout<<"You`re not right. :(";
        }
    }
    if(input=="Y"){
        if(heightC<hole||speedC<speed){
            cout<<"You are right. :)";
        }
        else{
            cout<<"You`re not right. :(";
        }
    }
    cout<<endl;
    };
};

class FAF{
    public:
    string input_KEY{};
    int n;
    int a;
    int speed;
    int omg=0;
    FAF(int FAF_n){
        setNum(FAF_n);
    }
    void setNum(int FAF_n){
        n=FAF_n;
    }
    void asks(){
        cout<<"Maybe, you wanna play race game with your UFO? How many rivals you wanna have?"<<endl;
        cin>>n;
    };
    vector <int> myVector;
    void think(){
    for(int i=0; i<n; i++){
        cout<<"Enter the speed of "<<i+1<<" opponent"<<endl;
        cin>>a;
        myVector.push_back(a);
    }
    for(int i=0; i<n; i++){
        if(myVector[i]>speed){
            omg++;
        }
    }
    if(omg>0){
        cout<<"So, our UFO will lose "<<omg<<" times";
    }
    else{
        cout<<"Our UFO is a beast";
    }
    cout<<endl;
    };
};

int main()
{
    int height;
    int width;
    int weight;
    int speed;
    int area;
    int heightC;
    int speedC;
    int n;
    cout<<"Please, enter height, width, weight, speed, area of our UFO"<<endl;
    cin>>height>>width>>weight>>speed>>area;
    UFO ui(height, width, weight, speed, area);
    ui.message();
    int hole=0.35*area;
    COW my(heightC, speedC, hole);
    my.answers();
    FAF riv(n);
    riv.asks();
    riv.think();
    return 0;
}


