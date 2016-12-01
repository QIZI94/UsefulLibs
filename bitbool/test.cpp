#include "bitbool.h"
#include <stdio.h>



int main(){
	//booleight - test
	unsigned char readTest8=0x00;		
	
	printf("//----BOOL8----//\n\nBOOL8 testing:\n\n");
 	BOOL8 B8;
	
	
	
	
	B8.b0 = false;
	B8.b1 = true;
	B8.b2 = true;
	B8.b3 = true;
	B8.b4 = true;
	B8.b5 = true;
	B8.b6 = true;	
	B8.b7 = true;
	
	B8 = ~B8;
	B8 |= 0xFF;
	B8 &= 0xFE;
	
	
	//B8 = B8 = B8.value;  	
	printf("Static assighment is %s tested\n", B8.value == 0xFE ? "Succesfuly" : "Unsuccesfuly");
	

	B8 = 0xCC;
	
	printf("operator = and/or .value are %s tested\n", B8.value == 0xCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B8.size();i++)
		B8(i,true);
	 

	printf("operator (index, value) is %s tested\n", B8.value == 0xFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest8=0x00;
	for(char i=0; i<B8.size()-1;i++)
		readTest8 |= B8[i]<<i;
		
	printf("operator [] is %s tested\n", readTest8 == 0x7F ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");
	


	printf("BOOL8_REDEF testing:\n\n");
 
	BOOL8_REDEF(ONE) B8R1;
	BOOL8_REDEF(ONE,TWO) B8R2;
	BOOL8_REDEF(ONE,TWO,THREE) B8R3;
	BOOL8_REDEF(ONE,TWO,THREE,FOUR) B8R4;
	BOOL8_REDEF(ONE,TWO,THREE,FOUR,FIVE) B8R5;
	BOOL8_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX) B8R6;
	BOOL8_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B8R7;

	BOOL8_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT) B8R;
	
	
	B8R.bONE = false;
	B8R.bTWO = true;
	B8R.bTHREE = true;
	B8R.bFOUR = true;
	B8R.bFIVE = true;
	B8R.bSIX = true;
	B8R.bSEVEN = true;	
	B8R.bEIGHT = true;
	
	printf("\n%X\n",B8R.value);
	printf("Static assigment is %s tested\n", B8R.value == 0xFE ? "Succesfuly" : "Unsuccesfuly");
	
	
	B8R = BOOL8(true, true, true, true, true, true, true, false);

	printf("BOOL8 contructor assigment is %s tested\n", B8R.value == 0x7F ? "Succesfuly" : "Unsuccesfuly");	
	
	B8R = 0xCC;
	
	printf("operator = and/or .value are %s tested\n", B8R.value == 0xCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B8R.size();i++)
		B8R(i,true);
	 

	printf("operator (index, value) is %s tested\n", B8R.value == 0xFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest8=0x00;
	for(char i=0; i<B8R.size()-1;i++)
		readTest8 |= B8R[i]<<i;
		
	printf("operator [] is %s tested\n", readTest8 == 0x7F ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");
	
	





	printf("BOOL8_REDEF_PREF testing:\n\n");
 	
	BOOL8_REDEF_PREFIX(NUM_) B8RP0;
	BOOL8_REDEF_PREFIX(NUM_,ONE) B8RP1;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO) B8RP2;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE) B8RP3;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE,FOUR) B8RP4;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE,FOUR,FIVE) B8RP5;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE,FOUR,FIVE,SIX) B8RP6;
	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B8RP7;

	BOOL8_REDEF_PREFIX(NUM_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT) B8RP;
	
	
	B8RP.NUM_ONE = false;
	B8RP.NUM_TWO = true;
	B8RP.NUM_THREE = true;
	B8RP.NUM_FOUR = true;
	B8RP.NUM_FIVE = true;
	B8RP.NUM_SIX = true;
	B8RP.NUM_SEVEN = true;	
	B8RP.NUM_EIGHT = true;

	
	printf("Static assighment is %s tested\n", B8RP.value == 0xFE ? "Succesfuly" : "Unsuccesfuly");
	
	B8RP = BOOL8(true, true, true, true, true, true, true, false);

	printf("BOOL8 contructor assigment is %s tested\n", B8RP.value == 0x7F ? "Succesfuly" : "Unsuccesfuly");	

	B8RP = 0xCC;
	
	printf("operator = and/or .value are %s tested\n", B8RP.value == 0xCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B8RP.size();i++)
		B8RP(i,true);
	 

	printf("operator (index, value) is %s tested\n", B8RP.value == 0xFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest8=0x00;
	for(char i=0; i<B8RP.size()-1;i++)
		readTest8 |= B8RP[i]<<i;
		
	printf("operator [] is %s tested\n", readTest8 == 0x7F ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n\n");	




	//boolhex - test
	
	unsigned short readTest16;
	
	printf("//----BOOL16----//\n\nBOOL16 testing:\n\n");
	

	BOOL16 B16;
	
	
	B16.b0 = false;
	B16.b1 = true;
	B16.b2 = true;
	B16.b3 = true;
	B16.b4 = true;
	B16.b5 = true;
	B16.b6 = true;	
	B16.b7 = true;
	B16.b8 = true;
	B16.b9 = true;
	B16.b10 = true;
	B16.b11 = true;
	B16.b12 = true;
	B16.b13 = true;	
	B16.b14 = true;	
	B16.b15 = true;

	printf("Static assighment is %s tested\n", B16.value == 0xFFFE ? "Succesfuly" : "Unsuccesfuly");
	
	B16 = 0xCCCC;
	
	printf("operator = and/or .value are %s tested\n", B16.value == 0xCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B16.size();i++)
		B16(i,true);
	 

	printf("operator (index, value) is %s tested\n", B16.value == 0xFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest16=0x0000;
	for(char i=0; i<B16.size()-1;i++)
		readTest16 |= B16[i]<<i;
		
	printf("operator [] is %s tested\n", readTest16 == 0x7FFF ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");
	


	
	printf("BOOL16_REDEF testing:\n\n");
	BOOL16_REDEF(ONE) B16R1;
	BOOL16_REDEF(ONE,TWO) B16R2;
	BOOL16_REDEF(ONE,TWO,THREE) B16R3;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR) B16R4;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE) B16R5;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX) B16R6;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B16R7;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,) B16R8;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE) B16R9;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN) B16R10;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN) B16R11;	
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE) B16R12;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN) B16R13;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN) B16R14;
	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN) B16R15;
		

	BOOL16_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN) B16R;
	
	
	B16R.bONE = false;
	B16R.bTWO = true;
	B16R.bTHREE = true;
	B16R.bFOUR = true;
	B16R.bFIVE = true;
	B16R.bSIX = true;
	B16R.bSEVEN = true;	
	B16R.bEIGHT = true;
	B16R.bNINE = true;
	B16R.bTEN = true;
	B16R.bELEVEN = true;
	B16R.bTWELVE = true;
	B16R.bTHIRTEEN = true;
	B16R.bFOURTEEN = true;	
	B16R.bFIFTEEN = true;	
	B16R.bSIXTEEN = true;
	
	
	printf("Static assighment is %s tested\n", B16R.value == 0xFFFE ? "Succesfuly" : "Unsuccesfuly");
		
	B16R = BOOL16(true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false);

	printf("BOOL16 contructor assigment is %s tested\n", B16R.value == 0x7FFF ? "Succesfuly" : "Unsuccesfuly");

	B16R = 0xCCCC;
	
	printf("operator = and/or .value are %s tested\n", B16R.value == 0xCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B16R.size();i++)
		B16R(i,true);
	 

	printf("operator (index, value) is %s tested\n", B16R.value == 0xFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest16=0x0000;
	for(char i=0; i<B16R.size()-1;i++)
		readTest16 |= B16R[i]<<i;
		
	printf("operator [] is %s tested\n", readTest16 == 0x7FFF ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");
	


	printf("BOOL16_REDEF_PREF testing:\n\n");
 
	
	BOOL16_REDEF_PREFIX(PREFIX_) B16RP0;	
	BOOL16_REDEF_PREFIX(PREFIX_,ONE) B16RP1;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO) B16RP2;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE) B16RP3;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR) B16RP4;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE) B16RP5;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX) B16RP6;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B16RP7;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT) B16RP8;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE) B16RP9;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN) B16RP10;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN) B16RP11;	
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE) B16RP12;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN) B16RP13;
	BOOL16_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN) B16RP14;
	BOOL16_REDEF_PREF(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN) B16RP15;
	
	BOOL16_REDEF_PREF(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN) B16RP;
	
	
	B16RP.PREFIX_ONE = false;
	B16RP.PREFIX_TWO = true;
	B16RP.PREFIX_THREE = true;
	B16RP.PREFIX_FOUR = true;
	B16RP.PREFIX_FIVE = true;
	B16RP.PREFIX_SIX = true;
	B16RP.PREFIX_SEVEN = true;	
	B16RP.PREFIX_EIGHT = true;
	B16RP.PREFIX_NINE = true;
	B16RP.PREFIX_TEN = true;	
	B16RP.PREFIX_ELEVEN = true;
	B16RP.PREFIX_TWELVE = true;
	B16RP.PREFIX_THIRTEEN = true;
	B16RP.PREFIX_FOURTEEN = true;	
	B16RP.PREFIX_FIFTEEN = true;	
	B16RP.PREFIX_SIXTEEN = true;
	
	
	printf("Static assighment is %s tested\n", B16RP.value == 0xFFFE ? "Succesfuly" : "Unsuccesfuly");
	
	B16RP = BOOL16(true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false);

	printf("BOOL16 contructor assigment is %s tested\n", B16RP.value == 0x7FFF ? "Succesfuly" : "Unsuccesfuly");

	B16RP = 0xCCCC;
	
	printf("operator = and/or .value are %s tested\n", B16RP.value == 0xCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B16RP.size();i++)
		B16RP(i,true);
	 

	printf("operator (index, value) is %s tested\n", B16RP.value == 0xFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest16=0x0000;
	for(char i=0; i<B16RP.size()-1;i++)
		readTest16 |= B16RP[i]<<i;
		
	printf("operator [] is %s tested\n", readTest16 == 0x7FFF ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n\n\n");

	

	unsigned long readTest32;
	
	printf("//----BOOL32----//\n\nBOOL32 testing:\n\n");
	BOOL32 B32;
	

	B32.b0 = false;
	B32.b1 = true;
	B32.b2 = true;
	B32.b3 = true;
	B32.b4 = true;
	B32.b5 = true;
	B32.b6 = true;	
	B32.b7 = true;
	B32.b8 = true;
	B32.b9 = true;
	B32.b10 = true;
	B32.b11 = true;
	B32.b12 = true;
	B32.b13 = true;	
	B32.b14 = true;	
	B32.b15 = true;
	B32.b16 = true;
	B32.b17 = true;
	B32.b18 = true;
	B32.b19 = true;
	B32.b20 = true;
	B32.b21 = true;
	B32.b22 = true;
	B32.b23 = true;
	B32.b24 = true;
	B32.b25 = true;
	B32.b26 = true;
	B32.b27 = true;
	B32.b28 = true;
	B32.b29 = true;
	B32.b30 = true;
	B32.b31 = true;
	
		
	
	printf("Static assighment is %s tested\n", B32.value == 0xFFFFFFFE ? "Succesfuly" : "Unsuccesfuly");

		

	B32 = 0xCCCCCCCC;
	
	printf("operator = and/or .value are %s tested\n", B32.value == 0xCCCCCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B32.size();i++)
		B32(i,true);
	 

	printf("operator (index, value) is %s tested\n", B32.value == 0xFFFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest32=0x00000000;
	for(char i=0; i<B32.size()-1;i++)
		readTest32 |= B32[i]<<i;
		
	printf("operator [] is %s tested\n", readTest32 == 0x7FFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	


	printf("\n");


	printf("BOOL32_REDEF testing:\n\n");
	BOOL32_REDEF(ONE) B32R1;
	BOOL32_REDEF(ONE,TWO) B32R2;
	BOOL32_REDEF(ONE,TWO,THREE) B32R3;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR) B32R4;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE) B32R5;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX) B32R6;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B32R7;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT) B32R8;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE) B32R9;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN) B32R10;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN) B32R11;	
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE) B32R12;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN) B32R13;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN) B32R14;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN) B32R15;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN) B32R16;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN) B32R17;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN) B32R18;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN) B32R19;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY) B32R20;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE) B32R21;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO) B32R22;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE) B32R23;
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR) B32R24;
		
	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE) B32R25;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX) B32R26;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN) B32R27;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT) B32R28;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE) B32R29;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY) B32R30;

	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY,THIRTYONE) B32R31;

	

	



	BOOL32_REDEF(ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,
SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY,THIRTYONE,THIRTYTWO) B32R;
	
	
	B32R.bONE = false;
	B32R.bTWO = true;
	B32R.bTHREE = true;
	B32R.bFOUR = true;
	B32R.bFIVE = true;
	B32R.bSIX = true;
	B32R.bSEVEN = true;	
	B32R.bEIGHT = true;
	B32R.bNINE = true;
	B32R.bTEN = true;
	B32R.bELEVEN = true;
	B32R.bTWELVE = true;
	B32R.bTHIRTEEN = true;
	B32R.bFOURTEEN = true;	
	B32R.bFIFTEEN = true;	
	B32R.bSIXTEEN = true;
	B32R.bSEVENTEEN = true;
	B32R.bEIGHTEEN = true;
	B32R.bNINETEEN = true;
	B32R.bTWENTY = true;
	B32R.bTWENTYONE = true;
	B32R.bTWENTYTWO = true;
	B32R.bTWENTYTHREE = true;
	B32R.bTWENTYFOUR = true;
	B32R.bTWENTYFIVE = true;
	B32R.bTWENTYSIX = true;
	B32R.bTWENTYSEVEN = true;
	B32R.bTWENTYEIGHT = true;
	B32R.bTWENTYNINE = true;
	B32R.bTHIRTY = true;
	B32R.bTHIRTYONE = true;
	B32R.bTHIRTYTWO	 = true;

	printf("\n%X\n",B32R.value);
	printf("Static assighment is %s tested\n", B32R.value == 0xFFFFFFFE ? "Succesfuly" : "Unsuccesfuly");
	
	B32R = BOOL32(true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false);
	
	printf("BOOL32 contructor assigment is %s tested\n", B32R.value == 0x7FFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	B32R = 0xCCCCCCCC;
	
	printf("operator = and/or .value are %s tested\n", B32R.value == 0xCCCCCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B32R.size();i++)
		B32R(i,true);
	 

	printf("operator (index, value) is %s tested\n", B32R.value == 0xFFFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest32=0x00000000;
	for(char i=0; i<B32R.size()-1;i++)
		readTest32 |= B32R[i]<<i;
		
	printf("operator [] is %s tested\n", readTest32 == 0x7FFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");
	
	
	printf("BOOL32_REDEF_PREF testing:\n\n");
	
	BOOL32_REDEF_PREFIX(PREFIX_) B32RP0;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE) B32RP1;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO) B32RP2;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE) B32RP3;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR) B32RP4;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE) B32RP5;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX) B32RP6;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN) B32RP7;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT) B32RP8;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE) B32RP9;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN) B32RP10;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN) B32RP11;	
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE) B32RP12;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN) B32RP13;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN) B32RP14;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN) B32RP15;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN) B32RP16;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN) B32RP17;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN) B32RP18;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN) B32RP19;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY) B32RP20;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE) B32RP21;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO) B32RP22;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE) B32RP23;
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR) B32RP24;
		
	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE) B32RP25;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX) B32RP26;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN) B32RP27;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT) B32RP28;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE) B32RP29;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY) B32RP30;

	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY,THIRTYONE) B32RP31;

	

	



	BOOL32_REDEF_PREFIX(PREFIX_,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,ELEVEN,TWELVE,THIRTEEN,FOURTEEN,FIFTEEN,SIXTEEN,
SEVENTEEN,EIGHTEEN,NINETEEN,TWENTY,TWENTYONE,TWENTYTWO,TWENTYTHREE,TWENTYFOUR,TWENTYFIVE,TWENTYSIX,TWENTYSEVEN,TWENTYEIGHT,TWENTYNINE,THIRTY,THIRTYONE,THIRTYTWO) B32RP;
	
	
	B32RP.PREFIX_ONE = false;
	B32RP.PREFIX_TWO = true;
	B32RP.PREFIX_THREE = true;
	B32RP.PREFIX_FOUR = true;
	B32RP.PREFIX_FIVE = true;
	B32RP.PREFIX_SIX = true;
	B32RP.PREFIX_SEVEN = true;	
	B32RP.PREFIX_EIGHT = true;
	B32RP.PREFIX_NINE = true;
	B32RP.PREFIX_TEN = true;
	B32RP.PREFIX_ELEVEN = true;
	B32RP.PREFIX_TWELVE = true;
	B32RP.PREFIX_THIRTEEN = true;
	B32RP.PREFIX_FOURTEEN = true;	
	B32RP.PREFIX_FIFTEEN = true;	
	B32RP.PREFIX_SIXTEEN = true;
	B32RP.PREFIX_SEVENTEEN = true;
	B32RP.PREFIX_EIGHTEEN = true;
	B32RP.PREFIX_NINETEEN = true;
	B32RP.PREFIX_TWENTY = true;
	B32RP.PREFIX_TWENTYONE = true;
	B32RP.PREFIX_TWENTYTWO = true;
	B32RP.PREFIX_TWENTYTHREE = true;
	B32RP.PREFIX_TWENTYFOUR = true;
	B32RP.PREFIX_TWENTYFIVE = true;
	B32RP.PREFIX_TWENTYSIX = true;
	B32RP.PREFIX_TWENTYSEVEN = true;
	B32RP.PREFIX_TWENTYEIGHT = true;
	B32RP.PREFIX_TWENTYNINE = true;
	B32RP.PREFIX_THIRTY = true;
	B32RP.PREFIX_THIRTYONE = true;
	B32RP.PREFIX_THIRTYTWO	 = true;


	printf("Static assighment is %s tested\n", B32RP.value == 0xFFFFFFFE ? "Succesfuly" : "Unsuccesfuly");
	
	B32RP = BOOL32(true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false);
	
	printf("BOOL32 contructor assigment is %s tested\n", B32RP.value == 0x7FFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	B32RP = 0xCCCCCCCC;
	
	printf("operator = and/or .value are %s tested\n", B32RP.value == 0xCCCCCCCC ? "Succesfuly" : "Unsuccesfuly");	
	
	for(char i=0; i<B32RP.size()-2;i++)
		B32RP(i,true);
	 
	
	printf("operator (index, value) is %s tested\n", B32RP.value == 0xFFFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	readTest32=0x00000000;
	for(char i=0; i<B32RP.size()-1;i++)
		readTest32 |= B32RP[i]<<i;
		
	printf("operator [] is %s tested\n", readTest32 == 0x7FFFFFFF ? "Succesfuly" : "Unsuccesfuly");
	
	printf("\n");



}
