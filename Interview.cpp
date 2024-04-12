// class a {
//  mc  public : 

//     int a ;
//     double b ;
//     arr[6];
    
// };
// class b {
//     friend class a;


// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>

template <class T, class U>

class T {
    public :
    int *arr ;
    int n 
    T (int *array , int x ) : arr(array) , n(x) {}
};

class U : public T {
    public:
    int  *arr1 ;
    int m ;
    U (int *array1, int y): T(array1,y),arr1(array1) , m (y) {}  // calling the base constructor
    
};

int mergedArrays (int arr[],int x, int arr1[], int y , int merged ) {

    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while (i<x && j<y) {
        if (arr[i]<arr1[j]) {
            merged[k++] = arr[i+1];
        }else {
            merged[k++] = arr1[j++1] ;
        }
    }
    
    
    for (int i= 0; i<x; i++){
        int merge [k++] = int arr[i++] ;
    }
}


int main() {
    //  Write C++ code here
    // std::cout << "Try programiz.pro";
    
    int arr [x];
    int x = sizeof(arr) /sizeof(arr[0]) ;

    cout<<"insert no of elements "<<endl;
    cin>>x;
    cout<<"insert array elements " <<endl;
    for (int i = 0; i<x ; i++) {
        cin>>arr[i];
    }
    
    int arr1[y] ; 

    int y = sizeof(arr1) / sizeof(arr1[0]) ;   // enter size of the array is diveded by the size of the first element of the array 


    cout<<"insert arr1 no of elements "<<endl;
    cin>>y;
    cout<<"arr1 elements content"<<endl;
    for (int j = 0 ; i<y ; i++){
        cin>>arr1[j];
    }
    
    T t(arr,x) ;
    U u(arr1,y) ;
    
    
    
    
    
      

    return 0;
}


