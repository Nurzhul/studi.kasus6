#ifndef vektor_h
#define Vektor_h
#include<iostream>
using namespace std;
class vektor{
	friend ostream& operator<<(ostream&, vektor&);
	friend istream& operator>>(istream&, vektor&);
public:
	vektor();
	void penjumlahan_vektor(const vektor&, const vektor&);
	void perkalian_vektor(float,const vektor&);
	void beri_nilaiBanyak(int);
private:
	int elemen[100];
	int banyak;
};

vektor::vektor(){
	banyak=3;
	for(int i=0;i<banyak;i++)
	    elemen[i]=0;
}

void vektor::beri_nilaiBanyak(int i){
	banyak=i;
}
istream& operator>>(istream& in,vektor& A){
	cout<<"\n Banyak elemen :";
	in>>A.banyak;
	cout<<"Masukan data vektor\n";
	for(int i=0;i<A.banyak;i++){
		cout<<"Data ["<<i+1<<"] :";
		cin>>A.elemen[i];
	}
	return in;
}
ostream& operator<<(ostream& out,vektor& A){
	cout<<endl;
	for(int i=0;i<A.banyak;i++){
		cout<<"s["<<i+1<<"]="<<setw(5)<<A.elemen[i]<<"\n";
	}
	return out;
} 
void vektor::penjumlahan_vektor(const vektor& A,const vektor& B){
	if(A.banyak>B.banyak)banyak=A.banyak;
	else banyak=B.banyak;
	for(int i=0;i<banyak;i++)
	  elemen[i]=A.elemen[i]+B.elemen[i];
}
void vektor::perkalian_vektor(float k,const vektor& A){
	banyak=A.banyak;
	for(int i=0;i<banyak;i++)
	  elemen[i]=k*A.elemen[i];
}
#endif
