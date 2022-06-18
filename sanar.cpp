#include <iostream>
#include <string>

using namespace std;
int n=0;
int sumaDeVida=0;


void sanar(int magia, int vidaInicial[], int vidaActual[], int distancia[])
{
    
    int i=0;
        for (int i = 0; i < n; i++)
        {
            if ((magia>=3)&&(vidaActual[i]<vidaInicial[i])&&(distancia[i]==1))//caso 1(se usaron 3 putnos de magia, la vida actual es menor a la inicial y el objetivo esta a 1 de distancia)
            {
                //se le suma al valor de la vida acutal 10 puntos, al luchador que este a 1 de distancia
                int diff = vidaInicial[i]-vidaActual[i];
                if (diff>=10)//se verifica si al sumarle los nuevos valores a la vidaActual supera al valor de vida inicial
                {
                    vidaActual[i]+=10;
                    sumaDeVida+=10;
                }
                else
                {
                    vidaActual[i]+=diff;
                    sumaDeVida+=diff;
                }
                magia-=3;
                
            }
            if ((magia>=5)&&(vidaActual[i]<vidaInicial[i])&&(distancia[i]==2))//caso 1(se usaron 3 putnos de magia, la vida actual es menor a la inicial y el objetivo esta a 1 de distancia)
            {
                //se le suma al valor de la vida acutal 10 puntos, al luchador que este a 1 de distancia
                int diff = vidaInicial[i]-vidaActual[i];
                if (diff>=10)//se verifica si al sumarle los nuevos valores a la vidaActual supera al valor de vida inicial
                {
                    vidaActual[i]+=10;
                    sumaDeVida+=10;
                }
                else
                {
                    vidaActual[i]+=diff;
                    sumaDeVida+=diff;
                }
                magia-=5;
                
            }
        }
    cout<<"La vida total sumada es "<<sumaDeVida<<endl;
    cout<<"La magia restante es "<<magia<<endl;
}


int main(){

    int magia;
    int vidaInicial[50];
    int vidaActual[50];
    int distancia[50];
    

    cin>>n;
    cin>>magia;
    for (int i = 0; i < n; i++)
    {
        
        cin>>vidaInicial[i];
        cin>>vidaActual[i];
        cin>>distancia[i];
        
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout<<vidaInicial[i]<<" ";
        cout<<vidaActual[i]<<" ";
        cout<<distancia[i]<<" ";
        cout<<endl;
    }
    */
    


    sanar(magia,vidaInicial,vidaActual,distancia);
    return 0;
}