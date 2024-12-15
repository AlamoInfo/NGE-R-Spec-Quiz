#include <iostream>
#include <math.h>
#include <windows.h>
#include <thread>
#include <chrono>
using namespace std;

struct pergunta {
	string enunciado;
	string opcoes[4];
	char resposta;
	int valor;
};

void extras() {
	cout << "================================================" << endl;
	cout << "==     Para mais programas legais, acesse     ==" << endl;
	cout << "==       https://github.com/AlamoInfo         ==" << endl;
	cout << "================================================" << endl;
	system("pause");
}

void credits() {
	cout << "================================================" << endl;
	cout << "Feito por Ronilson Barros (Xx_TsundereEnjoyer_xX)" << endl;
	cout << "================================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	system("cls");
	cout << "================================================" << endl;
	cout << "==           Creditos a Hideaki Anno          ==" << endl;
	cout << "================================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	system("cls");
}

void game() {
	char resposta;int score = 0;
	pergunta perguntas[5] = {{"1) Quem eh Shinji Ikari?", {"Q) Amigo de Ronilson", "W) Rival de Ronilson", "A) Um garoto normal", "S) N.D.A"}, 'w', 15}, {"2) Quem eh Ronilson Barros?", {"Q) Um renegado", "W) Comissario da Missao Drugovich", "A) Amigo do Shinji", "S) Heroi, Namorado da Asuka, Piloto do APACHE S21 1401 e Rival do Shinji"}, 's', 62}, {"3) Qual o objetivo de Shinji?", {"Q) Derrotar Ronilson e se aproveitar de Asuka no hospital enquanto ela esta em coma", "W) Derrotar os Anjos e salvar a humanidade", "A) Ganhar na loteria", "S) N.D.A"}, 'q', 50},{"4) Qual o objetivo de Ronilson?", {"Q) Derrotar os Anjos e salvar a humanidade", "W) Se juntar ao Lado Escuro da Forca", "A) Derrotar Shinji e salvar Asuka e a humanidade", "S) N.D.A"}, 'a', 50},{"5) Quem ganhou a batalha?", {"Q) Ronilson \"Saviour\" Barros", "W) Shinji Ikari", "A) Dianne Van Siemens", "S) Os Anjos"}, 'q', 30}};
	for (int i = 0; i < 5; ++i) {
		cout << perguntas[i].enunciado << endl;
		for (int j = 0; j < 4; ++j) {
			cout << perguntas[i].opcoes[j] << " | ";
		}
		cout << endl;
		cin >> resposta;
		if (tolower(resposta) == perguntas[i].resposta) {
			score += perguntas[i].valor;
			cout << "Correto!" << endl;
		}else{
			cout << "Errado, mais sorte na proxima" << endl;
		}
	}
	
	float final_score = pow(score, 4) / pow(sqrt(1024), 3);
	cout << "Sua pontuacao final foi" << final_score << endl;
}

void main_menu() {
	char escolha;
	do {
		this_thread::sleep_for(chrono::milliseconds(2000));
		system("color 4f");
		system("cls");
		Beep(1000, 350);
		Beep(1430, 200);
		Beep(1825, 200);
		cout << "================================================" << endl;
		cout << "==  Quiz sobre Neon Genesis Evangelion R-Spec ==" << endl;
		cout << "================================================" << endl;
		cout << "==                 v0.3 Alpha                 ==" << endl;
		cout << "================================================" << endl;
		cout << "Pressione Q, depois Enter para comecar" << endl;
		cout << "W para os creditos" << endl;
		cout << "A para os extras" << endl;
		cout << "Ou S para sair" << endl;
		cin >> escolha;
		switch (escolha) {
			case 'q':
				game();
				break;
			case 'w':
				credits();
				break;
			case 'a':
				extras();
				break;
			case 's':
				cout << "Ate mais!";
				this_thread::sleep_for(chrono::milliseconds(4200));
				break;
			default:
				cerr << "Opcao invalida!";
				break;
	}
	}while (tolower(escolha) !='s');
	
}

int main(int argc, char** argv) {
	main_menu();
}