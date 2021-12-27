#include <iostream> 
using namespace std;

//Mutiara Callista Pramestya
//2117051013
//Post Test 3

int main () {
int K;
	
	cout<< "Masukkan tahun :" ;
	cin>> K ;
	
	if  (K%400==0) {
		cout<< "Tahun " <<K<< " adalah tahun Kabisat" ;
	}else if (K%4 == 0){
		cout << "Tahun " <<K<< " adalah tahun Kabisat";
    } else if (K%100==0) {
        cout<<"Bukan tahun Kabisat" ;
	} else {
		cout<<"Bukan tahun Kabisat" ;
		
	}
	
	return 0;
	
}

	
	
	
	
	

