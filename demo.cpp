#include <iostream>
#include <math.h>
using namespace std;

int main()
{  //AREA OF CIRCLE
    //     float r,area;
    //     cout<<"Enter radius ";
    //     cin>>r;
    //     area=(float)22/7 * r * r;
    //     cout<<"area is "<<area<<endl;
   
   //ROOTS 
    int a, b, c;
    float root1, root2;
    cout << "Enter 3 values";
    cin >> a >> b >> c;

    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << root1 << " " << root2 << endl;
    

    return 0;
}