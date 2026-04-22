# C-Programmierung - Test 2

Die folgenden Aufgaben überprüfen ihre Kenntnisse im Bereich **Schleifen** und **Funktionen**. sowie Ihre Kenntnisse über grundlegende Rechenoperationen, Verzweigungen (`if`) und Bibliotheksfunktionen `scanf` und `printf`.

Jede Aufgabe befindet sich in einem eigenen Verzeichnis.  
Alle abgegebenen Dateien müssen sich in den vorgegebenen Verzeichnissen befinden.

___WICHTIG!___ Als abgegeben gilt nur, was Sie commited __UND__ gepushed haben.

## Übersicht

Für diesen Test müssen Sie mehrere Programme bearbeiten und ausführen, die sich alle im folgenden Pfad befinden:

`src/programXX/main.c`

Wobei XX die Nummer des Programms ist.

Das erste Programm finden Sie beispielsweise am folgenden Speicherort:

`src/program01/main.c`


## program01

Erstellen Sie ein Programm, das eine ganze Zahl **number** einliest und alle Zahlen, beginnend von 0 bis zur eingegebenen Zahl ausgibt.
Beachten Sie, dass das Programm sowohl für positive, als auch negative Zahlen funktionieren soll.

Stellen Sie sicher, dass nach der Ausgabe eine neue Zeile begonnen wird.

z.B.: 

0 1 2 3 4 5 6 7 8 9 10 11 12 13

oder

0 -1 -2 -3 -4 -5 -6 -7

## program02

Im zweiten Programm erstellen Sie eine Folge von Augenzahlen beim Würfeln.

Es sollen so lange Würfelergebnisse (1 - 6) **dice** eingegeben werden, bis eine ungültige Augenzahl eingegeben wird.
Danach soll das Programm beendet und die Anzahl der gültigen Würfe ausgegeben werden.

z.B.:

3

6

1

4

4

2

8

Du hast 7 Mal gültig gewürfelt.


## program03

Erstellen Sie ein Programm, das mit Hilfe einer Funktion einen Temperaturwert von Grad Celsius in Grad Fahrenheit umrechnet.
Das Programm soll die Temperatur als Fließkommazahl **temp_celsius** einlesen und die Funktion **celsius2fahrenheit** aufrufen, die den entsprechenden Wert in Grad Fahrenheit zurückliefert. 

* Parameter
  * 1 Fließkommazahl (Temperatur in Grad Celsius)
* Rückgabewert
  * 1 Fließkommazahl (Temperatur in Grad Fahrenheit)
    
z.B.: 

Temperatur in Grad Celsius: 24.5

Temperatur in Grad Fahrenheit: 76.1


## program04

Erstellen Sie ein Programm, das die Längen von 2 Katheten **leg_a** und **leg_b** eines rechtwinkeligen Dreiecks als Fleißkommazahl einliest und mit Hilfe einer Funktion **compute_hypotenuse** die Hypotenuse des zugehörigen rechtwinkeligen Dreiecks berechnet.

* Parameter
  * 2 Fließkommazahlen (Längen der Katheten)
* Rückgabewert
  * 1 Fließkommazahl (Länge der Hypotenuse)

z.B.:

Länge der Kathete a: 12.5

Länge der Kathete b: 7.3

Länge der Hypotenuse: 9.55


