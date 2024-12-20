/*Autor: João Miguel de Oliveira Teodosio
  Data: 27/11/2024
  OBJ: Inicialização typedef e as telas a serem usadas e puxadas no projeto*/
#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


typedef struct Conta {
    char codigo[10];
    char banco[50];
    char agencia[20];
    char numeroConta[20];
    int tipoConta;
    float saldo;
    float limite;
    int statusConta;
    struct Conta* next;  
    struct Conta* prev;  
} Conta;


extern Conta* head;  
extern Conta* tail;  


void desenha_moldura();
void gotoxy(int x, int y);
void tela_submenu();
void tela_inicial();
void inserirnofinal();
void telainserirfinal();
void salvarListaNoDisco();
void exibirContas();
void carregarListaDoDisco();
int validaTipoConta();
void tela_exibirConta();
void inserirnoinicio();
void telainseririnicio();

#endif
