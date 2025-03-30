// question 1


/*#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the side of the square: ";
    cin>>n;
    int area = n * n;
    cout<<"area of square = "<<area<<endl;
    return 0;

}
    */

// question - 2
/*
#include <iostream>

using namespace std;

int main() {
    float pencilCost;
    float penCost;
    float eraserCost;

    cout << "Enter the pencil cost: ";
    cin >> pencilCost;
    cout << "Enter the pen cost: ";
    cin >> penCost;
    cout << "Enter the eraser cost: ";
    cin >> eraserCost;

    float totalCost = pencilCost + penCost + eraserCost;
    float gstCost = totalCost * (18.0 / 100.0); // Corrected division

    cout << "Your bill = " << (totalCost + gstCost) << endl;

    return 0;
}*/

// Question 3
/*
#include<iostream>
using namespace std;

int main(){
    int principal;
    int rate;
    int time;

    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time amount: ";
    cin>>time;

    int si = (principal*time*rate)/100;

    cout<<"Your interest is "<<si<<endl;


}*/

// Question 4

#include<iostream>
using namespace std;

int main(){
    const float PI = 3.14; 
    float radius;

    cout<<"Enter the radius: ";
    cin>>radius;
    float area = PI*radius*radius;
    cout<<"area of circle = "<<area;
}