/*
	MIDTERM Take Home Exam
	Created by: Cj Han N. Matienzo
	Fundamentals in programming
	Class #576, CC 1101	
*/

//Header
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "myHeader.h"

#define DEL 25
int main(){
	int x=0, y=0, i=0, upper=0, lower=115; 
	clrscr();

//Background
for(i=0; i<=115; i++) {
	setColorTo(6);
	gotoxy(i * 1, 1);  
    printf("%c", 219); 
    gotoxy(i * 1, 2);  
    printf("%c", 219);
	gotoxy(i * 1, 3);
    printf("%c", 219);
    gotoxy(i * 1, 4);  
    printf("%c", 219);
	gotoxy(i * 1, 5);
    printf("%c", 219);
    gotoxy(i * 1, 6);  
    printf("%c", 219);
	gotoxy(i * 1, 7);
    printf("%c", 219);
    gotoxy(i * 1, 8);  
    printf("%c", 219);
	gotoxy(i * 1, 9);
    printf("%c", 219);
    gotoxy(i * 1, 10);  
    printf("%c", 219);
	gotoxy(i * 1, 11);
    printf("%c", 219);
    gotoxy(i * 1, 12);  
    printf("%c", 219); 
	gotoxy(i * 1, 13);
    printf("%c", 219);
    gotoxy(i * 1, 14);  
    printf("%c", 219);
	gotoxy(i * 1, 15);
    printf("%c", 219);
    gotoxy(i * 1, 16);  
    printf("%c", 219);
	gotoxy(i * 1, 17);
    printf("%c", 219);
    gotoxy(i * 1, 18);  
    printf("%c", 219);
	gotoxy(i * 1, 19);
    printf("%c", 219);
    gotoxy(i * 1, 20);  
    printf("%c", 219);
	gotoxy(i * 1, 21);
    printf("%c", 219);
    gotoxy(i * 1, 22);  
    printf("%c", 219);
	gotoxy(i * 1, 23);
    printf("%c", 219);
    gotoxy(i * 1, 24);  
    printf("%c", 219);
	delay(DEL);
	
} 

//Sliding Background
while (upper <= 115 && lower >= 0) {
    setColorTo(10);
    gotoxy(upper, 1);  
    printf("%c", 219); 
    gotoxy(upper, 2);  
    printf("%c", 219);  
    gotoxy(upper, 3);
    printf("%c", 219);

    setColorTo(2); 
    gotoxy(lower, 4);  
    printf("%c", 219);
    gotoxy(lower, 5);  
    printf("%c", 219);
    gotoxy(lower, 6);
    printf("%c", 219);
    gotoxy(lower, 7);
    printf("%c", 219);
	delay(DEL);  
	
    upper++;
    lower--;
}

//For Letter C
for(i = 13; i >= 11; i--) {
    setColorTo(7);
    gotoxy(20, i);  
    printf("%c", 219); 
    gotoxy(21, i);  
    printf("%c", 219);  
    gotoxy(22, i);
    printf("%c", 219);
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 11; i >= 10; i--) {
    gotoxy(20, i);  
    printf("%c", 219); 
    gotoxy(21, i);  
    printf("%c", 219);  
    gotoxy(22, i);
    printf("%c", 219); 
    delay(DEL);
}

for(i = 20; i >= 12; i--) {
    gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 11; i <= 18; i++) {
    gotoxy(10, i);  
    printf("%c", 219); 
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(12, i);
    printf("%c", 219);
    gotoxy(13, i);  
    printf("%c", 219);  
    gotoxy(14, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 12; i <= 22; i++) {
    gotoxy(i, 18);  
    printf("%c", 219); 
    gotoxy(i, 19);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 19; i >= 18; i--) {
    gotoxy(20, i);  
    printf("%c", 219); 
    gotoxy(21, i);  
    printf("%c", 219);  
    gotoxy(22, i);
    printf("%c", 219);  
    delay(DEL);
}

for(i = 18; i >= 16; i--) {
    gotoxy(20, i);  
    printf("%c", 219); 
    gotoxy(21, i);  
    printf("%c", 219);  
    gotoxy(22, i);
    printf("%c", 219);
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

//For Letter H 
for(i = 10; i <= 19; i++) {
    gotoxy(27, i);  
    printf("%c", 219); 
    gotoxy(28, i);  
    printf("%c", 219);  
    gotoxy(29, i);
    printf("%c", 219);
    gotoxy(30, i);  
    printf("%c", 219);  
    gotoxy(31, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 32; i <= 36; i++) {
    gotoxy(i, 14);  
    printf("%c", 219); 
    gotoxy(i, 15);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 10; i <= 19; i++) {
    gotoxy(37, i);  
    printf("%c", 219); 
    gotoxy(38, i);  
    printf("%c", 219);  
    gotoxy(39, i);
    printf("%c", 219);
    gotoxy(40, i);  
    printf("%c", 219);  
    gotoxy(41, i);
    printf("%c", 219);
    delay(DEL);
}

//For Letter N
for(i = 10; i <= 19; i++) {
    gotoxy(44, i);  
    printf("%c", 219); 
    gotoxy(45, i);  
    printf("%c", 219);  
    gotoxy(46, i);
    printf("%c", 219);
    gotoxy(47, i);  
    printf("%c", 219);  
    gotoxy(48, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 49; i <= 49; i++) {
    gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);  
    gotoxy(i, 12);  
    printf("%c", 219); 
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219);  
    delay(DEL);

}

for(i = 50; i <= 50; i++) {
    gotoxy(i, 11);  
    printf("%c", 219);  
    gotoxy(i, 12);  
    printf("%c", 219); 
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219);  
    delay(DEL);

}

for(i = 51; i <= 52; i++) {
    gotoxy(i, 12);  
    printf("%c", 219);  
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);  
    gotoxy(i, 15);  
    printf("%c", 219);  
    delay(DEL);

}

for(i = 53; i <= 54; i++) {
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219); 
    gotoxy(i, 15);  
    printf("%c", 219);  
    gotoxy(i, 16);  
    printf("%c", 219);  
    delay(DEL);

}

