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
	for (int s=1; s<61; s++){
		seatFace[1][s] = s + faceCount;
		faceCount-=2;
		if(faceCount == 1){
			faceCount = -1;
		}
		if (faceCount == -11){
			faceCount = 11;
		}
	}
	// seatFace[1][1] = 12;
	// seatFace[2][1] = 11;
	// seatFace[3][1] = 10;
	// seatFace[4][1] = 9;
	// seatFace[5][1] = 8;
	// seatFace[6][1] = 7;
	// seatFace[7][1] = 6;
	// seatFace[8][1] = 5;
	// seatFace[9][1] = 4;
	// seatFace[10][1] = 3;
	// seatFace[11][1] = 2;
	// seatFace[12][1] = 1;
	// seatFace[13][1] = 24;
	// seatFace[14][1] = 23;
	// seatFace[15][1] = 22;
	// seatFace[16][1] = 21;
	// seatFace[17][1] = 20;
	// seatFace[18][1] = 19;
	// seatFace[19][1] = 18;
	// seatFace[20][1] = 17;
	// seatFace[21][1] = 16;
	// seatFace[22][1] = 15;
	// seatFace[23][1] = 14;
	// seatFace[24][1] = 13;
	// seatFace[25][1] = 36;
	// seatFace[26][1] = 35;
	// seatFace[27][1] = 34;
	// seatFace[28][1] = 33;
	// seatFace[29][1] = 32;
	// seatFace[30][1] = 31;
	// seatFace[31][1] = 30;
	// seatFace[32][1] = 29;
	// seatFace[33][1] = 28;
	// seatFace[34][1] = 27;
	// seatFace[35][1] = 26;
	// seatFace[36][1] = 25;
	// seatFace[37][1] = 48;
	// seatFace[38][1] = 47;
	// seatFace[39][1] = 46;
	// seatFace[40][1] = 45;
	// seatFace[41][1] = 44;
	// seatFace[42][1] = 43;
	// seatFace[43][1] = 42;
	// seatFace[44][1] = 41;
	// seatFace[45][1] = 40;
	// seatFace[46][1] = 39;
	// seatFace[47][1] = 38;
	// seatFace[48][1] = 37;
	// seatFace[49][1] = 60;
	// seatFace[50][1] = 59;
	// seatFace[51][1] = 58;
	// seatFace[52][1] = 57;
	// seatFace[53][1] = 56;
	// seatFace[54][1] = 55;
	// seatFace[55][1] = 54;
	// seatFace[56][1] = 53;
	// seatFace[57][1] = 52;
	// seatFace[58][1] = 51;
	// seatFace[59][1] = 50;
	// seatFace[60][1] = 49;

	for (int d=61; d<109; d++){
		seatFace[1][d] = d + faceCount;
		faceCount-=2;
		if(faceCount == 1){
			faceCount = -1;
		}
		if (faceCount == -11){
			faceCount = 11;
		}
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
