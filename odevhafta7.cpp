using namespace std;
#include <iostream>
int kalan(int s1, int s2){ //soru 1
    if(s1<s2)
        return s2%s1;
    else
        return s1%s2;
}
int nottoplam (int notlar[], int i){ //soru 2
    int toplam;
    for(int j=0;j<i;j++){
        toplam+=notlar[j];
    }
    return toplam;
}
bool asal(int a){ //soru 3
    for(int i=2;i<a;i++){
        if(a%i==0)
            return true;
    }
    return false;
}
int sayi=2;//soru 4
void fonksiyon1()//soru 4
{
    sayi = 5;
}
void fonksiyon2()//soru 4
{
    int sayi = 7;
}
int main(){
    int s;
    cout<<"Cevabini gormak istediginiz soru numarasini giriniz(1-4): ";
    cin>>s;
    switch (s){
    case 1:
        int sayi1, sayi2;
        cout<<"Ilk sayiyi giriniz: ";
        cin>>sayi1;
        cout<<"Ikinci sayiyi giriniz: ";
        cin>>sayi2;
        cout<<"Kalan sayi: "<<kalan(sayi1,sayi2)<<endl;
        break;
    case 2:
        int ogrnot;
        int k;
        int ogrNotlar[20];
        cout<<"Lutfen en fazla 20 not giriniz."<<endl;
        ogrnot=0;
        k=1;
        while (ogrnot!=-1){
            ogrnot=0;
            cout<<k<<". ogrencinin notunu giriniz, girisi tamamlamak istiyorsaniz '-1' yaziniz: "<<endl;
            cin>>ogrnot;
            if(ogrnot==-1){
                break;
            }else{
                ogrNotlar[k-1]=ogrnot;
                k++;
            }
        }
        cout<<"Toplam not: "<<nottoplam(ogrNotlar, k-1);
        break;
    case 3:
        int a_sayi;
        cout<<"Asal olup olmadigini gormek istediginiz sayiyi giriniz: "<<endl;
        cin>>a_sayi;
        if(asal(a_sayi))
            cout<<"Sayi asal degildir. "<<endl;
        else
            cout<<"Sayi asaldir. "<<endl;
        break;
    case 4:
        fonksiyon1();
        fonksiyon2();
        cout << sayi;
    }
    return 0;
}
