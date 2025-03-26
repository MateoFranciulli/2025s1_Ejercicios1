#include "EjerciciosComienzo.h"

int suma(int a, int b) {
    
    return a + b;
}

void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
 	// IMPLEMENTAR SOLUCION
    //cout<< "Tabla del numero" << tablaDel << endl;
    for(int i = desde; i < hasta; i++){
        cout << i << "*" << tablaDel << "=" << i * tablaDel << ";";
    }
    cout << hasta << "*" << tablaDel <<"=" << hasta * tablaDel;
}

void simplificar(int n, int d) {
	// IMPLEMENTAR SOLUCION
}

int ocurrencias123Repetidos(int* vector, int largo) {
    //EJERCICIO OBLIGATORIO
    // IMPLEMENTAR SOLUCION 
    int ocurrencias = 0;
    for (int i = 0; i < largo; i++) {
        if (vector[i] == 1) {
            int j;
            for (j = i + 1; j < largo && vector[j] == 1; j++); //Me salto todos los 1 consecutivos
            if (j < largo && vector[j] == 2) {
                for (j++; j < largo && vector[j] == 2; j++); //Me salto todos los 2 consecutivos
                if (j < largo && vector[j] == 3) { //Si despues de todos los 1 y 2 hay un 3
                    ocurrencias++; //Aumento ocurrencias
                    i = j; // Itero desde el ultimo
                }
            }
        }
    }
    return ocurrencias;
}
int maximoNumero(unsigned int n) {
	// IMPLEMENTAR SOLUCION
    int max = -9999999;
    int aux ;
    for(int i=0;i<n;i++){
        cin >> aux;
        if(aux > max){
            max = aux;
        }
    }
    return max;
}

void ordenarVecInt(int *vec, int largoVec) {
    //EJERCICIO OBLIGATORIO
    // IMPLEMENTAR SOLUCION
    int aux;
    for(int i = 0; i < largoVec; i++){
        for(int j = 0; j < largoVec; j++){
            if(vec[i] < vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    
    
    
}

int* intercalarVector(int* v1, int* v2, int l1, int l2){
    //EJERCICIO OBLIGATORIO
    // IMPLEMENTAR SOLUCION
	return NULL;
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2)
{
    //EJERCICIO OBLIGATORIO
    // IMPLEMENTAR SOLUCION
	return false;
}

char* invertirCase(char* str)
{
    //EJERCICIO OBLIGATORIO
    // IMPLEMENTAR SOLUCION
	return NULL;
}

int islas(char** mapa, int col, int fil){
	// IMPLEMENTAR SOLUCION
    return 0;
}

unsigned int ocurrenciasSubstring(char **vecStr, int largoVecStr, char *substr)
{
	// IMPLEMENTAR SOLUCION
    return 0;
}

char **ordenarVecStrings(char **vecStr, int largoVecStr)
{
    //EJERCICIO OBLIGATORIO
	// IMPLEMENTAR SOLUCION
    return NULL;
}

char** splitStr(char* str, char separador, int &largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo) 
{
	// IMPLEMENTAR SOLUCION
}