for(i = 10; i <= 19; i++) {
    gotoxy(55, i);  
    printf("%c", 219); 
    gotoxy(56, i);  
    printf("%c", 219);  
    gotoxy(57, i);
    printf("%c", 219);
    gotoxy(58, i);  
    printf("%c", 219);  
    gotoxy(59, i);
    printf("%c", 219);
    delay(DEL);
}

//For letter M 
for(i = 10; i <= 19; i++) {
    gotoxy(62, i);  
    printf("%c", 219); 
    gotoxy(63, i);  
    printf("%c", 219);  
    gotoxy(64, i);
    printf("%c", 219);
    gotoxy(65, i);  
    printf("%c", 219);  
    gotoxy(66, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 67; i <= 67; i++) {
    gotoxy(i, 11);  
    printf("%c", 219);  
    gotoxy(i, 12);  
    printf("%c", 219); 
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 68; i <= 68; i++) {
    gotoxy(i, 12);  
    printf("%c", 219);  
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);  
    gotoxy(i, 15);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 69; i <= 69; i++) {
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219); 
    gotoxy(i, 15);  
    printf("%c", 219);  
    gotoxy(i, 16);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 70; i <= 70; i++) {
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219); 
    gotoxy(i, 15);  
    printf("%c", 219);  
    gotoxy(i, 16);  
    printf("%c", 219);  
    delay(DEL);	
    gotoxy(i, 17);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 73; i <= 73; i++) {
    gotoxy(i, 11);  
    printf("%c", 219);  
    gotoxy(i, 12);  
    printf("%c", 219); 
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 72; i <= 72; i++) {
    gotoxy(i, 12);  
    printf("%c", 219);  
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);  
    gotoxy(i, 15);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 71; i <= 71; i++) {
    gotoxy(i, 13);  
    printf("%c", 219);  
    gotoxy(i, 14);  
    printf("%c", 219); 
    gotoxy(i, 15);  
    printf("%c", 219);  
    gotoxy(i, 16);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 10; i <= 19; i++) {
    gotoxy(74, i);  
    printf("%c", 219); 
    gotoxy(75, i);  
    printf("%c", 219);  
    gotoxy(76, i);
    printf("%c", 219);
    gotoxy(77, i);  
    printf("%c", 219);  
    gotoxy(78, i);
    printf("%c", 219);
    delay(DEL);
}

