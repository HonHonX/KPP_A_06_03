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
  	int bubble[] = { 0, 5, 4, 11, 14, 8, 5, 4, 3, 2, 48, 12, 47, 1, 66, 45, 23, 98, 13, 41};
	int size = sizeof(bubble)/sizeof(bubble[0]);
  
  	//Ausgabe des unsortierten Arrays zur Kontrolle
 	printf("Der Array (mit %d Elementen) beeinhaltet folgende Inhalte in ursprünglicher Reihenfolge: \n", size);
  	ergebnisAusgeben(bubble, size);

  	//Sortieren
  	bubbleSort(bubble, size); 
  
  	//Ausgabe
  	printf("Der Array (mit %d Elementen) beeinhaltet folgende Inhalte in aufsteigender Reihenfolge: \n", size);
  	ergebnisAusgeben(bubble, size);
	
	//Ende
	printf("\n\n");
	return 0;
}
  
//Funktionen
void bubbleSort(int array[], int size) {
  
  //Äußere Schleife
  for(int i=0; i<size; i++) {
    
    //innere Schleife
    for(int j=0; j<size-i-1; j++) {
      
      //Vergleich zwei nebeneinanderliegender Elemente
      if (array[j] > array[j+1]) {
        
        	//die gewünschte Sortierung ist hier nicht gegeben, deshalb wird getauscht
		//temp ist eine Variable, die als kurzfristige Sicherungsmöglichkeit für den Inhalt des Arrays an der Stelle j dient
       	 	int temp = array[j]; 
        	array[j] = array[j+1];
        	array[j+1] = temp;
      } 
    }
  }
}

void ergebnisAusgeben(int array[], int size) {
    for(int i=0; i < size; i++) {
      printf("%d | ", array[i]);
    }
    printf("\n");
}
  
