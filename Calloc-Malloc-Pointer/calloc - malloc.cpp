#include <iostream>
#include <cstdlib>
#include <cstring>
char *tersptr ;
void ters_yaz(char *cp){
	
	int uzunluk = strlen(cp) - 1;
	tersptr = (char*)calloc(uzunluk,sizeof(char));
	for( int i=uzunluk; i >= 0; i--){
		tersptr[uzunluk -i] = cp[i];
		
	}

}
using namespace std;
int main (){
	char *metin;
	metin = "bilisim";
	ters_yaz(metin);
	
	cout << tersptr;
	
	
	
	
	
}
