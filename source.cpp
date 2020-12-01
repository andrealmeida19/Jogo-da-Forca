#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <locale.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
#include <fstream>
#include <ctype.h>
#include "jogodaforca.h"
#include "palavras.h"
#define TAMANHO_PALAVRA 50

	using namespace std;
	
void bonecoInteiro(){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "       /|\\  |" << endl;
	cout << "        |   |" << endl;
	cout << "       / \\  |" << endl;
	cout << "       ===========" << endl; cout << endl << endl;
}

void bonecoVazio(){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl; cout << endl << endl;
}

void forca(int erros){
if(erros==0){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens 7 tentativas!" << endl << endl << endl << endl;
} 
else if(erros==1){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens mais 6 tentativas!" << endl << endl << endl << endl;
} 	
else if(erros==2){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "        |   |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens mais 5 tentativas!" << endl << endl << endl << endl;
} 	
else if(erros==3){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "        |\\  |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens mais 4 tentativas!" << endl << endl << endl << endl;
} 	
else if(erros==4){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "       /|\\  |" << endl;
	cout << "	    |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens mais 3 tentativas!" << endl << endl << endl << endl;
} 	
else if(erros==5){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "       /|\\  |" << endl;
	cout << "        |   |" << endl;
	cout << "	    |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Tens mais 2 tentativas!" << endl << endl << endl << endl;
} 	
else if(erros==6){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "       /|\\  |" << endl;
	cout << "        |   |" << endl;
	cout << "         \\  |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Só tens mais esta tentativa!" << endl << endl << endl << endl;
}
else if(erros==7){
	cout << "	+---+" << endl;
	cout << "	|   |" << endl;
	cout << " 	O   |" << endl;
	cout << "       /|\\  |" << endl;
	cout << "        |   |" << endl;
	cout << "       / \\  |" << endl;
	cout << "       ===========" << endl << endl;
	cout << "Acabaram-se as tentativas!" << endl << endl << endl << endl;
}
}

void goodbye(){
	system("cls");
	cout << "" << endl << endl;
	cout << "	  Goodbye! :)" << endl << endl;
	sleep(1);
	exit(0);
}

void redirecionar(){
	system("cls");
	cout << endl << endl; cout << "A opção selecionada não é válida, será redirecionado ao ecrã anterior." << endl;
	sleep (2); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior" << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior.." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior..." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior..." << endl;	
}

void redirecionar2(){
	system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã inicial" << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã inicial." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã inicial.." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã inicial..." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã inicial..." << endl;
}

void redirecionar3(){
	system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior" << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior.." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior..." << endl;
	sleep (1); system("cls");
	cout << endl << endl; cout << "A redirecionar para o ecrã anterior..." << endl;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleTitle("JOGO DA FORCA");
	system("color 3");
	
	string opcao1;
	
	HOME:
	system("cls");
	cout << "Bem-Vindo(a) ao Jogo da Forca!" << endl << endl;
	bonecoInteiro();
	cout << "1 - Jogar" << endl << endl;
	cout << "2 - Sair do jogo" << endl << endl;
	cout << "3 - Fazer download do código fonte" << endl << endl;
	cout << "> "; cin >> opcao1;
	
	if ( opcao1 == "1" ) {
		menu2();
	}
	else if ( opcao1 == "3" ) {
		system("cls");
		cout << "     Jogo da Forca" << endl << endl;
		bonecoInteiro();
		cout << "Vai ser aberto o navegador com o site para o download do código fonte" << endl << endl;
		sleep(3);
		ShellExecute(NULL, "open", "https://github.com/andrealmeida19/Jogo-da-Forca", NULL, NULL, SW_SHOWNORMAL);
		main();
	}
	else if ( opcao1 == "2" ) {
		system("cls");
			cout << "" << endl << endl;
			cout << "	  Goodbye! :)" << endl << endl;
		sleep(1);
		exit(0);
	}
	else if ( opcao1 != "1" && opcao1 != "2" && opcao1 != "3" ) {
		redirecionar();
		goto HOME;
	}
	return 0;	
}  

