//Pointers
/*
#include<iostream>
using namespace std;

int main(){
    int number = 10;
    int*ptr = &number;
        cout << "Value of number: " << number << endl;        // Outputs: 42
    cout << "Address of number: " << &number << endl;     // Outputs: Address of 'number'
    cout << "Value at ptr (dereferenced): " << *ptr << endl; // Outputs: 42
    cout << "Address stored in ptr: " << ptr << endl;      // Outputs: Address of 'number'

    // Changing the value using the pointer
    *ptr = 100;           // Change the value of 'number' using the pointer
    cout << "New value of number: " << number << endl;     // Outputs: 100

    return 0;
}


//accessing array using pointer
#include<iostream>
using namespace std;
int main(){
int arr[]= {10,20,30,40,50};
int *ptr = arr;
    cout<<"Using pointer to access array"<<endl;
    for(int i=0;i<5;i++){
    cout<<"Element "<<i <<":"<<*(ptr+i)<<endl;
        }
            return 0;

}

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int main(){
    int(*operation)(int,int);

    operation = add;
    cout<<"1+1 = "<<operation(1,1)<<endl;
    
    operation=subtract;
    cout<<"1-1 = " <<operation(1,1)<<endl;
    
    return 0;
    }
*/
#include<iostream>
using namespace std;

int main(){
    int* ptr = nullptr;

    if(ptr==nullptr){
        cout<<"Currently Null"<<endl;
            }
    else{
        cout<<"It is not null"<<endl;
    }
   
   int value = 5;
   ptr = &value;

   if(ptr == nullptr)
   {
    cout<<"It has null value"<<endl;
   }
   else{
    cout<<"It is not null"<<endl;
    cout<<"The value of pointer is "<<*ptr;
   }
   return 0;
}
