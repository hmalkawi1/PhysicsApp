#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_SZ 256

struct student {
	char id[15];
	char name[100] ;
};

void getinfo();

void answerme(char *answer);

int main() {
	
	 char *answer = malloc (MAX_NAME_SZ);
	 char word[1000];
	 char sentence[1000];
	 char message[1000];
	 char summary[1000];
	 char find[1000];
	 char steps[1000];
	 char cansolve[1000];
	 char cantsolve[1000];
	 char reason[1000];
	 char currentDesktop[1000];
	 char notagree[1000];

	
	FILE *fptr;
	fptr = fopen("C:\\Users\\Program.txt","w");

    //fptr = fopen("C:\\Users\\Homam\\Desktop\\Program.txt","w");

    

printf("Welcome to our Physics App!");
printf ("\nWould you like to begin? [Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);

answerme(answer);

if(*answer == 'y' || *answer == 'Y'){
	getinfo();
	printf("\nprogram starting now...");
}


else if(*answer == 'n' || *answer == 'N'){
	printf("\nThank you, program will close now....");
	return 0;
}


printf("\n\nStep 1: Read the question few times, underline important words. (Press Enter to continue to next step)");
getchar();

printf("\n\nStep 2: Is there a word/phrase (words/phrases) you do not understand? [Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'y' || *answer == 'Y'){
printf("Enter the word/phrase:");
fgets (word, MAX_NAME_SZ, stdin);
fprintf(fptr,"\nWord/Phrase that I do not understand: %s", word);
printf("Thank you, go ahead and search and seek help from your instructor and then continue. (Press Enter to continue to next step)");
getchar();
}
else{
	fprintf(fptr,"\nIs there a word/phrase you do not understand: No.");
	}



printf("\n\nStep 3: Now is there a sentence you do not understand? [Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'y' || *answer == 'Y'){
	printf("Enter the sentence:");
	fgets (sentence, MAX_NAME_SZ, stdin);
	fprintf(fptr,"\nSentence which I do not understand: %s", sentence);
	printf("Thank you, go ahead and search google for a definition and then continue. (Press Enter to continue to next step)");
	getchar();
}
else{
	fprintf(fptr,"\nIs there a sentence you do not understand: No.");
	}


printf("\n\nStep 4: Do you understand the question?[Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'n' || *answer == 'N'){
	fprintf(fptr,"\nDo you understand the question: No");
	printf("Is there a sentence you don't understand?[Y/N]");
	fgets (answer, MAX_NAME_SZ, stdin);
	answerme(answer);
	if(*answer == 'y' || *answer == 'Y'){
		printf("Search this sentence on the internet, or seek the professors help. (Press Enter to continue to next step)");
		getchar();}
	if(*answer == 'n' || *answer == 'N'){
	printf("Okay, press Enter to continue...");}
}
else{
	fprintf(fptr,"\nDo you understand the question: Yes");
	}


printf("\n\nStep 5: Try to picture the situation in your head + draw a simple picture. (Press Enter to continue to next step)");
getchar();	


printf("\n\nStep 6: What is known? What is unkown? Enter your message:");
fgets (message, MAX_NAME_SZ, stdin);
if (message == ""){
	printf("Please enter an answer. ");
}
fprintf(fptr,"\nMy Knowns and unknowns: %s", message);



printf("\n\nStep 7: Summarize the question in a short sentence:");
fgets (summary, MAX_NAME_SZ, stdin);
fprintf(fptr,"\nSummary of my question: %s", summary);


printf("\n\nStep 8: Explain the question to a friend (real/imaginary). (Press Enter to continue to next step)");
getchar();	


printf("\n\nStep 9: What is required to find?");
fgets (find, MAX_NAME_SZ, stdin);
fprintf(fptr,"\nWhat I'm required to find: %s", find);

printf("\n\nStep 10: Write general steps of solution: (write steps on same line, seperated by space, not on seperate lines !)");
fgets (steps, MAX_NAME_SZ, stdin);
fprintf(fptr,"\nGeneral Steps: %s", steps);

printf("\n\nStep 11: Can you qualitatively predict the answer?[Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'n' || *answer == 'N'){
	printf("Provide one reason why you can't:");
	fgets (cantsolve, MAX_NAME_SZ, stdin);}
	fprintf(fptr,"\nI'm unable to qualitatively predict the answer because: %s", cantsolve);
if(*answer == 'y' || *answer == 'Y'){
	printf("What is your prediction?");
	fgets (cansolve, MAX_NAME_SZ, stdin);
	if(cansolve != ""){
	fprintf(fptr,"\nMy prediction is : %s", cansolve);}
	//getchar();
}


printf("\n\nStep 12: Solve the problem. (Press Enter to continue to next step)");
getchar();

printf("\n\nStep 13: Did you find the answer?[Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'n' || *answer == 'N'){
	printf("Provide one reason and then seek help. (After entering your reason, press Enter to continue to next step)");
	fgets (reason, MAX_NAME_SZ, stdin);
	fprintf(fptr,"\nI can't find the solution because : %s", reason);
}


printf("\n\nStep 14: Does the answer agree with your prediction?[Agrees/Disagrees]");
fgets (answer, MAX_NAME_SZ, stdin);
fprintf(fptr,"\nMy answer: %s", answer);


printf("\n\nStep 15: Does the answer make sense?[Y/N]");
fgets (answer, MAX_NAME_SZ, stdin);
answerme(answer);
if(*answer == 'n' || *answer == 'N'){
fprintf(fptr,"\nDoes my answer make sense: No");}
if(*answer == 'y' || *answer == 'Y'){
fprintf(fptr,"\nDoes my answer make sense: Yes");}


printf("\n\nStep 16: Does it agree with the answer? (if given)[Y/N] or [NA(Not applicable)]");			//NA not working, due to pointer of this string being 'n' as well just like no. so program thinks
fgets (answer, MAX_NAME_SZ, stdin);																	   //No and NA are equal
if(*answer == 'n' || *answer == 'N'){
	printf("Give one reason and seek help.");
	fgets (notagree, MAX_NAME_SZ, stdin);
	fprintf(fptr,"\nMy solution does not agree with the answer because: %s", notagree);
}


printf("\n\nStep 17: You have reached the conclusion ! Congratulations");
fclose(fptr);
getchar();
};



void getinfo(){
	struct student student1 ;
	FILE *fptr;
	fptr = fopen("C:\\Users\\Homam\\Desktop\\program.txt","w");
	char temp;
	printf("please insert your name:");
	fgets (student1.name, MAX_NAME_SZ, stdin);
	fprintf(fptr,"Student Name: %s",student1.name);

	printf("Please insert your Student ID:");
	//scanf("%10d", &student1.id);
	fgets (student1.id, 15, stdin);
	fprintf(fptr,"\nStudent Number: %s",student1.id);
};

void answerme(char *answer){					//will keep repeating the question until user inputs something. Will not allow user to move to next step until current step is complete.
	
	while(*answer !='n' && *answer != 'N' && *answer != 'y' && *answer != 'Y'){
		
		printf("\nPlease enter [Y], or [N]");
		fgets (answer, MAX_NAME_SZ, stdin);
	}

};

