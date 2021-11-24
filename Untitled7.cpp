#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double toplayici(vector<double> data){
	double toplam = 0;
    for (int y : data) {
        toplam += y;
		  }
	return toplam;
}

double sayman(vector<double> data){
	int sayi = 0;
    for (int x : data) {
        sayi ++;
		  }
	return sayi;
}

double mean(vector<double> data){
	double c = toplayici(data);
	double b = sayman(data);
	double ortalama = c/b;
	return ortalama;
}

double stddev(vector<double> data){
	int eleman_sayisi = sayman(data);
	double ortalama = mean(data);
	double toplam = 0;
    for (int y : data) {
        toplam += (y - ortalama) * (y - ortalama);
		  }
	double d = toplam/eleman_sayisi;
	double sonuc = sqrt(d);
	return sonuc;
}

int main()
{	
   vector<double> v = {2,7,6,10, 19, 782, 12, 45};
   
    double a = mean(v);
    cout << a << "\n";
    double ss = stddev(v);
    cout << ss;
  	
    return 0;
}



