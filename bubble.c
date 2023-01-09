#include<stdio.h>

//Funktions-Prototypen
void bubbleSort(int array[], int size);
void ergebnisAusgeben(int array[], int size);

//Hauptprogramm
int main () {

	/*
	* Implementierung des Bubble Sort Algorithmus (Array)
	*/

	printf("\n ******************************* ");
	printf("\n *   ^,,,,^   *                * ");
	printf("\n *  ( o x o)  *  Bubble Sort   * ");
	printf("\n *  ( 7   7)  *                * ");
	printf("\n *   ´´´´´´   *        ©S.Buch * ");
	printf("\n ******************************* \n\n");
	
	//Variablendeklaration
  int bubble[20] = { 0, 5, 4, 11, 14, 8, 5, 4, 3, 2, 48, 12, 47, 1, 66, 45, 23, 98, 13, 41};
  
  //Sortieren
  bubbleSort(bubble, 20); 
  
  //Ausgabe
  printf("Der Array beeinhaltet folgende Inhalte in absteigender Reihenfolge: \n");
  ergebnisAusgeben(bubble, 20);

	//Ende
	printf("\n\n");
	return 0;
}
  
//Funktionen
void bubbleSort(int array[], int size) {
  
  //Äußere Schleife
  for(int i=0; i<size; i++) {
    
    //innere Schleife
    for(int j=0; j<size-i; j++) {
      
      //Vergleich zwei nebeneinanderliegender Elemente
      if (array[j] > array[j+1]) {
        
        //die gewünschte Sortierung ist hier nicht gegeben, deshalb wird getauscht
        int temp = array[j]; //temp ist eine Variable, die als kurzfristige Sicherungsmöglichkeit für den Inhalt des Arrays an der Stelle j dient
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

void ergebnisAusgeben(int array[], int size) {
    for(int i=0; int < size; i++) {
      printf("%d | ", array[i]);
    }
    printf("\n");
}
  