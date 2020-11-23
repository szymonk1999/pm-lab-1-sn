# Parametry projektu
Nazwa:  pm-lab-1-sn  
Autor:  Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v1.0  
Data:   03.04.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Szymon Kwiecień  
Numer albumu:               72534  
Grupa studencka:            WELE18DE1S1

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Doida na płytce zaczyna świecić 

## Zadanie 2-2-1b:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Dioda zaczyna migać. 

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Zamiana kolejność podłączenia rezystora nie ma znaczenia, natomiast dla diody już tak. Diioda miga.

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  Musi być zachowana kolejność. Polecenia wykonywane są od góry do dołu. 

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  Nie ma takiej stałej. 

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Powinny adoptować długość zapalenia swiateł do zagęszczenia ruchu. Wymagało by to analizy obrazu z kamery (np poprzez nvidia tx2) i przesłania danych korygujacych czas zapalania do arduino. 

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  By sprawdzić działanie sterowania stanem niskim diode odwróciłem połączenia diody w programie Tinkercad (dioda dostawała 5v porzez rezystor bezposrenio z płtyki, a masa diody pochodziła z pinu 13). Po wgraniu programu przykładowego programu blink, zauwazyłem ze pulsacja diody jest mało stabilna, ale odbywa sie. 

# Zadania rozszerzajace
## Zadanie 3-1:
Pytanie:    *Określić wady i zalety operowania na rejestrach mikrokontrolera.*  
Odpowiedź:  Operacje wykonywane na rejestrach wykonuja sie szybciej niz z danych RAM-u.

## Zadanie 3-2:
Pytanie:    *Jaka jest treść nadawnaego tekstu? Proszę zapisać postać jawną i zakodowaną.*  
Odpowiedź:  nadawany teskt "szymon", zakodowany "... --.. -.-- -- --- -."   Przy tworzeniu kodu, bazowałem na widzy z internetu - poprawiłem niedziałający program, poprzez zdefiniowanie wszystkiech niezbędnych funkcji w nagłówku. Dane do zakodowania wysyła się po serialu, bezpośrenio na płytke, zakodowany kod możemy zaobserwować na płytce. 

## Zadanie 3-3:
Pytanie:    *Kiedy programowe generowanie sygnału PWM ma zastosowanie i jakie pociąga to za sobą konsekwencje.*  
Odpowiedź:  Może być wykorszystywane przy np sterowaniu silnikiem lub sterowaniu jasnościa diody. Program opeira sie o funkcji analogWrite(Pin, Value), która lepiej sie sprawdza w tym zadaniu, od tej zaproponowanej we skrypcie. Konieczne jest użycie portu PWM w arduino. Kazda płytka ma inna częstotliwaośc PWM, dla Arduino UNO jest to 976Hz.