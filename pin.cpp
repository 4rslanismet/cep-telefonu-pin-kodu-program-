#include<iostream>
#include<cstdlib>

using namespace std;
 int main(){
 int basamak,deneme,pin,pinDeneme,den,pukGir,puk1;


 bas:
 cout<<"yeni pin kodu giriniz:\n";
 cin>>pin;
 cout<<"puk1 giriniz:\n";
 cin>>pukGir;
 basamak=pin%10;



 if(basamak>10 || pin<999){
  cout<<"lutfen dort basamaklı bir pin kodu giriniz:\n";
  goto bas;
}


 deneme=0;
 den=3;
 st:
 cout<<"pin kodunu giriniz:\n";
 cin>>pinDeneme;

 if(pin==pinDeneme){

   cout<<"pin kodu dogru\n";
 }

 if(pinDeneme!=pin){
   if(den>0){
     deneme++;
     den--;
     if(den==0){

       cout<<"pin bloke oldu\n"<<"PUK 1 kodunu giriniz:\n";
     cin>>puk1;
   if(puk1==pukGir){

      cout<<"Yeni Pin Kodu Giriniz\n:";
      cin>>pin;
      int dogrulama;
      cout<<"Pin Kodunu Dogrula:\n";
      cin>>dogrulama;
      if(dogrulama==pin){
      cout<<"Pin Degistirildi...\n";
      }



   }
 }
       else{
     cout<<"hatalı giris yaptınız!!!\nkalan deneme hakkınız:"<<den<<endl;
     goto st;
}



   }
 }

 }
