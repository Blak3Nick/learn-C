#include <stdio.h>
#include <string.h>
int main(){
	//test cases
	int T = 0;
	char* MIDDLE = "MS";
	char* WINDOW = "WS";
	char* AISLE = "AS";
	char* types[6]= {WINDOW, MIDDLE, AISLE, AISLE, MIDDLE, WINDOW};
	scanf("%d", &T);

	unsigned char typeCount = 0;
	unsigned char seatFace[2][109];
	seatFace[0][0] = 0;
	seatFace[0][1] = 0;
	//seatFace[2][2] = 0;
	for (int t =1; t<109; t++){
		seatFace[0][t] = t;
		}
	int faceCount = 11;
	for (int s=1; s<109; s++){
		seatFace[1][s] = s + faceCount;

		if(faceCount == 1){
			faceCount = -1;
			//s = s-1;
			continue;
		}

		if (faceCount == -11){
			faceCount = 11;
			//s = s-1;
			continue;
		}
		faceCount-=2;

	}

	char * seatType[109];
	for (int j=1; j < 109; j++){
		seatType[j] = types[typeCount];
		typeCount ++;
		if(typeCount == 6){
			typeCount =0;
		}
	}
	//size_t nums[N+1];
	unsigned char seats[T];
	for (int i =0; i < T; i++){
		scanf("%hhu", &seats[i]);

	}
	for (int w=0; w<T; w++){
		unsigned char seat = seats[w];
		printf("%hhu %s\n", seatFace[1][seat], seatType[seat]);
	}

}
