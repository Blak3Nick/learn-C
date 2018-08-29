#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count =0;
	char a[10000];
	char b[10000];
void *readFile1(char *fileName)
{
    printf("Reading\n");
    FILE *file = fopen(fileName, "r");    
    size_t n = 0;
    int c;

    if (file == NULL)
        return NULL;
    while ((c = fgetc(file)) != EOF)
    {
        a[n++] = (char) c;
    }

    a[n] = '\0';
    fclose(file);
    exit(0);
}
void *readFile2(char *fileName)
{
    FILE *file = fopen(fileName, "r");

    size_t n = 0;
    int c;

    if (file == NULL)
        return NULL; //could not open file



    while ((c = fgetc(file)) != EOF)
    {
        b[n++] = (char) c;
    }

    b[n] = '\0';
    fclose(file);
    exit(0);
}
int check(char* c, char* d){
    int len1 = strlen(c);
    printf("String length:\t%d", len1);
    int len2 = strlen(d);
    count = 0;
    int notFound = 0;
    char first[len1];
    char second[len2];
    for (int j=0; j<len2; j++){
        first[j] = a[j];
    }
    for (int i=0; i<len1; i++){
    second[i] = b[i];
    }
    for (int j=0; j<len1; j++){
        notFound = 0;
        for (int k=0; k< len2; k++){
            if(first[j] == '\0'){
                j++;
                break;
            }
            if(first[j] == second[k])
            {
                first[j]= '\0';
                j++;
                second[k] = '\0';
                notFound = 1;
                break;
            }
        }
        if(notFound == 0){
        first[j] = '\0';
        count ++;
        }
    }
    for (int p = 0; p<len2; p++){
        notFound = 0;
        for (int q=0; q <len1; q++){
            if(second[p]=='\0'){
                p++;
                break;
            }
            if(second[p] == first[q])
            {
                second[p] = '\0';
                p++;
                first[q] = '\0';
                notFound = 1;
                break;
            }

        }
        if(notFound == 0){
        second[p] = '\0';
        count ++;
        }
    }

    return count;
}
int main(void )
{
	int num;
	//char a[1000];
	//char b[1000];
	scanf("%d", &num);
    int c[num];
    readFile1("in1.txt");
	readFile2("in2.txt");
	for (int j = 0; j< num; j++){
	//scanf("%[^\n]%*c", a);
	//scanf("%s", a);
    printf("here in loop j\n");

	//scanf("%s", b);
    c[j] = check(a, b);

	}
	for (int i =0; i<num; i++){
	    printf("Checked:\t%d ", c[i]);
	}

}
