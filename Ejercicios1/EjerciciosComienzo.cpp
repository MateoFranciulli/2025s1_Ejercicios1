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
    int* v3 = new int[l1 + l2];
    int* p = v1;
    int* p2 = v2;
    int aux = 0;
    
    if (l1 == 0 && l2 == 0) {
            return NULL;
        } else if (l1 == 0) {        // Si v1 es vacio retorno v2
            int* v3 = new int[l2];
            for (int i = 0; i < l2; ++i) {
                v3[i] = v2[i];
            }
            return v3;
       
        } else if (l2 == 0) {  // Si v2 es vacio, retorno v1
            int* v3 = new int[l1];
            for (int i = 0; i < l1; ++i) {
                v3[i] = v1[i];
            }
            return v3;
        }
    
    while (p < v1 + l1 && p2 < v2 + l2) {
        if (*p < *p2) {
            v3[aux++] = *p++;
        } else if (*p == *p2) {
            v3[aux++] = *p2++;
            v3[aux++] = *p++;
        } else {
            v3[aux++] = *p2++;
        }
    }
    
    
    while (p < v1 + l1) {
        v3[aux++] = *p++;
    }
    
   
    while (p2 < v2 + l2) {
        v3[aux++] = *p2++;
    }
    
    return v3;
}
    


bool subconjuntoVector(int* v1, int* v2, int l1, int l2){
    //EJERCICIO OBLIGATORIO
    
    if(l1 == 0) return true;
    if(l2 == 0) return false;
    bool esSubconjunto = false;
    for(int i = 0; i < l1; i++){
        for(int j = 0; j < l2; j++){
            if(v1[i] == v2[j]){
                esSubconjunto = true;
                break;
            }
        }
        if(!esSubconjunto){ //Si no encuentro el v1 en v2 termino
            return false;
        }
    }
    
    return esSubconjunto;
}

char invertirCaseAux(char c) { //Invierto el char
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}


char* invertirCase(char* str){
    //EJERCICIO OBLIGATORIO
    int largo = 0;
    while (str[largo] != '\0') {
        largo++;
    }
    char* resultado = new char[largo + 1];
    int i = 0;
    while (str[i] != '\0') {
        resultado[i] = invertirCaseAux(str[i]);
        i++;
    }
    
    resultado[i] = '\0'; // Char de finl
    return resultado;
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
