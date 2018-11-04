#include<iostream>
using namespace std;

int main(){

    //declaration of variables in int
    int x;
    int *p;

    //declaration of variables in char
    char y;
    char *q;

    //declaration of variables in bool
    bool z;
    bool *r;

    //declaration of variables in float
    float a;
    float *s;

    //declaration of variables in double
    double b;
    double *t;

    //Printing out the sizes of each variables and pointer variables.
    cout<<"size of int:"<<sizeof(x)<<" "<<"and its pointer is"<<sizeof(p)<<endl;

    cout<<"size of char:"<<sizeof(y)<<" "<<"and its pointer is"<<sizeof(q)<<endl;

    cout<<"size of bool:"<<sizeof(z)<<" "<<"and its pointer is"<<sizeof(r)<<endl;

    cout<<"size of float:"<<sizeof(a)<<" "<<"and its pointer is"<<sizeof(s)<<endl;

    cout<<"size of double:"<<sizeof(b)<<" "<<"and its pointer is"<<sizeof(t)<<endl;

}
