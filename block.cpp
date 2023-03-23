#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int llI;
typedef long double lD;
struct Data{
    llI* Number;
    llI* my_Address;
    llI* to_Address;
    lD* amount_Sent;
    lD* amount_Left;
    lD* stake;
};
class Node{
public:
    struct Data data;
    Node(long long int* Number, long long int* Address){
        data = {Number, Address};

    }

    Node* next = nullptr;
};

class DAG{
public:
    Data data;
    bool validate(){
        
        return true;
    }
    bool insert(data *vals){
        validate(vals);
    }
};
int main(int argc, char *argv[]){

    long long int* val  = new long long int(123);
    Node *obj1 = new Node(val, val);
    long long int* gal = obj1 ->data.Number;
    cout<<*gal<<endl;
    return 0;
}