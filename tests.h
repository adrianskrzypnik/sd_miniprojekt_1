#ifndef FINAL_TESTS_H
#define FINAL_TESTS_H




#include "arraylist.h"
#include "SinglyLinkedList.h"
#include <cstdlib>
#include <chrono>

class Test
{
public:
    Test(int seed = 0) {
        srand(seed); // ustawia ziarno
    }

    int32_t generateRandomNumber() {
        return rand(); // generuje losową liczbę
    }

    //generuje losowe miejsce tablicy dynamicznej
    int random_array_idx(int lenght_of_array)
    {
        return rand() % (lenght_of_array+1);
    }


    //obliczanie czasu dodawanie elementow na poczatek tablicy dla jednej tablicy
    long long arrayListAddToFront(arrayList& list, int numberOfElements) {


        auto start = std::chrono::high_resolution_clock::now();


        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.add_to_start(randomNumber); // dodaj na początek listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w mikrosekundach
    }




    //dodawanie elementow na koniec tablicy
    long long arrayListAddToBack(arrayList& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.add_to_end(randomNumber); // dodaj na koniec listy
        }

        auto end = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w mikrosekundach
    }

//    //dodawanie w losowym

//    long long arrayListAddToRandom(arrayList& list, int numberOfElements) {
//        auto start = std::chrono::high_resolution_clock::now();
//
//        for (int i = 0; i < numberOfElements; ++i) {
//            int randomNumber = generateRandomNumber();
//            int randomIndex = random_array_idx(list.co)
//            list.add_to_end(randomNumber); // dodaj na koniec listy
//
//        }
//
//        auto end = std::chrono::high_resolution_clock::now();
//
//        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);
//
//        return duration.count(); // zwraca czas w mikrosekundach
//    }

//    //usuwanie z poczatku
//    long long arrayListRemoveFromFront(arrayList& list, int numberOfElements) {
//
//        for (int i = 0; i < numberOfElements; ++i) {
//            int randomNumber = generateRandomNumber();
//            list.add_to_end(randomNumber); // dodaj na koniec listy
//        }
//
//        auto start = std::chrono::high_resolution_clock::now();
//
//        for (int i = 0; i < numberOfElements; ++i) {
//            list.remove_from_start(); // usuwa z poczatku tablicy
//        }
//
//        auto end = std::chrono::high_resolution_clock::now();
//        auto duration = std::chrono::duration_cast<std::chrono::milliseconds >(end - start);
//
//        return duration.count(); // zwraca czas w nanosekundach
//    }
//
//    //usuwanie z konca
//    long long arrayListRemoveFromBack(arrayList& list, int numberOfElements) {
//
//        for (int i = 0; i < numberOfElements; ++i) {
//            int randomNumber = generateRandomNumber();
//            list.add_to_end(randomNumber); // dodaj na koniec listy
//        }
//
//        auto start = std::chrono::high_resolution_clock::now();
//
//        for (int i = 0; i < numberOfElements; ++i) {
//            list.remove_from_end(); // usuwa z poczatku tablicy
//        }
//
//        auto end = std::chrono::high_resolution_clock::now();
//        auto duration = std::chrono::duration_cast<std::chrono::milliseconds >(end - start);
//
//        return duration.count(); // zwraca czas w nanosekundach
//    }

    //usuwanie z losowego

    //wyszukiwanie losowej



    //SINGLYLINKED

    //dodawanie na poczatku listy
    long long singlyLinkedListAddToFront(SinglyLinkedList& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.prepend(randomNumber); // dodaj na początek listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }

    //dodawanie na końcu listy
    long long singlyLinkedListAddToBack(SinglyLinkedList& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.append(randomNumber); // dodaj na koncu listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }

    //dodawanie w losoym miejscu

    long long singlyLinkedListAddToRandom(SinglyLinkedList& list, int numberOfElements) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numberOfElements; ++i) {
            int randomIndex = random_array_idx(list.returnSize());
            int randomNumber = generateRandomNumber();
            list.insert(randomNumber, randomIndex); // dodaj w losowym miejscu
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }

    //usuwanie z początku listy
    long long singlyLinkedListRemoveFromFront(SinglyLinkedList& list, int numberOfElements) {

        // zapełnianie tablicy
        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.append(randomNumber); // dodaj na koncu listy
        }

        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < numberOfElements; ++i) {
            list.removeFirst(); // usuwanie z poczatku listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }

    //usuwanie z końca
    long long singlyLinkedListRemoveFromBack(SinglyLinkedList& list, int numberOfElements) {

        // zapełnianie tablicy
        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.append(randomNumber); // dodaj na koncu listy
        }

        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < numberOfElements; ++i) {
            list.removeLast(); // usuwanie z końca listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }

//    usuwanie z losowego miejsca

    long long singlyLinkedListRemoveFromRandom(SinglyLinkedList& list, int numberOfElements) {

        // zapełnianie tablicy
        for (int i = 0; i < numberOfElements; ++i) {
            int randomNumber = generateRandomNumber();
            list.append(randomNumber); // dodaj na koncu listy
        }

        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < numberOfElements; ++i) {
            int randomIndex = random_array_idx(list.returnSize());
            list.remove(randomIndex); // usuwanie z końca listy
        }

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        return duration.count(); // zwraca czas w nanosekundach
    }
//
//    wyszukiwanie DO POPRAWY
    long long singlyLinkedListFindRandomNumber(SinglyLinkedList& list) {

        auto start = std::chrono::high_resolution_clock::now();

        int randomNumber = generateRandomNumber();

        int result = list.search(randomNumber);

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds >(end - start);

        if(result == -1){
            std::cout<<"Nie znaleziono, spróbuj ponownie";
        }

        return duration.count(); // zwraca czas w nanosekundachh
    }



};


#endif //FINAL_TESTS_H
