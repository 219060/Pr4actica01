#include <iostream>

int main(int argc, char** argv) {
	int n, aux, vec[n];
	printf("Inserte tamaño del vector: ");
	scanf("%i", &n);
	for(int i=0; i<n; i++){
		printf("Dame el numero %i\t",i+1);
		scanf("%i", &vec[i]);
	}
	for(int i=0; i<n-1; i++){                            
        for(int j=0; j<n-1; j++){                    
            if(vec[j] > vec[j+1]){               
                aux=vec[j];                    
                vec[j]=vec[j+1];            
                vec[j+1]=aux;}              
        }
    }
    for(int i=0; i<n; i++){
    	printf("%i\t", vec[i]);
	}
	
	printf("El numero mayor es: %i", vec[n-1]);
	return 0;
}