//For Letter C Dark Gray
for(i = 12; i <= 14; i++) {
	setColorTo(8);
    gotoxy(15, i);  
    printf("%c", 219); 
    gotoxy(16, i);  
    printf("%c", 219);  
    gotoxy(17, i);
    printf("%c", 219);
    gotoxy(18, i);  
    printf("%c", 219);  
    gotoxy(19, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 14; i <= 15; i++) {
    gotoxy(20, i);  
    printf("%c", 219); 
    gotoxy(21, i);  
    printf("%c", 219);  
    gotoxy(22, i);
    printf("%c", 219);
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 19; i <= 19; i++) {
    gotoxy(10, i);  
    printf("%c", 219); 
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 20; i <= 21; i++) {
    gotoxy(10, i);  
    printf("%c", 219); 
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(12, i);  
    printf("%c", 219);  
    gotoxy(13, i);
    printf("%c", 219);
    gotoxy(14, i);  
    printf("%c", 219); 
    gotoxy(15, i);  
    printf("%c", 219);  
    gotoxy(16, i);  
    printf("%c", 219);  
    gotoxy(17, i);
    printf("%c", 219);
    gotoxy(18, i);  
    printf("%c", 219); 
    gotoxy(19, i);  
    printf("%c", 219);  
    gotoxy(20, i);  
    printf("%c", 219);  
    gotoxy(21, i);
    printf("%c", 219);
    gotoxy(22, i);  
    printf("%c", 219); 
    gotoxy(23, i);  
    printf("%c", 219);   
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}
    
    for(i = 22; i <= 22; i++) {
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(12, i);  
    printf("%c", 219);  
    gotoxy(13, i);
    printf("%c", 219);
    gotoxy(14, i);  
    printf("%c", 219); 
    gotoxy(15, i);  
    printf("%c", 219);  
    gotoxy(16, i);  
    printf("%c", 219);  
    gotoxy(17, i);
    printf("%c", 219);
    gotoxy(18, i);  
    printf("%c", 219); 
    gotoxy(19, i);  
    printf("%c", 219);  
    gotoxy(20, i);  
    printf("%c", 219);  
    gotoxy(21, i);
    printf("%c", 219);
    gotoxy(22, i);  
    printf("%c", 219); 
    gotoxy(23, i);  
    printf("%c", 219);   
    delay(DEL);
}

//For Letter H Dark Gray
for(i = 16; i <= 18; i++) {
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(33, i);  
    printf("%c", 219);  
    gotoxy(34, i);
    printf("%c", 219);
    gotoxy(35, i);  
    printf("%c", 219);  
    gotoxy(36, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 20; i <= 22; i++) {
    gotoxy(27, i);  
    printf("%c", 219); 
    gotoxy(28, i);  
    printf("%c", 219);  
    gotoxy(29, i);
    printf("%c", 219);
    gotoxy(30, i);  
    printf("%c", 219);  
    gotoxy(31, i);
    printf("%c", 219);
    gotoxy(37, i);  
    printf("%c", 219); 
    gotoxy(38, i);  
    printf("%c", 219);  
    gotoxy(39, i);
    printf("%c", 219);
    gotoxy(40, i);  
    printf("%c", 219);  
    gotoxy(41, i);
    printf("%c", 219);
    delay(DEL);
}

//For Letter N Dark Gray
for(i = 15; i <= 15; i++) {
    gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(50, i); 
	printf("%c", 219);
    delay(DEL); 
}

for(i = 16; i <= 16; i++) {
    gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(50, i);  
    printf("%c", 219);  
    gotoxy(51, i);
    printf("%c", 219);
    gotoxy(52, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 17; i <= 17; i++) {
    gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(50, i);  
    printf("%c", 219);  
    gotoxy(51, i);
    printf("%c", 219);
    gotoxy(52, i);  
    printf("%c", 219);  
    gotoxy(53, i);
    printf("%c", 219);
    gotoxy(54, i);  
    printf("%c", 219);
    delay(DEL);
}

for(i = 18; i <= 18; i++) {
    gotoxy(51, i);
    printf("%c", 219);
    gotoxy(52, i);  
    printf("%c", 219);  
    gotoxy(53, i);
    printf("%c", 219);
    gotoxy(54, i);  
    printf("%c", 219);
    delay(DEL);
}
for(i = 19; i <= 19; i++) { 
    gotoxy(53, i);
    printf("%c", 219);
    gotoxy(54, i);  
    printf("%c", 219);
    delay(DEL);
}

for(i = 20; i <= 22; i++) {
    gotoxy(44, i);  
    printf("%c", 219); 
    gotoxy(45, i);  
    printf("%c", 219);  
    gotoxy(46, i);
    printf("%c", 219);
    gotoxy(47, i);  
    printf("%c", 219);  
    gotoxy(48, i);
    printf("%c", 219);
    gotoxy(55, i);  
    printf("%c", 219); 
    gotoxy(56, i);  
    printf("%c", 219);  
    gotoxy(57, i);
    printf("%c", 219);
    gotoxy(58, i);  
    printf("%c", 219);  
    gotoxy(59, i);
    printf("%c", 219);
    delay(DEL);
}

//For letter M Dark Gray
for(i = 15; i <= 15; i++) {
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(73, i); 
	printf("%c", 219);
    delay(DEL); 
}
for(i = 16; i <= 16; i++) {
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(68, i);  
    printf("%c", 219);
    gotoxy(72, i);  
    printf("%c", 219);
    gotoxy(73, i); 
	printf("%c", 219);
    delay(DEL); 
}
for(i = 17; i <= 17; i++) {
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(68, i);  
    printf("%c", 219);
    gotoxy(69, i);  
    printf("%c", 219);
    gotoxy(71, i); 
	printf("%c", 219); 
    gotoxy(72, i);  
    printf("%c", 219);
    gotoxy(73, i); 
	printf("%c", 219);
    delay(DEL); 
}
for(i = 18; i <= 18; i++) {
    gotoxy(69, i);  
    printf("%c", 219);
    gotoxy(70, i);  
    printf("%c", 219);
    gotoxy(71, i); 
	printf("%c", 219); 
    delay(DEL); 
}
for(i = 19; i <= 19; i++) {
    gotoxy(70, i);  
    printf("%c", 219);
    delay(DEL); 
}
for(i = 20; i <= 22; i++) {
    gotoxy(62, i);  
    printf("%c", 219); 
    gotoxy(63, i);  
    printf("%c", 219);  
    gotoxy(64, i);
    printf("%c", 219);
    gotoxy(65, i);  
    printf("%c", 219);  
    gotoxy(66, i);
    printf("%c", 219);
    gotoxy(74, i);  
    printf("%c", 219); 
    gotoxy(75, i);  
    printf("%c", 219);  
    gotoxy(76, i);
    printf("%c", 219);
    gotoxy(77, i);  
    printf("%c", 219);  
    gotoxy(78, i);
    printf("%c", 219);
    delay(DEL);
}

//For C Black
for(i = 23; i >= 23; i--) {
	setColorTo(0);
    gotoxy(10, i);  
    printf("%c", 219); 
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(12, i);
    printf("%c", 219);  
    gotoxy(13, i);  
    printf("%c", 219); 
    gotoxy(14, i);  
    printf("%c", 219);  
    gotoxy(15, i);
    printf("%c", 219); 
    gotoxy(16, i);  
    printf("%c", 219); 
    gotoxy(17, i);  
    printf("%c", 219);  
    gotoxy(18, i);
    printf("%c", 219); 
    gotoxy(19, i);  
    printf("%c", 219); 
    gotoxy(20, i);  
    printf("%c", 219);  
    gotoxy(21, i);
    printf("%c", 219); 
    gotoxy(22, i);  
    printf("%c", 219); 
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 22; i >= 22; i--) {
    gotoxy(9, i);  
    printf("%c", 219);   
    gotoxy(10, i);
    printf("%c", 219); 
    gotoxy(24, i);  
    printf("%c", 219);   
    gotoxy(25, i);
    printf("%c", 219); 
    delay(DEL);
}

for(i = 22; i >= 10; i--) {
    gotoxy(8, i);  
    printf("%c", 219);   
    gotoxy(9, i);
    printf("%c", 219);  
    gotoxy(25, i);
    printf("%c", 219); 
    delay(DEL);
}

for(i = 10; i >= 10; i--) {
    gotoxy(10, i);  
    printf("%c", 219);   
    gotoxy(11, i);
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);  
    gotoxy(23, i);
    printf("%c", 219); 
    delay(DEL);
}

for(i = 9; i >= 9; i--) {
    gotoxy(10, i);  
    printf("%c", 219); 
    gotoxy(11, i);  
    printf("%c", 219);  
    gotoxy(12, i);
    printf("%c", 219);  
    gotoxy(13, i);  
    printf("%c", 219); 
    gotoxy(14, i);  
    printf("%c", 219);  
    gotoxy(15, i);
    printf("%c", 219); 
    gotoxy(16, i);  
    printf("%c", 219); 
    gotoxy(17, i);  
    printf("%c", 219);  
    gotoxy(18, i);
    printf("%c", 219); 
    gotoxy(19, i);  
    printf("%c", 219); 
    gotoxy(20, i);  
    printf("%c", 219);  
    gotoxy(21, i);
    printf("%c", 219); 
    gotoxy(22, i);  
    printf("%c", 219); 
    gotoxy(23, i);  
    printf("%c", 219);  
    gotoxy(24, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 15; i <= 17; i++) {
    gotoxy(15, i);  
    printf("%c", 219);   
    gotoxy(16, i);
    printf("%c", 219); 
    gotoxy(17, i);  
    printf("%c", 219);   
    gotoxy(18, i);
    printf("%c", 219); 
    gotoxy(19, i);
    printf("%c", 219); 
    delay(DEL);
}

//For Letter H Black
for(i = 9; i >= 9; i--) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(27, i);  
    printf("%c", 219);  
    gotoxy(28, i);
    printf("%c", 219);  
    gotoxy(29, i);  
    printf("%c", 219); 
    gotoxy(30, i);  
    printf("%c", 219);  
    gotoxy(31, i);
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);  
    gotoxy(37, i);
    printf("%c", 219); 
    gotoxy(38, i);  
    printf("%c", 219); 
    gotoxy(39, i);  
    printf("%c", 219);  
    gotoxy(40, i);
    printf("%c", 219); 
    gotoxy(41, i);  
    printf("%c", 219); 
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 10; i <= 12; i++) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);   
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 13; i >= 13; i--) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(33, i);  
    printf("%c", 219);  
    gotoxy(34, i);
    printf("%c", 219); 
    gotoxy(35, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);  
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 14; i <= 18; i++) {
    gotoxy(26, i);  
    printf("%c", 219);    
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 19; i >= 19; i--) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(33, i);  
    printf("%c", 219);  
    gotoxy(34, i);
    printf("%c", 219); 
    gotoxy(35, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);  
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 20; i <= 22; i++) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);   
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 23; i >= 23; i--) {
    gotoxy(26, i);  
    printf("%c", 219); 
    gotoxy(27, i);  
    printf("%c", 219);  
    gotoxy(28, i);
    printf("%c", 219);  
    gotoxy(29, i);  
    printf("%c", 219); 
    gotoxy(30, i);  
    printf("%c", 219);  
    gotoxy(31, i);
    printf("%c", 219); 
    gotoxy(32, i);  
    printf("%c", 219); 
    gotoxy(36, i);  
    printf("%c", 219);  
    gotoxy(37, i);
    printf("%c", 219); 
    gotoxy(38, i);  
    printf("%c", 219); 
    gotoxy(39, i);  
    printf("%c", 219);  
    gotoxy(40, i);
    printf("%c", 219); 
    gotoxy(41, i);  
    printf("%c", 219); 
    gotoxy(42, i);  
    printf("%c", 219);  
    delay(DEL);
}

