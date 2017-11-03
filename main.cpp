#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool read(double *array, unsigned int size){
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    for(unsigned int i=0; i<size; ++i){
        if(!(stream>>array[i])){
            cout<<"An error has occured while reading input data."<<endl;
            return false;
        }
    }
    return true;
}

void bubble_sort(double *array, unsigned int size){
    for(unsigned int i=0; i<size-1; ++i){
        for(unsigned int j=0; j<size-i-1; ++j){
            if(array[j]>array[j+1]){
                swap(array[j+1], array[j]);
            }
        }
    }
}

int main(){
    unsigned int size;
    cin>>size;
    cin.get();
    double *array=new double[size];
    if(read(array, size)){
        bubble_sort(array, size);
        for(unsigned int i=0; i<size; ++i){
            cout<<array[i]<<" ";
        }
    }
    delete[]array;
    return 0;
}
