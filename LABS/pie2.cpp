#include<iostream>
#include<cmath>     // this is for pow()
using namespace std;
int main ()
{
    double numofTerms;
    double pi=0;

    cout<<"Enter the number of terms in the series: ";
    cin>>numofTerms;

    for (double k=0.0; k<=numofTerms; k++) {
        pi += 4.0 * ( pow((-1.0),k) ) * ( 1.0 / (2.0*k + 1) );
        cout<<"k= "<<k<<" ==> pi= "<<pi<<endl;
    }

    //system("pause");
    return 0;
}