//For Letter N Black
for(i = 23; i >= 23; i--) {
    gotoxy(43, i);  
    printf("%c", 219); 
    gotoxy(44, i);  
    printf("%c", 219);  
    gotoxy(45, i);
    printf("%c", 219);  
    gotoxy(46, i);  
    printf("%c", 219); 
    gotoxy(47, i);  
    printf("%c", 219);  
    gotoxy(48, i);
    printf("%c", 219); 
    gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(54, i);  
    printf("%c", 219);  
    gotoxy(55, i);
    printf("%c", 219); 
    gotoxy(56, i);  
    printf("%c", 219); 
    gotoxy(57, i);  
    printf("%c", 219);  
    gotoxy(58, i);
    printf("%c", 219); 
    gotoxy(59, i);  
    printf("%c", 219); 
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 22; i >= 21; i--) {
    gotoxy(43, i);
    printf("%c", 219);
    gotoxy(49, i);
    printf("%c", 219);
    gotoxy(54, i);
    printf("%c", 219);
    gotoxy(60, i);
    printf("%c", 219);
    delay(DEL);
}

for(i = 20; i >= 20; i--) {
    gotoxy(43, i);  
    printf("%c", 219); 
    gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(52, i);  
    printf("%c", 219);   
    gotoxy(53, i);  
    printf("%c", 219); 
    gotoxy(54, i);  
    printf("%c", 219);   
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 19; i >= 19; i--) {
    gotoxy(43, i);  
    printf("%c", 219);
	gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(50, i);  
    printf("%c", 219);  
    gotoxy(51, i);  
    printf("%c", 219); 
    gotoxy(52, i);    
    printf("%c", 219);   
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 18; i >= 18; i--) {
    gotoxy(43, i);  
    printf("%c", 219);
	gotoxy(49, i);  
    printf("%c", 219); 
    gotoxy(50, i);  
    printf("%c", 219);    
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 17; i >= 13; i--) {
    gotoxy(43, i);  
    printf("%c", 219);  
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 12; i >= 12; i--) {
    gotoxy(43, i);
    printf("%c", 219);  
    gotoxy(53, i);
    printf("%c", 219);  
    gotoxy(54, i);
    printf("%c", 219);  
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 11; i >= 11; i--) {
    gotoxy(43, i);
    printf("%c", 219);  
    gotoxy(51, i);
    printf("%c", 219);  
    gotoxy(52, i);
    printf("%c", 219);  
    gotoxy(53, i);
    printf("%c", 219);  
    gotoxy(54, i);
    printf("%c", 219);  
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 10; i >= 10; i--) {
    gotoxy(43, i);
    printf("%c", 219);  
    gotoxy(50, i);
    printf("%c", 219);  
    gotoxy(51, i);
    printf("%c", 219);   
    gotoxy(54, i);
    printf("%c", 219);  
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 9; i >= 9; i--) {
    gotoxy(43, i);
    printf("%c", 219);  
    gotoxy(44, i);
    printf("%c", 219);  
    gotoxy(45, i);
    printf("%c", 219);  
    gotoxy(46, i);
    printf("%c", 219);  
    gotoxy(47, i);
    printf("%c", 219);  
    gotoxy(48, i);
    printf("%c", 219);  
    gotoxy(49, i);
    printf("%c", 219);  
    gotoxy(50, i);
    printf("%c", 219);       
    gotoxy(54, i);
    printf("%c", 219);  
    gotoxy(55, i);
    printf("%c", 219);  
    gotoxy(56, i);
    printf("%c", 219);  
    gotoxy(57, i);
    printf("%c", 219);  
    gotoxy(58, i);
    printf("%c", 219);  
    gotoxy(59, i);
    printf("%c", 219); 
    gotoxy(60, i);  
    printf("%c", 219);  
    delay(DEL);
}

