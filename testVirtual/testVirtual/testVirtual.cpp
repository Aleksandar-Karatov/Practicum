// testVirtual.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <assert.h>
#include "Album.h"
#include <map>
#include <string>
#include <math.h>
#include"MusicPiece.h"
#include "EP.h"

int main()
{
	Album a1(7);
	Album a2(123);
	a1.print();
	a2.print();
	MusicPiece* a3 = a1.mergePieces(&a2);
	a3->print();
	MusicPiece* a4 = a1.clone();
	a4->print();
	MusicPiece* a5 = a1.addSong();
	a5->print();
	MusicPiece* a6 = a2.takeOutSongs(&a1);
	a6->print();
	bool b1 = a1.equals(&a2);
	bool b2 = a1.equals(a4);
	std::cout << b1 << std::endl << b2 << std::endl;

	EP e1(3);
	EP e2(2);
	e1.print();
	e2.print();
	MusicPiece* e3 = e1.mergePieces(&e2);
	e3->print();
	MusicPiece* e4 = e1.clone();
	e4->print();
	MusicPiece* e5 = e1.addSong();
	e5->print();
	MusicPiece* e6 = e2.takeOutSongs(&e1);
	e6->print();
	bool be1 = e1.equals(&e2);
	bool be2 = e1.equals(e4);
	std::cout << be1 << std::endl << be2 << std::endl;
	MusicPiece** arr = new MusicPiece*[10];
	arr[0] = &a1;
	arr[1] = &e1;
	arr[2] = &a2;
	arr[3] = e5;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << "i: " << i << ": ";
		arr[i]->print();
		
	}
	//try
	//{
	//	MusicPiece* e7 = e1.mergePieces(&a1);
	//}
	//catch (const std::exception&)
	//{
	//	std::cout << "can not do";
	//}

}


