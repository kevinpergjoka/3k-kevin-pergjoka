#include <iostream>
#define PIG  3.14
double r,c,a; 
using namespace std;
int main()  { /* inizio programma */
/* Traduciamo scrivi con cout */
    cout<< " inserire il raggio:"; 
/* Traduciamo leggi con cin */
    cin>>r; 
	c = 2*PIG*r;
	a = PIG* r*r;
//	cout.width(5);
//	cout.precision(3);
	cout<<"\n"<< " la circonferenza vale: " <<c <<" il raggio: "<<r<<"\n";
	return (0);

} /* fine programma */