//For Letter M Black
for(i = 9; i <= 9; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(62, i);  
    printf("%c", 219);  
    gotoxy(63, i);
    printf("%c", 219);  
    gotoxy(64, i);  
    printf("%c", 219); 
    gotoxy(65, i);  
    printf("%c", 219);  
    gotoxy(66, i);
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(73, i);  
    printf("%c", 219);  
    gotoxy(74, i);
    printf("%c", 219); 
    gotoxy(75, i);  
    printf("%c", 219); 
    gotoxy(76, i);  
    printf("%c", 219);  
    gotoxy(77, i);
    printf("%c", 219); 
    gotoxy(78, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219); 
	gotoxy(80, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 10; i <= 10; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(68, i);  
    printf("%c", 219); 
    gotoxy(72, i);  
    printf("%c", 219); 
    gotoxy(73, i);  
    printf("%c", 219);  
    gotoxy(79, i);  
    printf("%c", 219);  
    gotoxy(80, i);  
    printf("%c", 219); 
    delay(DEL);
}

for(i = 11; i <= 11; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(68, i);  
    printf("%c", 219); 
    gotoxy(69, i);  
    printf("%c", 219); 
    gotoxy(71, i);  
    printf("%c", 219); 
    gotoxy(72, i);  
    printf("%c", 219);  
    gotoxy(79, i);  
    printf("%c", 219);
	gotoxy(80, i);  
    printf("%c", 219);   
    delay(DEL);
}

for(i = 12; i <= 12; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(69, i);  
    printf("%c", 219); 
    gotoxy(70, i);  
    printf("%c", 219); 
    gotoxy(71, i);  
    printf("%c", 219);  
    gotoxy(79, i);  
    printf("%c", 219); 
	gotoxy(80, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 13; i <= 17; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219);  
    delay(DEL);
    gotoxy(80, i);  
    printf("%c", 219); 
}

for(i = 18; i <= 18; i++) {
    gotoxy(61, i);
    printf("%c", 219); 
    gotoxy(67, i);
    printf("%c", 219);  
    gotoxy(68, i);
    printf("%c", 219); 
    gotoxy(72, i);
    printf("%c", 219);  
    gotoxy(73, i);
    printf("%c", 219); 
    gotoxy(79, i);
    printf("%c", 219);
	gotoxy(80, i);  
    printf("%c", 219);   
    delay(DEL);
}

for(i = 19; i <= 19; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219);  
    gotoxy(68, i);  
    printf("%c", 219); 
    gotoxy(69, i);   
    printf("%c", 219); 
    gotoxy(71, i);  
    printf("%c", 219);  
    gotoxy(72, i);  
    printf("%c", 219); 
    gotoxy(73, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219); 
	gotoxy(80, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 20; i <= 20; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219);  
    gotoxy(69, i);   
    printf("%c", 219); 
    gotoxy(70, i);
	printf("%c", 219);  
    gotoxy(71, i);    
    printf("%c", 219);  
    gotoxy(73, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219); 
	gotoxy(80, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 21; i <= 22; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219);  
    gotoxy(73, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219);
	gotoxy(80, i);  
    printf("%c", 219);  
    delay(DEL);
}

