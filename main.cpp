#include <iostream>
#include <vector>
using namespace std;
vector<bool> vec;
bool probar(int &n, int &k);



int main()
{

     int respuesta[14] = {0};
     int valor;

     while (cin >>  valor and valor!=0)
     	if(respuesta[valor]!=0){

           cout << respuesta[valor] << endl;
     	}
     	else{
     	   int actual;
           for (actual = valor;; actual++)
           {
                vec.assign(valor * 2, 0);

                if (probar(actual, valor)){
                	break;
                }
                     
           }
           respuesta[valor] = actual;
           cout << respuesta[valor] << endl;
     	}
     return 0;

 }

 bool probar(int &n, int &k)
{
     int actual = (n - 1) % (k * 2);
     while (vec.size() > k)
     {
           if (actual < k)
                return false;
           vec.erase(vec.begin() + actual);
           actual += n - 1;
           actual %= vec.size();
     }
     return true;
}