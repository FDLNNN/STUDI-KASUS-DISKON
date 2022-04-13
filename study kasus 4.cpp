#include <iostream>
using namespace std;
  
class Fibonacci {
  
public:
    int ubah(int n);
private:
	int i;
	int a, b, c;
};
  
int Fibonacci::ubah(int n)
{
    a=1;
    b=1;
  
    cout << a << " " << b;
  
    for (int i=1; i<=n-2; i++) {
        c= a+b;
        cout<< " "<<c;
  
        a=b;
        b=c;
    }
}
int main()
{
	int n;
    cout<<"Masukkan banyak bilangan : ";
    cin>>n;
  
    Fibonacci fbc;
    fbc.ubah(n);
    cout<<endl;
    return 0;
}
