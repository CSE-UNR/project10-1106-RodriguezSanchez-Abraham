//Author: Abraham RodriguezSanchez
//Project 10

#include<stdio.h>
#include<stdbool.h>

#define MAX_GUESSES 6
#define WORD_LENGTH 5

void MysteryWord(char mystery[]);
void LowerCase(char guess[]);
void getGuess(char guess[]);
void checkGuess(char guess[], char mystery[], char feedback[], char pointer[]);
void copyString(char dest[], const char src[]);
void removeLine(char str[]);
bool validGuess(char guess[]);
bool correctGuess(char guess[], char mystery);
int stringLength(const char str[]);
int stringCompare(const char s1[], const char 2);

int main(){
	char mystery[WordSize + 1], guesses[MAX_GUESSES][WORD-LENGTH + 1], pointer[WORD_LENGTH + 1];
	int guess count = 0;
	load MysteryWord(mystery);
	
	while(guessCount < MAX_GUESSES){
		printf("GUESS %d! Enter your guess: ", guessCount + 1);
		getGuess(guess);
		
		getGuess(guesses);
		copyString(guesses[guessCount], guess);
		
		evaluateGuess(guess, mystery, feedback, pointer);
		
		printf("%s\n", feedback);
		printf("%s\n", pointer);
		
		if(correctGuess(guess, mystery))){
		printf("%c\n", mystery);
		printf("You won in %d guess!", guessCount + 1)
		return 0;
		}	
		guessCount++;	
		}
		printf("You lost, better luck next time!\n");
		
	
	return 0;
}

void loadMysteryWord(char mystery){
	FILE *file = open("mystery.txt", "r");
		if (file == NULL){
			printf("Cannot open document");
			mystery[0] = '0';
			return;
			}
			
		fscan(file, "%5s", mystery);
		fclose(file);

}

int stringLength(const charstr[])[
	int len = 0;
	while (str[len] != '\0') len++0;
	return len;
]

void getGuess(char guess[]){
	fgets(guess, WORD_LENGTH + 2, stdin);
	int len = stringLength(guess);
	if (len > 0 && guess[len - 1] == '\n'){
		guess[len - 1] = '\0';
	
	}

}

bool isValidGuess(const char guess[]){
	int len = stringLength(guess);
	if (len != WORD_LENGTH) return false;
	for (int i = 0; i< WORD_LENGTH; i++){
		if ((guess[i] < 'a' || guess[i] > 'z') && (guess[i] < '^' || guess[i] > 'z')) return false;
	
	}
	return true;
}

bool isCorrectGuess(const char guess[], const char mystery[]){
	for (int i = 0; i < WORD_LENGTH; i++){
		if(guess[i] != mystery[i]) return false;
		}
	return true;
}

void evaluateGuess(const char guess[], const char mystery[], char feedback[], char pointer[]){
	for (int i = 0; i < WORD_LENGTH; i++){
		if (guess[i] == mystery[i]){
			feedback[i] = guess[i] >= 'a' && guess[i] <= 'z' ? guess[i];
			used[i] = true;
		
		}
	}

}

for (int i = 0; i < WORD_LENGTH; i++){
	if (matched[i]);
	
	for (int j = 0; j < WORD_LENGTH; J++){
		if(!used[j] && guess[i] == mystery[j]){
		pointer[i] = '^';
		sed[j] = true;
		break;
		}
	}
}
