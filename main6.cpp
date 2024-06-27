#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

// Estrutura para armazenar as perguntas e respostas
struct Question {
    string question;
    vector<string> options;
    char correctAnswer;
};

// Função para avaliar o jogador conforme sua pontuação
void rating(int scoreboard) {
	system("cls");
	if (scoreboard >= 13700) {
		system("color 03");
		cout << ":D\n\nVoce ultrapassou os limites!" << endl;
		system("pause");
	}
	else if (scoreboard >= 5000 && scoreboard < 13700) {
		system("color e0");
		cout << "S-Class" << endl;
		system("pause");
	}
	else if (scoreboard > 3500 && scoreboard < 5000) {
		system("color 80");
		cout << "A-Class" << endl;
		system("pause");
	}
	else if (scoreboard > 2000 && scoreboard <= 3500) {
		system("color 90");
		cout << "B-Class" << endl;
		system("pause");
	}
	else if (scoreboard > 1000 && scoreboard <= 2000) {
		system("color 40");
		cout << "C-Class" << endl;
		system("pause");
	}
	else if (scoreboard > 500 && scoreboard <= 1000) {
		system("color d0");
		cout << "D-Class" << endl;
		system("pause");
	}
	else {
		system("color 30");
		cout << ":(\n\nVoce nao pontuou o suficiente..." << endl;
		system("pause");
	}
}

// Função para randomizar o sistema de pontos
int randptsys(int difficultybias) {
	unsigned seed = time(0);
	srand(seed);
	int random_score_increment = ((rand() % 2021) + 100) - difficultybias;
	return random_score_increment;
}

// Função para exibir uma pergunta e obter a resposta do usuário
char askQuestion(const Question& q) {
    cout << q.question << endl;
    for (size_t i = 0; i < q.options.size(); ++i) {
        cout << char('A' + i) << ") " << q.options[i] << endl;
    }
    char answer;
    cout << "Sua resposta: ";
    cin >> answer;
    return toupper(answer);
}

void extras() {
	system("cls");
	cout << "https://www.youtube.com/watch?v=dQw4w9WgXcQ" << endl;
	system("pause");
}

void credits() {
	system("cls");
	cout << "\t==================================================" << endl;
	cout << "\t==   Programado por Ronilson Barros (Zero 33)   ==" << endl;
	cout << "\t==       v0.2 Insider (Em desenvolvimento)      ==" << endl;
	cout << "\t==================================================" << endl;
	sleep(6);
	system("cls");
	system("color 03");
	cout << "\t==============================================================" << endl;
	cout << "\t==               Agradecimentos especiais a                 ==" << endl;
	cout << "\t==============================================================" << endl;
	sleep(6);
	system("color 04");
	system("cls");
	cout << "\t==============================================================" << endl;
	cout << "\t==   Prof. Paulo - Por me ensinar a programar em C++;       ==" << endl;
	cout << "\t==============================================================" << endl;
	sleep(6);
	system("color 17");
	system("cls");
	cout << "\t==============================================================" << endl;
	cout << "\t==   Meus colegas de sala - Por serem apoiadores            ==" << endl;
	cout << "\t==   deste projeto;                                         ==" << endl;
	cout << "\t==============================================================" << endl;
	sleep(6);
	system("color 64");
	system("cls");
	cout << "\t==============================================================" << endl;
	cout << "\t==   Aos criadores e a fanbase de Neon Genesis Evangelion   ==" << endl;
	cout << "\t==============================================================" << endl;
	sleep(6);
	system("color a8");
	system("cls");
	cout << "\t==============================================================" << endl;
	cout << "\t==   E a voce - por jogar este jogo para testar             ==" << endl;
	cout << "\t==   seu conhecimento!                                      ==" << endl;
	cout << "\t==============================================================" << endl;
	sleep(6);
}

