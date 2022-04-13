#include <iostream>
  using namespace std;

  int main(){
  /*
  Jika nilai >= 90  lulus sangat memuaskan
  Jika nilai >= 80  lulus memuaskan
  Jika nilai >= 75  cukup
  tidak boleh > 100
  tidak boleh < 0
  */
  int nilai;
  cout<<"Masukkan Nilai = " ; cin>>nilai;
  if (nilai > 100) {
      cout<<"jangan dong";
  }
  else if (nilai >= 90) {
      cout<<"Lulus sangat memuaskan";
  }
  else if (nilai >= 80) {
      cout<<"lulus memuaskan";
  }
  else if (nilai >= 75) {
      cout<<"cukup";
  }
  else if (nilai < 0) {
      cout<<"belajar dek";
  }
  else {
      cout<<"tidak lulus";
  }
  

  return 0;
}//end of main function
