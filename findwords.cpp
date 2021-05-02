#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

const int cols = 16, rows = 15;

char words[rows][cols] = {	"tgbwwinterwsesn",
                            "aaunttmmhfoodnb",
                            "jlwcqldzmpmvdmr",
                            "asagmquwvvbsohi",
                            "bwplotanadtpgnc",
                            "rewngodjcpnatnk",
                            "eeotwosbqharrsa",
                            "azcgeswewnaknpb",
                            "dinnerqodlwdcar",
                            "onopkwmparktzcc",
                            "qbfrogmamwpweey",
                            "lqzqnnmrzjjsclg",
                            "mosgzczetdbooto",
                            "pdcrzmsngrdnrpz",
                            "ohnkzwaterjgtra"};

char *getWordVertical(int columnIndex);
char *reverse(char *strToReverse);
bool searchVertical(char *strCase);
bool searchHorizontal(char *strCase);

int main(){
	char word[16];
	int n;
	cin >> n;
	cin.ignore(1, '\n');
	for(int i = 0; i < n; i++){
		cin.getline(word, 16, '\n');
		if(searchVertical(word) || searchHorizontal(word)){
			cout << "Ada\n";
		}
		else{
			cout << "Tidak Ada\n";
		}
	}
	return 0;
}

char *getWordVertical(int columnIndex){
	char *verticalWord = (char *) malloc(16);
	for(int i = 0; i < 15; i++){
		verticalWord[i] = words[i][columnIndex];
	}
	return verticalWord;
}

char *reverse(char *strToReverse){
	char *reverseResult = (char *) malloc(strlen(strToReverse));
	for(int i = 0; i < strlen(strToReverse); i++){
		reverseResult[i] = strToReverse[strlen(strToReverse) - 1 - i];
	}
	return reverseResult;
}