// Função do jogo
void game(int difficultytransfer) {
    // Lista de perguntas e respostas
    vector<Question> questions = {
        {"Quem eh Ronilson McRonald Barros?", {"O piloto do MechaChromic MA-24", "Um fa do Shinji", "Um pintor famoso no Japao", "Um streamer com fama a nivel mundial"}, 'A'},
        {"Quem eh Shinji Ikari?", {"Amigo de Ronilson", "Um streamer com fama a nivel nacional", "Rival de Ronilson e piloto do Eva 01", "Um garoto de 16 anos com um sotaque noruegues"}, 'C'},
        {"Qual o objetivo de Ronilson?", {"Participar do programa \"Ferrari Corse Clienti\", na Italia", "Negar a existencia dos Anjos", "Recuperar o \"Tempo Engarrafado\", o Stand mais antigo do mundo", "Derrotar Shinji, conquistar o coracao de Asuka e salvar a humanidade"}, 'D'},
        {"Como eh feita a BASE-32?", {"Agua, LCL, Diesel e Mountain Dew", "Oxido de Ferro e liga de Cromo", "Roentgenio, Rutherfordio e Livermorio", "N2O"}, 'A'},
        {"Qual o bordao de Ronilson?", {"Eu me escondi enquanto tentava me consertar", "Aquele que (acao) vai engolir chumbo!", "Sacrificio de um pela vida de dez", "Em coma hoje, acordada amanha. Ouviu essa? Entao METE MARCHA!"}, 'C'},
        {"Qual eh o objetivo de Shinji?", {"Derrotar Ronilson e se aproveitar da vulnerabilidade de Asuka no hospital", "Conseguir a lideranca da NERV", "Reger o setor dos Mechas de batalha, produzindo novos Evas", "Conseguir 150 M de inscritos"}, 'A'},
        {"O que Shinji fez no hospital?", {"Ele nao fez nada", "Ele se aproveitou do fato da Asuka estar inconsciente e usou a \"Isca Mestra\"", "Agiu de forma etica e natural", "Fez um drama"}, 'B'},
        {"Ronilson McRonald Barros, no universo R-Spec, pode ser considerado como o ", {"Antagonista", "Personagem secundario", "Ditagonista", "Protagonista"}, 'D'},
        {"Shinji Ikari, no universo R-Spec, pode ser considerado como o ", {"Ditagonista", "Personagem secundario", "Antagonista", "Objetivo do Protagonista"}, 'C'},
        {"Quem foi \"Luis Flister Eufrates\"?", {"Um dos aliados de Ronilson, na COMIL", "Um dos rivais secundarios de Ronilson, na Seele", "Um dos soldados de alta patente do Exercito Japones", "O Presidente do Japao"}, 'A'}
    };

    int score = 0;

    // Loop para fazer as perguntas ao usuário
    for (const auto& q : questions) {
        char userAnswer = askQuestion(q);
        if (userAnswer == q.correctAnswer) {
            cout << "Correto!" << endl;
            score = score + randptsys(difficultytransfer);
        } else {
            cout << "Incorreto. A resposta correta eh: " << q.correctAnswer << endl;
            score = score - 25;
        }
        sleep(3);
        system("cls");
    }

    // Exibir a pontuação final
    cout << "Voce ganhou" << score << " pontos. " << endl;
    system("pause");
    rating(score);
}

// Função para selecionar a dificuldade
void diff_select_screen() {
	int difficulty;
	cout << "Insira a dificuldade (Isso ira afetar a pontuacao recebida e a final): ";
	cin >> difficulty;
	game(difficulty);
}

// Menu principal
int main() {
	char escolha;
	
	system("color 43");
	Beep(950, 200);
	Beep(1400, 200);
	Beep(1800, 200);

	cout << "\t================" << endl;
	cout << "\tInicializando..." << endl;
	cout << "\t================" << endl;
	sleep(7);
		
	do {
		system("color 43");
		system("cls");

		cout << "\t=====================================================" << endl;
		cout << "\t==   Quiz sobre Neon Genesis Evangelion (R-Spec)   ==" << endl;
		cout << "\t==        v0.2 Insider (Em desenvolvimento)        ==" << endl;
		cout << "\t==     Programmed by Ronilson Barros (Zero 33)     ==" << endl;
		cout << "\t=====================================================" << endl;
		cout << endl;
		system("pause");
		system("cls");
		system("color 3f");
		cout << "Q) Comecar\nW) Creditos\nA)Extras\nS) Sair" << endl;
		cin >> escolha;
		char escolha_raw = toupper(escolha);
		switch (escolha_raw) {
			case 'Q':
				diff_select_screen();
				break;
			case 'W':
				credits();
				break;
			case 'A':
				extras();
				break;
			case 'S':
				cout << "Saindo...";
				break;
			default:
				cout << "Valor invalido. Insira um valor valido.";
				break;
		}
		if (escolha_raw == 'S') {
			break;
		}
	} while(true);
}