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
//std::cout<<Benim<int>(silah.SeriTek)<<std::endl; // int olaracak seçmiþtik SeriTek i Benim fonksiyonu göndereceðimiz deðerde olmalý aþaðýdaki örnek anlamama daha yardýmcý oldu
//std::cout<<Benim<float>(silah.GezAraligi);       // kýsaca mantýk þu Benim fonk yanýna büyük küçük arasýnda yazýðýmýz deðer oluyor böylece parantez içindeki deperi atýyoruz yukarý



Benim(silah.SeriTek);
Benim(silah.GezAraligi); // Bu ise en son yaptýðým ve direkt yazdýrmada kullanýrsýn ayrý ayrý deðerli fonk yazmana gerek kalmaz   


return 0;
}