for(i = 23; i <= 23; i++) {
    gotoxy(61, i);  
    printf("%c", 219); 
    gotoxy(62, i);  
    printf("%c", 219);  
    gotoxy(63, i);
    printf("%c", 219);  
    gotoxy(64, i);  
    printf("%c", 219); 
    gotoxy(65, i);  
    printf("%c", 219);  
    gotoxy(66, i);
    printf("%c", 219); 
    gotoxy(67, i);  
    printf("%c", 219); 
    gotoxy(73, i);  
    printf("%c", 219);  
    gotoxy(74, i);
    printf("%c", 219); 
    gotoxy(75, i);  
    printf("%c", 219); 
    gotoxy(76, i);  
    printf("%c", 219);  
    gotoxy(77, i);
    printf("%c", 219); 
    gotoxy(78, i);  
    printf("%c", 219); 
    gotoxy(79, i);  
    printf("%c", 219);
	gotoxy(80, i);  
    printf("%c", 219);   
    delay(DEL);
}

//For My Name and Section
setColorTo(2);
for(i = 20; i <= 20; i++) {
    gotoxy(i, 2);  
    printf("WELCOME TO MY WORLD   CC-1101 COMPUTER PROGRAMMING"); 
    delay(DEL);
}

for(i = 20; i <= 20; i++) {
    gotoxy(i, 4);  
    printf("CJ"); 
    delay(DEL);
}

for(i = 33; i <= 33; i++) {
    gotoxy(i, 4);  
    printf("HAN"); 
    delay(DEL);
}
for(i = 47; i <= 47; i++) {
    gotoxy(i, 4);  
    printf("NOMO"); 
    delay(DEL);
}
for(i = 62; i <= 62; i++) {
    gotoxy(i, 4);  
    printf("MATIENZO"); 
    delay(DEL);
}

