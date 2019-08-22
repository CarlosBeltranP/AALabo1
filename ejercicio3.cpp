
#include <iostream> 
using namespace std; 

int minimoRecursivo(int array[],int t)
{
    int minimo;

    if(t==1)
        return array[0];

    else {
        minimo=minimoRecursivo(array, t-1);

        if(minimo<array[t-1])
            return minimo;
        else
            return array[t-1];
    }

} 

int main()
{
	cout<<"\tEjercicio #3\n";
    int i,t,array[25];
    cout<<"\nIngrese la longitud del vector: ";
    cin >> t;
    cout<<"\nIngrese los valores: \n ";

    for(i=0;i<t;i++)
    {
    	cout<<"\n  ";
        cin >> array[i];  
    }
    

    cout<<"\nEl minimo es: \t" <<minimoRecursivo(array,t);


}
