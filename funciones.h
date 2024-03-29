#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*
 * Funcion existFile
 * Funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int existsFile(char* filename) ;


/*
 * Funcion inIn
 * Funcion que verifica si un caracter esta dentro de un string
 * @param char string[], char caracter, string refiere al string en el cual se buscara el caracter "caracter"
 * @return entero 1 en caso de que si se encuentre y 0 en caso contrario
*/
int isIn(char string[],char caracter);


/*
 * Funcion consecutive
 * Funcion que verifica si en un string existen tres caracteres consecutivos iguales
 * @param char* string, hace mencion al string en el cual se llevara a cabo la verificacion
 * @return entero 1 en caso de que si exista tres caracteres consecutivos y 0 en caso contrario
*/
int consecutive(char* string);

/*
 * Funcion isLetter
 * Funcion que verifica si en un caracter es letra
 * @param char c, "c" hace mencion al caracter el cual se analizara
 * @return entero 1 en caso de que sea letra el caracter y 0 en caso contrario
*/
int isLetter(char caracter);
/*
 * Funcion isNumber
 * Funcion que verifica si en un caracter es numero
 * @param char c, "c" hace mencion al caracter el cual se analizara
 * @return entero 1 en caso de que sea numero el caracter y 0 en caso contrario
*/
int isNumber(char c);


/*
 * Funcion isVocal
 * Funcion que verifica si en un caracter es una vocal
 * @param char c, "c" hace mencion al caracter el cual se analizara
 * @return entero 1 en caso de que sea una vocal el caracter y 0 en caso contrario
*/
int isVocal(char c);


/*
 * Funcion validWord
 * Funcion que verifica si en un string es valido cumpliendo las siguientes condiciones:
 	1) No deben existir 3 caracteres iguales seguidos en la palabra
 	2)
 	3)
 * @param char* palabra, "palabra" hace mencion al string el cual se analizara
 * @return entero 1 en caso de que sea un string valido y 0 en caso contrario
*/
int validWord(char* palabra);


/*
 * Funcion searchCharacters
 * Funcion que busca todos los caracteres dentro de un archivo con el formato "%c\n"
 * @param char* caracteres, "caracteres" hace mencion al string en el cual se iran guardando los caracteres encontrados
 * @return en esta funcion no se retorna un dato ya que se retorna a traves del paso por referencia.
*/
void searchCharacters(char* caracteres, char* nombreFile);


/*
 * Funcion backTracking
 * Funcion que va generando las soluciones validas utilzando e algoritmo de backtraking y cuando encuentra una la escribe en un archivo
 * @param char* elementos,char* cadena, FILE* archivo,int numero,
            elementos refiere a los elementos con los cuales se generanran las soluciones validas
            cadena regiere al string que se ira formando hasta llegar a las soluciones validas
            archivo refiere al archivo en el cual se escribiran las soluciones validas
            numero refiere al indice en el cual va a agregar el siguiente caracter, este debe ser 0 cuando se llame a la funcion

*/
void backTracking(char* elementos,char* cadena, FILE* archivo,int numero);
/*
 * Funcion generateCombinations
 * Funcion que realiza un llamado a la funcion backTraking
 * @param char* caracteres, refiere a los caracteres con los que se haran las soluciones
*/
void generateCombinations(char* caracteres);
/*
 * Funcion printTitle
 * Funcion imprime en consola el titulo del programa en este caso es backtracking
*/
void printTitle();


#endif // FUNCIONES_H_INCLUDED