for(i = 37; i <= 37; i++) {
    gotoxy(i, 6);  
    printf("BSIT-SD1A"); 
    delay(DEL);
}

//Anime Character
for(i = 87; i <= 87; i++) {
	setColorTo(0);
	gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    delay(50);
}

for(i = 88; i <= 88; i++) {
	setColorTo(0);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 19);
    printf("%c", 219);
    delay(50);
}


for(i = 89; i <= 89; i++) {
	setColorTo(0);
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10); 
    printf("%c", 219); 
    setColorTo(5);
    gotoxy(i, 11);  
    printf("%c", 219);
	setColorTo(13);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    delay(50);
}

for(i = 90; i <= 90; i++) {
	setColorTo(0);
	gotoxy(i, 7);  
    printf("%c", 219); 
    setColorTo(5);
	gotoxy(i, 8);  
    printf("%c", 219); 
    setColorTo(13);
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 20);
    printf("%c", 219);
    delay(50);
}

for(i = 91; i <= 91; i++) {
	setColorTo(0);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 13);  
    printf("%c", 219);
	setColorTo(5); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 92; i <= 92; i++) {
	setColorTo(0);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(14);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(12);
    gotoxy(i, 16);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 17);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 22);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}


for(i = 93; i <= 93; i++) {
	setColorTo(0);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(2);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(12);
    gotoxy(i, 16);  
    printf("%c", 219);
	setColorTo(14); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(5);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 94; i <= 94; i++) {
	setColorTo(0);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219);
	setColorTo(5); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10); 
    printf("%c", 219);
	setColorTo(13);  
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(2);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(14);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(3);
    gotoxy(i, 22);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 95; i <= 95; i++) {
	setColorTo(0);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 21);
    printf("%c", 219);
    gotoxy(i, 22);
    printf("%c", 219);
    setColorTo(3);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 96; i <= 96; i++) {
	setColorTo(0);
	gotoxy(i, 3);  
    printf("%c", 219);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    setColorTo(13);
    gotoxy(i, 17);  
    printf("%c", 219);
    setColorTo(14);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(4);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 97; i <= 97; i++) {
	setColorTo(0);
	gotoxy(i, 2);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 3);  
    printf("%c", 219);
	gotoxy(i, 4);  
    printf("%c", 219);
	gotoxy(i, 5);  
    printf("%c", 219);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    setColorTo(5);
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    setColorTo(13);
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(4);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(7);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 98; i <= 98; i++) {
	setColorTo(0);
	gotoxy(i, 1);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 2);  
    printf("%c", 219);
	gotoxy(i, 3);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(4);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 99; i <= 99; i++) {
	setColorTo(0);
	gotoxy(i, 1);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 2);  
    printf("%c", 219);
	gotoxy(i, 3);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(2);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(14);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(3);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 100; i <= 100; i++) {
	setColorTo(0);
	gotoxy(i, 1);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 2);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 3);  
    printf("%c", 219);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(2);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(12);
    gotoxy(i, 16);  
    printf("%c", 219); 
    setColorTo(14);
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(3);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 101; i <= 101; i++) {
	setColorTo(0);
	gotoxy(i, 2);  
    printf("%c", 219); 
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 5);  
    printf("%c", 219);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(14);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    setColorTo(12);
    gotoxy(i, 16);  
    printf("%c", 219);
	setColorTo(14); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(3);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(15);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 102; i <= 102; i++) {
	setColorTo(0);
	gotoxy(i, 4);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(13);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
    setColorTo(14);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(13);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(7);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 103; i <= 103; i++) {
	setColorTo(0);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 13);  
    printf("%c", 219); 
    setColorTo(13);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(5);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 104; i <= 104; i++) {
	setColorTo(0);
	gotoxy(i, 5);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(5);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 21);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 22);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 105; i <= 105; i++) {
    setColorTo(0);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 21);
    printf("%c", 219);
    gotoxy(i, 22);
    printf("%c", 219);
    setColorTo(8);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}

for(i = 106; i <= 106; i++) {
    setColorTo(0);
	gotoxy(i, 6);  
    printf("%c", 219); 
    setColorTo(13);
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 18);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 19);
    printf("%c", 219);
    gotoxy(i, 20);
    printf("%c", 219);
    gotoxy(i, 23);
    printf("%c", 219);
    delay(50);
}


for(i = 107; i <= 107; i++) {
    setColorTo(0);
	gotoxy(i, 6);  
    printf("%c", 219); 
	gotoxy(i, 7);  
    printf("%c", 219); 
	gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	gotoxy(i, 10);  
    printf("%c", 219); 
    setColorTo(5);
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 20);
    printf("%c", 219);
    delay(50);
}


