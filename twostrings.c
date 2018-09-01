#include <stdio.h>
#include <string.h>
int main ()
{
	unsigned char T;
	char line1[4];
	fgets(line1, 8, stdin);
	sscanf(line1, "%hhu", &T);
	char answers[T];

	for (unsigned char i =0; i < T; i++){
		char buffer[200000];
		char line[200000];
		size_t word1 = 0;
		size_t word2 = 0;
		char b = getchar()
		while (b != '\n'){

		}
		fgets(buffer, 200000, stdin);
		sscanf(buffer, "%s", line);
		char c;
		int count = 0;
		c = line[count];
		while(c != ' '){
			c = line[count];
			word1 += c;
			count ++;
		}
		count++;
		c = line[count];
		while(c != '\0'){
			c = line[count];
			word2 += c;
		}
		if(word1 == word2){
			answers[i] = 1;
		}
		if(word1 != word2){
			answers[i] = 0;
		}

	}

	for(int m=0; m< T; m++){
		if(answers[m] == 1){
			printf("YES");
		}
		if(answers[m] == 0){
			printf("NO");
		}
	}

	return 0;
}
