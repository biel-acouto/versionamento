#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    int w, x, y, z, z2, n1, n2; 
    printf("\n Digite o primeiro valor: "); 
    scanf("%d", &nl); 
    
    printf("\nDigite o segundo numero: "); 
    scanf("%d", &n2); 
    
    w = nl + n2; 
    x = n1 - n2; 
    w = nl * n2; 
    z = nl / n2; 
    z2 = nl % n2; 
    
    printf("\n %d + %d = %d", nl,n2,w); 
    printf("\n %d - %d = %d", nl,n2,x); 
    printf("\n %d * %d = %d", nl,n2,y); 
    printf("\n %d / %d = %d", nl,n2,z); 
    printf("\n %d %% %d = %d", nl,n2,z2); 
    
    return 0; 
}
