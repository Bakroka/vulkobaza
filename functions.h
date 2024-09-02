#pragma once

#include "sll_data_type.h"



//Extern

extern char skladiste[25];
extern char usluge[25];
extern char troskovi[25];
extern char termini[25];
extern char prihodi[25];

//Opcija sa datotekama
void brisanjeDat();
void promjenaImenaDat();


//Izbornik

int izbornik();
int izbornik1();
int izbornik2();
int izbornik3();
int izbornik4();
int izbornik5();
int izbornik6();
int izbornik7();


//Safe Input

int getIntegerInput(const char* prompt);
static int safeStringInputForDOT(char* buffer, int size);
static void safeStringInput(char* buffer, int size);
int safeIntInput();
int safeIntInputAll();
short safeShortInput();




//Skladiste

static void inputNodeData(SLLNODE* node);
void printList(SLLNODE* head);
void writeListToBinaryFileWhenDeleted(const char* filename, SLLNODE* head);
static void writeNodeToBinaryFile(FILE* file, SLLNODE* node);
void writeListToBinaryFile(const char* filename, SLLNODE* head);
static SLLNODE* readNodeFromBinaryFile(FILE* file);
SLLNODE* readListFromBinaryFile(const char* filename);
void insertNewNodeSLList(SLLNODE** head, SLLNODE** tail, int* currentNumber);
void deleteNodeByNumber(SLLNODE** head, int number);
int getLastNumberFromFile(const char* filename);
static void sortedInsertByDot(SLLNODE** headNode, SLLNODE* newNode);
void insertSortSLListByDot(SLLNODE** headNode);
void updateNodeByNumber(SLLNODE* head, int number);
static void updateNodeData(SLLNODE* node);




//Usluge

static void inputNodeData2(SLLNODE2* node);
void printList2(SLLNODE2* head);
void printListUslugePoMjesecu(SLLNODE2* head, short broj);
void writeListToBinaryFileWhenDeleted2(const char* filename, SLLNODE2* head);
static void writeNodeToBinaryFile2(FILE* file, SLLNODE2* node);
void writeListToBinaryFile2(const char* filename, SLLNODE2* head);
static SLLNODE2* readNodeFromBinaryFile2(FILE* file);
SLLNODE2* readListFromBinaryFile2(const char* filename);
void insertNewNodeSLList2(SLLNODE2** head, SLLNODE2** tail, int* currentNumber);
void deleteNodeByNumber2(SLLNODE2** head, int number);
int getLastNumberFromFile2(const char* filename);
void updateNodeByNumber2(SLLNODE2* head, int number);
static void updateNodeData2(SLLNODE2* node);
static void swapNodes(SLLNODE2* a, SLLNODE2* b);
void recursiveBubbleSort2(SLLNODE2* head, SLLNODE2* end);
void sortByCijena2(SLLNODE2** head);


//Troskovi

static void inputNodeData3(SLLNODE3* node);
void printList3(SLLNODE3* head);
void writeListToBinaryFileWhenDeleted3(const char* filename, SLLNODE3* head);
static void writeNodeToBinaryFile3(FILE* file, SLLNODE3* node);
void writeListToBinaryFile3(const char* filename, SLLNODE3* head);
static SLLNODE3* readNodeFromBinaryFile3(FILE* file);
SLLNODE3* readListFromBinaryFile3(const char* filename);
void insertNewNodeSLList3(SLLNODE3** head, SLLNODE3** tail, int* currentNumber);
void deleteNodeByNumber3(SLLNODE3** head, int number);
int getLastNumberFromFile3(const char* filename);
void updateNodeByNumber3(SLLNODE3* head, int number);
static void updateNodeData3(SLLNODE3* node);
static void swapNodes3(SLLNODE3* a, SLLNODE3* b);
void recursiveBubbleSort3(SLLNODE3* head, SLLNODE3* end);
void sortByCijena3(SLLNODE3** head);


//Prihodi

static void inputNodeData4(SLLNODE4* node);
void printList4(SLLNODE4* head);
void writeListToBinaryFileWhenDeleted4(const char* filename, SLLNODE4* head);
static void writeNodeToBinaryFile4(FILE* file, SLLNODE4* node);
void writeListToBinaryFile4(const char* filename, SLLNODE4* head);
static SLLNODE4* readNodeFromBinaryFile4(FILE* file);
SLLNODE4* readListFromBinaryFile4(const char* filename);
void insertNewNodeSLList4(SLLNODE4** head, SLLNODE4** tail, int* currentNumber);
void deleteNodeByNumber4(SLLNODE4** head, int number);
int getLastNumberFromFile4(const char* filename);
void updateNodeByNumber4(SLLNODE4* head, int number);
static void updateNodeData4(SLLNODE4* node);
static void swapNodes4(SLLNODE4* a, SLLNODE4* b);
void recursiveBubbleSort4(SLLNODE4* head, SLLNODE4* end);
void sortByCijena4(SLLNODE4** head);


//Termini

static void inputNodeData5(SLLNODE5* node);
void printList5(SLLNODE5* head);
void writeListToBinaryFileWhenDeleted5(const char* filename, SLLNODE5* head);
static void writeNodeToBinaryFile5(FILE* file, SLLNODE5* node);
void writeListToBinaryFile5(const char* filename, SLLNODE5* head);
static SLLNODE5* readNodeFromBinaryFile5(FILE* file);
SLLNODE5* readListFromBinaryFile5(const char* filename);
void insertNewNodeSLList5(SLLNODE5** head, SLLNODE5** tail, int* currentNumber);
void deleteNodeByNumber5(SLLNODE5** head, int number);
int getLastNumberFromFile5(const char* filename);
void updateNodeByNumber5(SLLNODE5* head, int number);
static void updateNodeData5(SLLNODE5* node);
static void swapNodes5(SLLNODE5* a, SLLNODE5* b);
static int compareNodes(SLLNODE5* a, SLLNODE5* b);
static  SLLNODE5* sortedInsert(SLLNODE5* sorted, SLLNODE5* newNode);
static SLLNODE5* recursiveInsertionSort5(SLLNODE5* head);
void sortByDateTime(SLLNODE5** head);


//Pokazivaci na funkcije

static int zbroj(SLLNODE2* head2, short mjesec);
static int zbroj2(SLLNODE4* head4, short mjesec);
static int razlika(SLLNODE3* head3, short mjesec);
void DobitIliGubitak(const char* usluge, const char* troskovi, const char* prihodi);

//Pretrazivanje 

static void pretrazivanjeSkladisteInt(SLLNODE* head, int broj, int odabir);
static void pretrazivanjeSkladisteShort(SLLNODE* head, short diameter);
static void pretrazivanjeSkladisteString(SLLNODE* head, char znak[], int odabir);
void IspisOpcija(SLLNODE* head);


//Izlaz

int izlazIzPrograma(SLLNODE*, SLLNODE2*, SLLNODE3*, SLLNODE4*, SLLNODE5*);