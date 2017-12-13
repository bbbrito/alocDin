#include <stdlib.h>
#include <ctime>
#include <iostream>
using std::cout;
using std::cin;

void gerarGabarito ( int *, int * );
void gerarRespostas ( int *, int * );
bool avaliar ( int *, int * );

int main( )
{
    srand( ( int ) time ( 0 ) );
	int Nquestoes = [ 10, 50, 100 ];
    const int SIZE = 3;
    int *gabaritoPtr = 0;
    int *respostasPtr = 0;
    int countAprovado = 0;
    const int NTESTES = 100;
    double percAprovados[ 3 ];
    
    for( int i = 0; i < SIZE; i++ )
    {
        gabaritoPtr = new int [ Nquestoes[ i ] ];
        respostasPtr = new int [ Nquestoes[ i ] ];        
        
        gerarGabarito ( Nquestoes[ i ], gabaritoPtr );
        
        countAprovado = 0;
        for( int j = 0; j < NTESTES; j++ )
        {
            gerarRespostas( Nquestoes[ i ], respostasPtr )
            if( avaliar( gabaritoPtr, respostasPtr ) )
                countAprovado++;
        }
        percAprovados[ i ] = double(countAprovado) / double(NTESTES);
        
        delete [] gabarito;
        delete [] resposta;
    }    
}

void gerarGabarito ( int *questoes, int *gabarito );
{
    for(int i = 0; i < gabarito; i++)
        *gabarito = 1 + (rand() % 4;
}

void gerarRespostas ( int *questoes, int *resposta );
{
    for(int i = 0; i < resposta; i++)
        *resposta = 1 + (rand() % 4;
}

bool avaliar ( int *gabarito, int *resposta );
{
    int count = 0;
    for(int i = 0 < gabarito; i++)
    {
        if( *gabarito[i] == *resposta[i] )
        {
            count++;
            double percAcerto = double(count) / double(gabarito);
            if( percAcerto >= 0.50 )
                return true;
            else 
                return false;
        }
    }
}