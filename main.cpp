#include <iostream>

using namespace std;

int Hailstone(int x);
int main() {

    int x = 0;
    cin>>x;
    cout<<"Hailstone:"<<Hailstone(x)<<endl;
    return 0;
}
int Hailstone(int x) {
    if(x<=1)return 1;
    else if(x%2==0)return Hailstone(x/2);
    else return Hailstone(3*x+1);

}