int jogarComAmigos(void){
  
	char palavraSecreta[255], 
		 tracos[255],
		 letra;
  
	int erros=0;
  
	system("cls");
	cout << "     Jogo da Forca" << endl << endl;
	bonecoInteiro();
	cout << "	  		Regras" << endl << endl;
	cout << "-> Apenas é permitido escrever palavras (não frases)." << endl;
	cout << "-> Existem apenas 7 tentativas para a palavra ser adivinhada." << endl;
	cout << "-> É recomendado escrever apenas uma letra minúscula de cada vez." << endl;
	cout << "-> Não é de todo recomendado o uso de acentuação e pontuação." << endl << endl << endl;
	cout << "Escreva a palavra secreta para o jogo" << endl;
	cout << "> "; cin >> palavraSecreta;
		
	int i=0;	 //processa temp só no inicio do jogo //criamos fora para usar depois do for
	for(; i<strlen(palavraSecreta); i++)
	tracos[i] = '_';
	tracos[i]='\0';

	while(1){
		system("cls");
    	forca(erros); 	// imprime a forca
		if(erros==7){ //veririca se perdeu o jogo quando erros==7
			string opcao4;
			cout << "Perdeste o jogo, ficaste sem tentativas!" << endl << endl;
			cout << "A palavra secreta era '" << palavraSecreta << "'" << endl << endl << endl;
			cout << "Boa sorte para a próxima!" << endl;
			cout << "Obrigado por jogares :)" << endl <<endl;
			cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
			HOME6:
			cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
			cout << "2 - Para sair do jogo" << endl << endl;
			cout << "> "; cin >> opcao4;
			
				if ( opcao4 == "1" ) {
					redirecionar2();
					main();
				}
				else if ( opcao4 == "2" ) {
					goodbye();
				}
				else if ( opcao4 != "1" && opcao4 != "2" ) {
					system("cls");
					redirecionar();
					system("cls");
					goto HOME6;					
    			}
    		}
    	if(strcmp(palavraSecreta, tracos)==0){	//palavras iguais	 //Verifica se ganhou o jogo
			HOME5:
			string opcao5;
    		system("cls");
    		forca(erros);
    		
    		cout << "Parabéns, a palavra foi descoberta!" << endl << endl;
    		cout << "A palavra secreta era '" << palavraSecreta << "'" << endl;
    		cout << "Erros -> " << erros << endl << endl << endl;
    		cout << "Obrigado por jogares :)" << endl;
    		cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
			cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
			cout << "2 - Para sair do jogo" << endl << endl;
			cout << "> "; cin >> opcao5;
		
				if ( opcao5 == "1" ) {
					redirecionar2();
					main();
				}
				else if ( opcao5 == "2" ) {
					goodbye();
				}
				else if ( opcao5 != "1" && opcao5 != "2" ) {
					system("cls");
					redirecionar();
					sleep(2); system("cls");	
					goto HOME5;		
				}	
    		}

    cout << "Letras da palavra >";
    for(int i=0;i<strlen(tracos);i++){
		cout << " " << tracos[i];
    }

	cout << endl << endl << endl;
	cout << "Letra ";
	cout << "> ";
    scanf(" %c", &letra);
    int acertou_letra=0; //(0=errado e 1=acertou)

	for( int i=0; i<strlen(palavraSecreta ); i++ ){
		if( letra == palavraSecreta[i] ){
			acertou_letra=1;
        	tracos[i]=letra;	//atualiza letra que acertou...
      }
    }
    
	if( acertou_letra==0 ){	//errou
		erros++;
    }
  }
}

void menu2(){
	HOME2:
	string opcao2;
	system("cls");
	cout << "Menu - Jogo da forca" << endl << endl;
	bonecoInteiro();
	cout << "1 - Jogar com amigos e uma palavra à escolha" << endl << endl;
	cout << "2 - Jogar sozinho com palavras de uma base de dados" << endl << endl;
	cout << "3 - Voltar ao ecrã anterior" << endl << endl;
	cout << "> "; cin >> opcao2;
		if ( opcao2 == "1" ) {
			jogarComAmigos();
		}	
		else if ( opcao2 == "2" ) {
			jogarSozinho();
		}
		else if ( opcao2 == "3" ) {
			main();
		}
		else if ( opcao2 != "1" && opcao2 != "2" && opcao2 != "3" ) {
			system("cls");
			redirecionar();
			system("cls");
			goto HOME2;
		}
}

