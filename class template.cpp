#include<iostream>
class Silah{
	public:
	int SeriTek=0;
	float GezAraligi=0.2;
};


template<typename T>
T Benim(T isim){
		//return isim;
		std::cout<<isim;
	
}





int main(){
class Silah silah;
//std::cout<<Benim<int>(silah.SeriTek)<<std::endl; // int olaracak se�mi�tik SeriTek i Benim fonksiyonu g�nderece�imiz de�erde olmal� a�a��daki �rnek anlamama daha yard�mc� oldu
//std::cout<<Benim<float>(silah.GezAraligi);       // k�saca mant�k �u Benim fonk yan�na b�y�k k���k aras�nda yaz���m�z de�er oluyor b�ylece parantez i�indeki deperi at�yoruz yukar�



Benim(silah.SeriTek);
Benim(silah.GezAraligi); // Bu ise en son yapt���m ve direkt yazd�rmada kullan�rs�n ayr� ayr� de�erli fonk yazmana gerek kalmaz   


return 0;
}
