#include<iostream>
using namespace std;

int main(){
    float sci;
    float math;
    float eng;

    cout<<"Enter english marks: ";
    cin>>eng;
    cout<<"Enter math marks: ";
    cin>>math;
    cout<<"Enter science marks: ";
    cin>>sci;

    float avg = ((sci+math+eng)/3);
    cout<<"avg marks = "<<avg<<endl;
    return 0;


}
