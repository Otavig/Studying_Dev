/* MODELAGEM BÁSICA - 
ENTIDADE = TABELA
CAMPOS = ATRIBUTOS  */

CLIENTE

NOME - CARACTER(30)
CPF - NUMERICO(11)
EMAIL - CARACTER(30)
TELEFONE - CARACTER(30)
ENDERECO - CARACTER(100)
SEXO - CARACTER(1)

`EXEMPLO DE MODELAGEM CONCEITUAL`

/* PROCESSOS DE MODELAGEM */


/* FASE 01 E FASE 02 - AD ADM DE DADOS */

MODELAGEM CONCEITUAL - RASCUNHO
MODELAGEM LÓGICA - QUALQUER PROGRAMA DE MODELAGEM (EXEMPLO UML)

/* FASE 03 - DBA / AD  */

MODELAGEM FÍSCA - SCRIPTS DE BANCO


/* INICIANDO A MODELAGEM FÍSICA */

/* CRIANDO O BANCO DE DADOS */

CREATE DATABASE PROJETO_AULA;

/* CONECTAR AO BANCO */

USE PROJETO_AULA;

/* CRIANDO A TABELA DE CLIENTES */

CREATE TABLE CLIENTES(
	NOME VARCHAR(30),
	SEXO CHAR(1),
	EMAIL VARCHAR(30),
	CPF INT(11),
	TELEFONE VARCHAR(30),
	ENDERECO VARCHAR(100)
);

DIFERENÇA DE VARCHAR E CHAR {DESEMPENHO DO BANCO DE DADOS ATÉ MESMOS NO ALGORITMO}

AD - CUIDA DOS DADOS
DBA - CUIDA DA INFROESTRUTURA
TN - TUNING DÁ PERFORMACE DO BANCO
BI - O QUE ACONTECEU NO PASSADO
DS - O QUE PODE ACONTECER NO FUTURO

{ AD/DBA  -  BI  -  DS } TN

/* VERIFICANDO AS TABELAS DO BANCO */

SHOW TABLES; 

/* DESCOBRINDO  COMO É A ESTRUTURA DE UMA TABELA */

DESC CLIENTES;