void jogarSozinho(){
	HOME3:
	system("cls");
	string opcao3;
	
	cout << "Menu - Dificuldade do jogo" << endl << endl;
	bonecoInteiro();
	cout << "1 - Fácil" << endl << endl;
	cout << "2 - Médio" << endl << endl;
	cout << "3 - Díficil" << endl << endl;
	cout << "4 - Voltar ao ecrã anterior" << endl << endl;
	cout << "> "; cin >> opcao3;	
	
	if ( opcao3 == "1" ) {
	
	char palavrasecreta[255],
		 tracos[255],
		 letra;
  
	int erros=0,
		quantPalavras;
	
	char palavra_secreta[TAMANHO_PALAVRA];
	
	FILE* facil;
	facil = fopen("palavrasFaceis.txt", "r");
	
	if(facil == 0){
        system("cls");
		cout << endl << endl; cout << "A base de dados está em falta." << endl;
        sleep(2); system("cls");
        redirecionar3();
        goto HOME3;
	}
	
	fscanf(facil, "%d", &quantPalavras);
	
	srand(time(NULL));
	int randomPalavra = rand() % 34 + 1;
	
	for(int i2 = 0; i2 <= randomPalavra; i2++){
		fscanf(facil, " %s", palavrasecreta);	
	}
	
	fclose(facil);
	
	int i=0;	 //processa temp só no inicio do jogo criado fora para usar depois do for
	for(; i<strlen(palavrasecreta); i++)
	tracos[i] = '_';
	tracos[i]='\0';
	
	while(1){
		system("cls");
    	forca(erros); 	// imprime a forca
		if(erros==7){ //veririca se perdeu o jogo quando erros==7
			HOME6:
			string opcao4;
			cout << "Perdeste o jogo, ficaste sem tentativas!" << endl << endl;
			cout << "A palavra secreta era '" << palavrasecreta << "'" << endl << endl << endl;
			cout << "Boa sorte para a próxima!" << endl;
			cout << "Obrigado por jogares :)" << endl <<endl;
			cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
			cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
			cout << "2 - Para sair do jogo" << endl << endl;
			cout << "> "; cin >> opcao4;
			
			if ( opcao4 == "1" ) {
				redirecionar2();
				main();
			}
			else if ( opcao4 == "2" ) {
				goodbye();
			}
			else if ( opcao4 != "1" && opcao4 != "2" ) {
				system("cls");
				redirecionar();
				goto HOME6;					
    	}
    }
    if(strcmp(palavrasecreta, tracos)==0){	//palavras iguais	 //Verifica se ganhou o jogo
		HOME7:
		string opcao5;
    	system("cls");
    	forca(erros);
    	cout << "Parabéns, a palavra foi descoberta!" << endl << endl;
    	cout << "A palavra secreta era '" << palavrasecreta << "'" << endl;
    	cout << "Erros -> " << erros << endl << endl << endl;
    	cout << "Obrigado por jogares :)" << endl;
    	cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
		cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
		cout << "2 - Para sair do jogo" << endl << endl;
		cout << "> "; cin >> opcao5;
		
		if ( opcao5 == "1" ) {
			redirecionar2();
			main();
		}
		else if ( opcao5 == "2" ) {
			goodbye();
		}
		else if ( opcao5 != "1" && opcao5 != "2" ) {
			system("cls");
			redirecionar();
			sleep(2); system("cls");	
			goto HOME7;		
		}	
    }

    cout << "Atenção: o sistema contém apenas palavras (não frases) e as mesmas não têm acentuação." << endl << endl << endl;
	cout << "Letras da palavra >";
    for(int i=0;i<strlen(tracos);i++){
		cout << " " << tracos[i];
    }
    cout << endl;
    
	cout << endl << endl;
	cout << "Letra ";
	cout << "> ";
    scanf(" %c", &letra);
    int acertou_letra=0; //(0=errado e 1=acertou)

	for( int i=0; i<strlen(palavrasecreta ); i++ ){
		if( letra == palavrasecreta[i] ){
			acertou_letra=1;
        	tracos[i]=letra;	//atualiza letra que acertou...
      }
    }
    
	if( acertou_letra==0 ){	//errou
		erros++;
    		}  
		}		
	}
	
	else if ( opcao3 == "2" ) {
		
		char palavrasecreta[255],
		 	tracos[255],
		 	letra;
  
		int erros=0,
			quantPalavras;
	
	char palavra_secreta[TAMANHO_PALAVRA];
	
	FILE* facil;
	facil = fopen("palavrasMedio.txt", "r");
	
	if(facil == 0){
        system("cls");
		cout << endl << endl; cout << "A base de dados está em falta." << endl;
        sleep(2); system("cls");
        redirecionar3();
        goto HOME3;
	}
	
	fscanf(facil, "%d", &quantPalavras);
	
	srand(time(NULL));
	int randomPalavra = rand() % 34 + 1;
	
	for(int i2 = 0; i2 <= randomPalavra; i2++){
		fscanf(facil, " %s", palavrasecreta);	
	}
	
	fclose(facil);
	
	int i=0;	 //processa temp só no inicio do jogo criado fora para usar depois do for
	for(; i<strlen(palavrasecreta); i++)
	tracos[i] = '_';
	tracos[i]='\0';
	
	while(1){
		system("cls");
    	forca(erros); 	// imprime a forca
		if(erros==7){ //veririca se perdeu o jogo quando erros==7
			HOME8:
			string opcao4;
			cout << "Perdeste o jogo, ficaste sem tentativas!" << endl << endl;
			cout << "A palavra secreta era '" << palavrasecreta << "'" << endl << endl << endl;
			cout << "Boa sorte para a próxima!" << endl;
			cout << "Obrigado por jogares :)" << endl <<endl;
			cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
			cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
			cout << "2 - Para sair do jogo" << endl << endl;
			cout << "> "; cin >> opcao4;
			
			if ( opcao4 == "1" ) {
				redirecionar2();
				main();
			}
			else if ( opcao4 == "2" ) {
				goodbye();
			}
			else if ( opcao4 != "1" && opcao4 != "2" ) {
				system("cls");
				redirecionar();
				goto HOME8;					
    	}
    }
    if(strcmp(palavrasecreta, tracos)==0){	//palavras iguais	 //Verifica se ganhou o jogo
		HOME9:
		string opcao5;
    	system("cls");
    	forca(erros);
    	cout << "Parabéns, a palavra foi descoberta!" << endl << endl;
    	cout << "A palavra secreta era '" << palavrasecreta << "'" << endl;
    	cout << "Erros -> " << erros << endl << endl << endl;
    	cout << "Obrigado por jogares :)" << endl;
    	cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
		cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
		cout << "2 - Para sair do jogo" << endl << endl;
		cout << "> "; cin >> opcao5;
		
		if ( opcao5 == "1" ) {
			redirecionar2();
			main();
		}
		else if ( opcao5 == "2" ) {
			goodbye();
		}
		else if ( opcao5 != "1" && opcao5 != "2" ) {
			system("cls");
			redirecionar();
			sleep(2); system("cls");	
			goto HOME9;		
		}	
    }

    cout << "Atenção: o sistema contém apenas palavras (não frases) e as mesmas não têm acentuação." << endl << endl << endl;
	cout << "Letras da palavra >";
    for(int i=0;i<strlen(tracos);i++){
		cout << " " << tracos[i];
    }
    cout << endl;
    
	cout << endl << endl;
	cout << "Letra ";
	cout << "> ";
    scanf(" %c", &letra);
    int acertou_letra=0; //(0=errado e 1=acertou)

	for( int i=0; i<strlen(palavrasecreta ); i++ ){
		if( letra == palavrasecreta[i] ){
			acertou_letra=1;
        	tracos[i]=letra;	//atualiza letra que acertou...
      }
    }
    
	if( acertou_letra==0 ){	//errou
		erros++;
    		}  
		}		
	}	
	
	else if ( opcao3 == "3" ) {
		
		char palavrasecreta[255],
		 	tracos[255],
		 	letra;
  
		int erros=0,
			quantPalavras;
	
	char palavra_secreta[TAMANHO_PALAVRA];
	
	FILE* facil;
	facil = fopen("palavrasDificil.txt", "r");
	
	if(facil == 0){
        system("cls");
		cout << endl << endl; cout << "A base de dados está em falta." << endl;
        sleep(2); system("cls");
        redirecionar3();
        goto HOME3;
	}
	
	fscanf(facil, "%d", &quantPalavras);
	
	srand(time(NULL));
	int randomPalavra = rand() % 34 + 1;
	
	for(int i2 = 0; i2 <= randomPalavra; i2++){
		fscanf(facil, " %s", palavrasecreta);	
	}
	
	fclose(facil);
	
	int i=0;	 //processa temp só no inicio do jogo criado fora para usar depois do for
	for(; i<strlen(palavrasecreta); i++)
	tracos[i] = '_';
	tracos[i]='\0';
	
	while(1){
		system("cls");
    	forca(erros); 	// imprime a forca
		if(erros==7){ //veririca se perdeu o jogo quando erros==7
			HOME10:
			string opcao4;
			cout << "Perdeste o jogo, ficaste sem tentativas!" << endl << endl;
			cout << "A palavra secreta era '" << palavrasecreta << "'" << endl << endl << endl;
			cout << "Boa sorte para a próxima!" << endl;
			cout << "Obrigado por jogares :)" << endl <<endl;
			cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
			cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
			cout << "2 - Para sair do jogo" << endl << endl;
			cout << "> "; cin >> opcao4;
			
			if ( opcao4 == "1" ) {
				redirecionar2();
				main();
			}
			else if ( opcao4 == "2" ) {
				goodbye();
			}
			else if ( opcao4 != "1" && opcao4 != "2" ) {
				system("cls");
				redirecionar();
				goto HOME10;					
    	}
    }
    if(strcmp(palavrasecreta, tracos)==0){	//palavras iguais	 //Verifica se ganhou o jogo
		HOME11:
		string opcao5;
    	system("cls");
    	forca(erros);
    	cout << "Parabéns, a palavra foi descoberta!" << endl << endl;
    	cout << "A palavra secreta era '" << palavrasecreta << "'" << endl;
    	cout << "Erros -> " << erros << endl << endl << endl;
    	cout << "Obrigado por jogares :)" << endl;
    	cout << "Jogo da Forca made by André Lopes" << endl << endl << endl;
		cout << "1 - Para voltar ao ecrã inicial" << endl << endl;
		cout << "2 - Para sair do jogo" << endl << endl;
		cout << "> "; cin >> opcao5;
		
		if ( opcao5 == "1" ) {
			redirecionar2();
			main();
		}
		else if ( opcao5 == "2" ) {
			goodbye();
		}
		else if ( opcao5 != "1" && opcao5 != "2" ) {
			system("cls");
			redirecionar();
			sleep(2); system("cls");	
			goto HOME11;		
		}	
    }

    cout << "Atenção: o sistema contém apenas palavras (não frases) e as mesmas não têm acentuação." << endl << endl << endl;
	cout << "Letras da palavra >";
    for(int i=0;i<strlen(tracos);i++){
		cout << " " << tracos[i];
    }
    cout << endl;
    
	cout << endl << endl;
	cout << "Letra ";
	cout << "> ";
    scanf(" %c", &letra);
    int acertou_letra=0; //(0=errado e 1=acertou)

	for( int i=0; i<strlen(palavrasecreta ); i++ ){
		if( letra == palavrasecreta[i] ){
			acertou_letra=1;
        	tracos[i]=letra;	//atualiza letra que acertou...
      }
    }
    
	if( acertou_letra==0 ){	//errou
		erros++;
    		}  
		}		
	}		
	
	else if ( opcao3 == "4" ) {
		system("cls");
		menu2();
	}
	
	else if ( opcao3 != "1" && opcao3 != "2" && opcao3 != "3" && opcao3 != "4" ) {
		system("cls");
		redirecionar();
		system("cls");
		goto HOME3;
	}
	
}