for(i = 108; i <= 108; i++) {
	setColorTo(0);
    gotoxy(i, 11);  
    printf("%c", 219);
	gotoxy(i, 12);
    printf("%c", 219);
    gotoxy(i, 13);  
    printf("%c", 219); 
    gotoxy(i, 14);  
    printf("%c", 219);
    setColorTo(5);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 20);
    printf("%c", 219);
    delay(50);
}

for(i = 109; i <= 109; i++) {
	setColorTo(0);
    gotoxy(i, 14);  
    printf("%c", 219);
	gotoxy(i, 15);
    printf("%c", 219);
    gotoxy(i, 16);  
    printf("%c", 219); 
    gotoxy(i, 17);  
    printf("%c", 219);
	gotoxy(i, 18);
    printf("%c", 219);
    gotoxy(i, 19);
    printf("%c", 219);
    delay(50);
}

//Heart
for (int i = 3; i <= 3; i++) {
	setColorTo(0); 
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219); 
    delay(DEL);  
}

for (int i = 4; i <= 4; i++) {
	setColorTo(0); 
    gotoxy(i, 6);  
    printf("%c", 219);
    setColorTo(4);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
	setColorTo(0); 
    gotoxy(i, 10);  
    printf("%c", 219);
    delay(DEL);  
}
	
for (int i = 5; i <= 5; i++) {
	setColorTo(0); 
    gotoxy(i, 6); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
	setColorTo(0);
    gotoxy(i, 11);  
    printf("%c", 219);
    delay(DEL);  
}
	
for (int i = 6; i <= 6; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 7; i <= 7; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}		
	
for (int i = 8; i <= 8; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 9; i <= 9; i++) {
	setColorTo(0);
    gotoxy(i, 6); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}		
	
	
for (int i = 10; i <= 10; i++) {
	setColorTo(0);
    gotoxy(i, 7);  
    printf("%c", 219); 
    setColorTo(4);
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}			
	
for (int i = 11; i <= 11; i++) {
	setColorTo(0);
    gotoxy(i, 7);  
    printf("%c", 219); 
    setColorTo(4);
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}		
	
for (int i = 12; i <= 12; i++) {
	setColorTo(0);
    gotoxy(i, 6); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}		
	
for (int i = 13; i <= 13; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    gotoxy(i, 11);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 12);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 14; i <= 14; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 11);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 15; i <= 15; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 11);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 16; i <= 16; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    setColorTo(0);
    gotoxy(i, 11);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 17; i <= 17; i++) {
	setColorTo(0);
    gotoxy(i, 5); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 6); 
    printf("%c", 219);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    setColorTo(0);
    gotoxy(i, 9);  
    printf("%c", 219);
    gotoxy(i, 10);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 18; i <= 18; i++) {
	setColorTo(0);
    gotoxy(i, 6); 
    printf("%c", 219);
    setColorTo(4); 
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    setColorTo(0);
    gotoxy(i, 9);  
    printf("%c", 219);
    delay(DEL);  
}	
	
for (int i = 19; i <= 19; i++) {
	setColorTo(0);
    gotoxy(i, 7);  
    printf("%c", 219); 
    gotoxy(i, 8);  
    printf("%c", 219); 
    delay(DEL);  
}	

//For Heart White
for (int i = 5; i <= 6; i++) {
	setColorTo(15);
    gotoxy(i, 9);  
    printf("%c", 219); 
    delay(400);  
}

for (int i = 6; i <= 7; i++) {
	setColorTo(15);
    gotoxy(i, 10);  
    printf("%c", 219); 
    delay(400);  
}

for (int i = 14; i <= 14; i++) {
	setColorTo(15);
    gotoxy(i, 7);  
    printf("%c", 219); 
    delay(400);  
}

for (int i = 15; i <= 15; i++) {
	setColorTo(15);
    gotoxy(i, 8);  
    printf("%c", 219); 
    delay(400);  
}

//For The Top LED
while (1) { 
	for (int i = 0; i <= 115; i++) {
		setColorTo(0); 
    	gotoxy(i, 0);  
    	printf("%c", 219); 
    	delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(1); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }    
	
	for (int i = 0; i <= 115; i++) {
	    setColorTo(2); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(3); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        } 
	    
    for (int i = 0; i <= 115; i++) {
	    setColorTo(4); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(5); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }    
	
	for (int i = 0; i <= 115; i++) {
	    setColorTo(6); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(7); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }  		
	    
    for (int i = 0; i <= 115; i++) {
	    setColorTo(8); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(9); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }    
	
	for (int i = 0; i <= 115; i++) {
	    setColorTo(10); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(11); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }  	
	    
    for (int i = 0; i <= 115; i++) {
	    setColorTo(12); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(13); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }    
	
	for (int i = 0; i <= 115; i++) {
	    setColorTo(14); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }
        
    for (int i = 115; i >= 0; i--) {
	    setColorTo(15); 
        gotoxy(i, 0);  
        printf("%c", 219); 
        delay(DEL);  
        }  		
		
	    	break;
}

	getch();

	return 0;
}

